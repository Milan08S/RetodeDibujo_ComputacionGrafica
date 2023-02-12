#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Cuadrados
{
public:
	Cuadrados();

	void DibujarCuadrados(float x, float y, float z, float inclinacion,float dire_inclinacion);
};

