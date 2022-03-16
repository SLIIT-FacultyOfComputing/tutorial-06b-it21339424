#include "Box.h"

// Implement setters and getters
void Box::setWidth(int w)
{
  width = w;
}
void Box::setLength(int l)
{
  length = l;
}
void Box::setHeight(int h)
{
  height = h;
}
int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume(int l, int w, int h) {
  return w * l * h ;
}
