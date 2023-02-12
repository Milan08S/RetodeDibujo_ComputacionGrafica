#include "Cuadrados.h"

Cuadrados::Cuadrados(){}

void Cuadrados::DibujarCuadrados(float x, float y, float z, float inclinacion, float dire_inclinacion){
	glPushMatrix();
	glTranslatef(x,y,z);
	glRotatef(inclinacion, 0, 0, dire_inclinacion);
	glutSolidCube(1);
	glPopMatrix();
}