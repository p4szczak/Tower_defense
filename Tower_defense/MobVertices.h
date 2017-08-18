#ifndef MOBVERTICES_H
#define MOBVERTICES_H

unsigned int mobCubeVertexCount = 24;

float mobCubeVertices[] =
{
	-1,-1,-1,
	1,-1,-1,
	1,1,-1,
	-1,1,-1,

	-1,-1,1,
	1,-1,1,
	1,1,1,
	-1,1,1,

	-1,-1,-1,
	1,-1,-1,
	1,-1,1,
	-1,-1,1,

	-1,1,-1,
	1,1,-1,
	1,1,1,
	-1,1,1,

	-1,-1,-1,
	-1,-1,1,
	-1,1,1,
	-1,1,-1,

	1,-1,-1,
	1,-1,1,
	1,1,1,
	1,1,-1
};

float mobCubeColors[] =
{
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,

	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,

	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,

	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,

	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,

	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0,
	0, 1, 1, 0
};

float mobCubeColorsAlpha[] =
{
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,

	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,

	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,

	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,

	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,

	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f,
	0, 1, 1, 0.5f
};

#endif