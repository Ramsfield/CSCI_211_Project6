//grid.cpp
//Michael Griffith
//Project 06
#include"grid.h"
#include<iostream>
#include<cassert>

//Default constructor
Grid::Grid()
{
  grid_array = new char*[24]; //Initialilze 24 rows
  for(int i(0); i<24; i++)
    *(grid_array+i) = new char[60]{}; //Initialize 60 chars per each row
  for(int i(0); i<24; i++)
  {
    for(int j(0); j<60; j++)
    {
      grid_array[i][j] = ' ';
    }
  }
}

void Grid::print()
{
  for(int i(0); i<24; i++)
  {
    for (int j(0); j<60; j++)
    {
      std::cout << *(*(grid_array+i)+j);
    }
    std::cout << "\n";
  }
}

void Grid::set(int x, int y, char put)
{
  if(x < 0 || x > 59) return;
  if(y < 0 || y > 23) return;
  *(*(grid_array+y)+x) = put;
}
