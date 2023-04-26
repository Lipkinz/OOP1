//shani lev,211632831
#include "Point.h"
Point::Point(double x, double y) :x_scale(1), y_scale(1)
{
	_mx = x;
	_my = y;
}

double Point::getX() const
{
	return _mx * x_scale;
}
double Point::getY() const
{
	return _my * y_scale;
}
void Point::setX(double x)
{
	_mx = x;
}
void Point::setY(double y)
{
	_my = y;
}
void Point::setScaleX(double scaleX)
{
	x_scale = scaleX;
}
void Point::setScaleY(double scaleY)
{
	y_scale = scaleY;
}