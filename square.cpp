//square.cpp
//Michael Griffith
//Project 6
#include"square.h"

void Square::draw(Grid &grid_array)
{
  for(int i(0); i<size; i++) //Blast through rows and change chars to *
  {
    for(int j(0); j<size; j++) // Blast through columns and change chars to *
    {
      if(i == 0 || i == (size-1) || j == 0 || j == (size -1))
        grid_array.set(x+j, y+i, '*');
    }
  }
}
