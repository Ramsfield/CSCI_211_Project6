//square.h
//Michael Griffith
//Project 6
#ifndef SQUARE_H
#define SQUARE_H
#include"shape.h"

class Square : public Shape{
  public:
    Square(int x,int y,int size) : Shape(x,y), size(size){};
      void draw(Grid&);
  private:
    int size;

};

#endif
