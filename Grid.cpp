//shani lev,211632831
#include "Grid.h"

Grid::Grid(double tileW, double tileH, int width, int height, int color) : numofreatangle(width* height), arr(new Rectangle* [width * height])
{
	arr[0] = 0;
	int flag = tileH;
	int temp = tileW;
	for (int j = 1; j < height; j++)
	{
		arr[j] = (new Rectangle(0, flag, tileW, tileH, color));
		flag = tileH + flag;

	}
	for (int i = height; i < width; i++)
	{
		arr[i] = (new Rectangle(temp, tileH, tileW, tileH, color));
		temp = temp + tileW;
	}
}
Rectangle* Grid::getRectAtPoint(const Point& p)
{
	for (int i = 0; i < this->numofreatangle; i++)
	{
		if (arr[i]->contains(p))
		{
			return arr[i];
		}
	}
	return 0;
}
Rectangle* Grid::getRectAtIndex(int i)
{
	for (int j = 0; j < this->numofreatangle; j++)
	{
		if (j == i)
		{
			return arr[i];
		}
	}
	return 0;
}
void Grid::moveGrid(double deltaLeft, double deltaTop)
{
	for (int i = 0; i < numofreatangle; i++)
	{
		arr[i]->moveRect(deltaLeft, deltaTop);
	}

}
void Grid::scaleGrid(double rectWidth, double rectHeight)
{
	for (int j = 0; j < numofreatangle; j++)
	{
		arr[j]->scaleRect(rectWidth, rectHeight);
	}

}
Grid::~Grid()
{
	for (int i = 0; i < numofreatangle; i++)
	{
		delete this->arr[i];
	}
}
