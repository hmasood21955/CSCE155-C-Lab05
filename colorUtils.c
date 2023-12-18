
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
int toSepiaRed(int r, int g, int b)
{
  r = 0.393 * r + 0.769 * g + 0.189 * b;

  if(r > 255)
  {
    return (255);
  }
  else
  {
    return round(r);
  }
}
int toSepiaGreen(int r, int g, int b)
{
  g = 0.349 * r + 0.686 * g + 0.168 * b;

  if(g > 255)
  {
    return (255);
  }
  else
  {
    return round (g);
  }
}
int toSepiaBlue(int r, int g, int b)
{
  b = 0.272 * r + 0.534 * g + 0.131 * b;
  if(b > 255)
  {
    return (255);
  }
  else{
    return round(b);
  }
}
