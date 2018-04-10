//triangle.cpp
//Michael Griffith
//Project 6
#include"triangle.h"

void Triangle::draw(Grid &grid_array)
{
  //Top Row
  grid_array.set(x+2,y,'+');
  //Middle Row
  grid_array.set(x+1,y+1,'+');
  grid_array.set(x+3,y+1,'+');
  //Bottom Row
  int i(0);
  while(i<5) grid_array.set(x+(i++),y+2,'+');
}
