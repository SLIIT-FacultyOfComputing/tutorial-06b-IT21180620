#include "Box.h"

// Implement setters and getters

void Box::setMeasurements(int l, int w, int h){
  width = l;
  height = w;
  length = h;
}

int Box::getWidth(){
  return width;
}

int Box::getHeight(){
  return height;
}

int Box::getLength(){
  return length;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return width * height * length;
}
