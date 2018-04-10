//circle.h
//Michael Griffith 
//Project 6
#ifndef CIRCLE_H
#define CIRCLE_H

#include"shape.h"

class Circle: public Shape{
  public:
    Circle(int x, int y) : Shape(x,y){}
    void draw(Grid&);
};

#endif
