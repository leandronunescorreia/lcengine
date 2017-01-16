#ifndef IVECTOR
#define IVECTOR

class IVector
{
public:
	virtual ~IVector() { delete this; }

	virtual float getX() const = 0;
	virtual float getY() const = 0;
	virtual float getZ() const = 0;
	virtual float getW() const = 0;
};


extern "C" __declspec(dllexport) IVector* VECTOR( float x, float y, float z, float w)
{
	return new lcVector(x,y,z,w);
}

#endif//!IVECTOR
