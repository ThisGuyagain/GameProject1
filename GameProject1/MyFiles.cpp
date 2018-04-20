#include "MyFiles.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

MyFiles::MyFiles()
{
	
}

MyFiles::~MyFiles()
{
	
}

char* MyFiles::Load(char const *filename, int* width, int* height)
{
	unsigned char *data = stbi_load(filename, width, height, &comp, 4);
	// we are always going to ask for 4 components for RGBA
	return (char*)data;
	
	
}
