//circle.cpp
//Michael Griffith
//Project 6
#include"circle.h"

void Circle::draw(Grid &grid_array)
{
  //Top Row
  grid_array.set((x+1),y,'o');
  grid_array.set((x+2),y,'o');
  //Second Row
  grid_array.set(x,(y+1),'o');
  grid_array.set((x+3),(y+1),'o');
  //Third Row
  grid_array.set(x,(y+2),'o');
  grid_array.set((x+3),(y+2),'o');
  //Bottom Row
  grid_array.set((x+1),(y+3),'o');
  grid_array.set((x+2),(y+3),'o');
}
