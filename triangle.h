//triangle.h
//Michael Griffith
//Project 6
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"shape.h"

class Triangle: public Shape{
  public:
    Triangle(int x, int y) : Shape(x,y){};
    void draw(Grid&);
};

#endif
