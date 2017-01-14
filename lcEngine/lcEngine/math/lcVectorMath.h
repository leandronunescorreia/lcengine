#ifndef LCVECTORMATH
#define LCVECTORMATH

#include <math.h>
#include "lcvector.h"

template <class T>
class lcVectorMath
{
public:
	lcVector3<T> add(lcVector3<T> v1, lcVector3<T> v2);
	lcVector3<T> sub(lcVector3<T> v1, lcVector3<T> v2);
	lcVector3<T> mul(lcVector3<T> v1, lcVector3<T> v2);
	lcVector3<T> div(lcVector3<T> v1, T factor);
	lcVector3<T> scl(lcVector3<T> v1, T factor);
	lcVector3<T> xxx(lcVector3<T> v1, lcVector3<T> v2);
	lcVector3<T> nrm(lcVector3<T> v1);

	T dot(lcVector3<T> v1, lcVector3<T> v2);
	T dis(lcVector3<T> v1, lcVector3<T> v2);
	T mag(lcVector3<T> v1);

	template <class T>
	lcVector3<T> lcVectorMath::add(lcVector3<T> v1, lcVector3<T> v2)
	{
		return new lcVector3<T>(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	}

	template <class T>
	lcVector3<T> lcVectorMath::sub(lcVector3<T> v1, lcVector3<T> v2)
	{
		return new lcVector3<T>(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	}

	template <class T>
	lcVector3<T>  lcVectorMath::mul(lcVector3<T> v1, lcVector3<T> v2)
	{
		return new lcVector3<T>(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
	}

	template <class T>
	lcVector3<T> lcVectorMath::scl(lcVector3<T> v1, T factor)
	{
		return new lcVector3<T>(v1.x * factor, v1.y * factor, v1.z * factor);
	}

	template <class T>
	lcVector3<T> lcVectorMath::div(lcVector3<T> v1, T factor)
	{
		return new lcVector3<T>(v1.x / factor, v1.y / factor, v1.z / factor);
	}

	template<class T>
	lcVector3<T> lcVectorMath::xxx(lcVector3<T> v1, lcVector3<T> v2)
	{
		return lcVector3(((v1.y*v2.z) - (v1.z*v2.y)), ((v1.z*v2.x) - (v1.x*v2.z)), ((v1.x*v2.y) - (v1.y*v2.x)));
	}

	template<class T>
	lcVector3<T> lcVectorMath::nrm(lcVector3<T> v1)
	{
		return div(v1, mag(v1));
	}

	template<class T>
	T lcVectorMath::dot(lcVector3<T> v1, lcVector3<T> v2)
	{
		return (v1.x*v2.x) + (v1.y*v2.y) + (v1.z*v2.z);
	}

	template<class T>
	T lcVectorMath::dis(lcVector3<T> v1, lcVector3<T> v2)
	{
		return mag(sub(v1, v2));
	}

	template<class T>
	T lcVectorMath::mag(lcVector3<T> v1)
	{
		return (T)sqrt((T)(v1.x*v1.x) + (T)(v1.y + v1.y) + (T)(v1.z + v1.z));
	}
};



#endif // !LCVECTORMATH
