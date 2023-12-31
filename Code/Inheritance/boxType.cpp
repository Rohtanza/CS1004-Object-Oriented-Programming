#include "boxType.h"

#include <iostream>
using namespace std;

void boxType::setDimension(double l, double w, double h)
{
rectangleType::setDimension(l,w);

if (h >= 0)
height = h;
else
height = 0;

}

double boxType::getHeight() const
{
return height;
}
double boxType::area() const
{
return 2*(getLength()*getWidth()+getWidth()*height+height*getLength());
}
double boxType::volume() const
{
return rectangleType::area()*height;
}
void boxType::print() const
{
//cout << "Length = " << length << "; Width = " << width <<"; Height = " height;
rectangleType::print();
cout << " ; Height = " << height << endl;
}
boxType::boxType(double l, double w, double h):rectangleType(l,w)
{
  if (h >= 0)
  height = h;
  else
  height = 0;
}
boxType::boxType()
{
height = 0;
}
