#ifndef IRENDERER
#define IRENDERER

class IRenderer
{
public:
	virtual ~IRenderer() { delete this; }

	virtual void init() = 0;
	virtual void clear() = 0;
	virtual void present() = 0;
	virtual void release() = 0;
};


#endif