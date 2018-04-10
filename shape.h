//shape.h
//Michael Griffith
//Project 6
#ifndef SHAPE_H
#define SHAPE_H
#include"grid.h"

class Shape{
  public:
    Shape(int x, int y) : x(x), y(y){}
    //Pure Virtual draw command
    virtual void draw(Grid&) = 0;
    int x,y;
};
#endif
