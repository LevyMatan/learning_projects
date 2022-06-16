#include "project/tmp.hpp"

int tmp::add(int a, int b) { return a + b; }
int tmp::matan(int hello)
{
  switch(hello)
  {
    case 1:
      return 2;
    case 2:
      return 100;
    default:
      return 0;
  }
}
