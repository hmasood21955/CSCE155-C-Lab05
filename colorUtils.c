
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
int toGraysacleLightness(int r,int g, int b)
{
  int max = r;
  int min = r;
  if(max > g && max > b)
  {
    max = r;
  }
  else if(g > max && g> b)
  {
    max =g;
  }
  else{
    max = b;
  }
  if(min < g && min < b)
  {
    min = r;
  }
  else if (g < min && g < b)
  {
    min = g;
  }
  else
  {
    min = b;
  }
  return (max + min)/2;
}
int toGrayScaleLuminosity(int r, int g, int b)
{
  int scale = r * 0.21 + g * 0.72 + b * 0.07;
  return round(scale);
}
