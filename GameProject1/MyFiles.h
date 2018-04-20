#pragma once

class MyFiles
{
public: 
	MyFiles();
	~MyFiles();
	int height;
	int width;
	int comp;
	char* Load(char const *filename, int*, int*);
};
