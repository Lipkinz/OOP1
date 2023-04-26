//shanilev,211632831
#include "Rectangle.h"

int Rectangle::m_count = 0;

Rectangle::Rectangle(double left, double top, double width, double height, int color)
{
	p1_up = new Point(left, top);
	p2_down = new Point(left + width, top + height);
	this->color = color;

};
int Rectangle::getColor() const
{
	return color;
};
Point& Rectangle::getTopLeftPoint()
{
	return  *p1_up;
}
Point& Rectangle::getBottomRightPoint()
{
	return *p2_down;
}
void Rectangle::setColor(int color)
{
	this->color = color;

}
bool Rectangle::contains(const Point& p)
{
	if (p.getX() > p1_up->getX() && p.getX() < p2_down->getX() && p.getY() > p1_up->getY() && p.getY() < p2_down->getY())
	{
		return true;
	}
	else
		return false;

}
void Rectangle::moveRect(double deltaLeft, double deltaTop)
{
	p1_up->setX(p1_up->getX() + deltaLeft);
	p1_up->setY(p1_up->getY() + deltaTop);
	p2_down->setX(p2_down->getX() + deltaLeft);
	p2_down->setY(p2_down->getY() + deltaTop);

}
void  Rectangle::scaleRect(double rectWidth, double rectHeight)
{
	p1_up->setScaleX(p1_up->getX() * rectWidth);
	p1_up->setScaleY(p1_up->getY() * rectHeight);
	p2_down->setScaleX(p2_down->getX() * rectWidth);
	p2_down->setScaleY(p2_down->getY() * rectHeight);
}