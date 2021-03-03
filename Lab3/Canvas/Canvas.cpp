#pragma once
#include <iostream>
#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	canvasDraw = new char* [height];
	for(int i = 0; i < height; i++)
		canvasDraw[i] = new char[width];
}
