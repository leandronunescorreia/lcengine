#ifndef IVECTORMATH
#define IVECTORMATH

#include "IVector.h"

class IVectorMath
{
public:
	virtual IVector* add(IVector &v1, IVector &v2) = 0;
	virtual IVector* sub(IVector &v1, IVector &v2) = 0;
	virtual IVector* mul(IVector &v1, IVector &v2) = 0;
	virtual IVector* div(IVector &v1, float factor) = 0;
	virtual IVector* scl(IVector &v1, float factor) = 0;
	virtual IVector* cxp(IVector &v1, IVector &v2) = 0;
	virtual IVector* nrm(IVector &v1) = 0;

	virtual float dot(IVector &v1, IVector &v2) = 0;
	virtual float dis(IVector &v1, IVector &v2) = 0;
	virtual float mag(IVector &v1) = 0;
};


#endif//!IVECTORMATH
