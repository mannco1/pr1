#include <iostream>
#include "circle.h"
using namespace std;

class circle
{
private:
	float radius;
	float x_center;
	float y_center;

	float const PI = 3.1415926535;

public:
	circle(float r, float x, float y)
	{
		radius = r;
		x_center = x;
		y_center = y;
	};
	void set_circle(float r, float x, float y)
	{
		radius = r;
		x_center = x;
		y_center = y;
	};
	float square()
	{
		return PI * radius * radius;
	}
	bool triangle_around(float a, float b, float c)
	{
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		return (radius >= ((a + b + c) / (4 * S)));
	}
	bool triangle_in(float a, float b, float c)
	{
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		return (radius <= S / p);
	}
	bool check_circle(float r, float x_cntr, float y_cntr)
	{
		float d = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
		return (radius + r <= d);
	}


};