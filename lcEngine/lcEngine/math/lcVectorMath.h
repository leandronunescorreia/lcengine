#ifndef LCVECTORMATH
#define LCVECTORMATH

#include <math.h>
#include "lcvector.h"

#include "..\interfaces\IVectorMath.h"
#include "..\interfaces\IVector.h"

class lcVectorMath : public IVectorMath
{
public:
	IVector* add(IVector &v1, IVector &v2);
	IVector* sub(IVector &v1, IVector &v2);
	IVector* mul(IVector &v1, IVector &v2);
	IVector* div(IVector &v1, float factor);
	IVector* scl(IVector &v1, float factor);
	IVector* cxp(IVector &v1, IVector &v2);
	IVector* nrm(IVector &v1);

	float dot(IVector &v1, IVector &v2);
	float dis(IVector &v1, IVector &v2);
	float mag(IVector &v1);

	IVector* lcVectorMath::add(IVector &v1, IVector &v2)
	{
		return VECTOR(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	}

	IVector* lcVectorMath::sub(IVector &v1, IVector &v2)
	{
		return VECTOR(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	}

	IVector* lcVectorMath::mul(IVector &v1, IVector &v2)
	{
		return VECTOR(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
	}

	IVector* lcVectorMath::scl(IVector &v1, float factor)
	{
		return VECTOR(v1.x * factor, v1.y * factor, v1.z * factor);
	}

	IVector* lcVectorMath::div(IVector &v1, float factor)
	{
		return VECTOR(v1.x / factor, v1.y / factor, v1.z / factor);
	}

	IVector* lcVectorMath::cxp(IVector &v1, IVector &v2)
	{
		return VECTOR(((v1.y*v2.z) - (v1.z*v2.y)), ((v1.z*v2.x) - (v1.x*v2.z)), ((v1.x*v2.y) - (v1.y*v2.x)));
	}

	IVector* lcVectorMath::nrm(IVector &v1)
	{
		return div(&v1, mag(v1));
	}

	float lcVectorMath::dot(IVector &v1, IVector &v2)
	{
		return (v1.x*v2.x) + (v1.y*v2.y) + (v1.z*v2.z);
	}

	float lcVectorMath::dis(IVector &v1, IVector &v2)
	{
		return mag(sub(&v1, &v2));
	}

	float lcVectorMath::mag(IVector &v1)
	{
		return sqrt((v1.x*v1.x) + (v1.y + v1.y) + (v1.z + v1.z));
	}
};



#endif // !LCVECTORMATH
