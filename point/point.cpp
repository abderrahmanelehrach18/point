#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point::calculerDistance(Point autrePoint)
{
	return sqrt(pow((this->x - autrePoint.x), 2) + pow((this->y - autrePoint.y), 2));
}

void Point::afficher()
{
	std::cout << "x: " << this->x << " y: " << this->y << endl;
}