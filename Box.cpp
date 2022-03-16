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
void Box::setHeigth(int h)
{
  heigth = h;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  volume = w * l * h ;
}
