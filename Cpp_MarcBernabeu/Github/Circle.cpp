#include "Circle.h"


Circle::Circle(float a, float b, float r) :coorX{ a }, coorY{ b }, radio{ r }
{

}
Circle::~Circle()
{

}

float Circle::GetRadio()
{
	return radio;
};
float Circle::Area()
{
	return 3.14*radio*radio;
};