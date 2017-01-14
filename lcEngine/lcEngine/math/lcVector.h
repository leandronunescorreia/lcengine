#ifndef LCVECTOR
#define LCVECTOR

template<typename T>
class LCVector
{
	public:
		LCVector() : x((T)0), y((T)0), z((T)0), w((T)0);
		LCVector(T X, T Y, T Z, T W) : x((T)X), y((T)Y), z((T)Z), w((T)W);
		~LCVector() {delete this};

		getX(return x;) const;
		getY(return y;) const;
		getZ(return z;) const;
		getW(return w) const;
	private:
		T x, y, z, w;
};

#endif !LCVECTOR