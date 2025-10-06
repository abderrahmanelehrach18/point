#pragma once

class Point
{
private:
	float x;
	float y;

public:
	Point(float, float);
	float calculerDistance(Point);
	void afficher();

};