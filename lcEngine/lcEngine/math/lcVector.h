#ifndef LCVECfloatOR
#define LCVECfloatOR

#include "..\interfaces\IVector.h"

class lcVector : public IVector
{
	public:
		lcVector() : x(0), y(0), z(0), w(0) {}
		lcVector(float X, float Y, float Z, float W) : x(X), y(Y), z(Z), w(W) {}
		~lcVector() { delete this; }

		float getX() const { return x; }
		float getY() const { return y; }
		float getZ() const { return z; }
		float getW() const { return w; }
	private:
		float x, y, z, w;
};

#endif //!LCVECfloatOR