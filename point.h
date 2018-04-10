//point.h
//Michael Griffith
//Project 6
#ifndef POINT_H
#define POINT_H

#include"shape.h"

class Point: public Shape{
  public:
  Point(int x, int y, char c) : Shape(x,y), c(c){}
  void draw(Grid&);
  private:
    char c;
};

#endif
