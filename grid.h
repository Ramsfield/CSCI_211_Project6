//grid.h
//Michael Griffith
//Project 6
#ifndef GRID_H
#define GRID_H

class Grid{
  public:
    Grid();
    //Print function
    void print();
    //Setter Function -- Takes in x, y coordinates and sets that spot as Char
    void set(int, int, char);
  private:
    char ** grid_array; //2d array
};

#endif
