#ifndef IGAMEAPP
#define IGAMEAPP

#include <Windows.h>


class IGameApp
{
public:
	virtual ~IGameApp() { delete this; }

	virtual void init(HWND _hwnd, int _width, int _height) = 0;
	virtual void update() = 0;
	virtual void render() = 0;
	virtual void release() = 0;
};

#endif