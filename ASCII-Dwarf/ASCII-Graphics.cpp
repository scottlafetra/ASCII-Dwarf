#pragma once
#include "ASCII-Graphics.h"

ASCII::Graphic::Graphic(const int width, const int height)
: width(width), height(height){
	
	charBuffer = (char**) calloc(width*height, sizeof(char));
}

ASCII::Graphic::~Graphic() {

	free(charBuffer);
}