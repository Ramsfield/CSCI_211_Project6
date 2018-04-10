//point.cpp
//Michael Griffith
//Project 06
#include"point.h"

void Point::draw(Grid &grid_array)
{
  grid_array.set(x,y,c);
}
