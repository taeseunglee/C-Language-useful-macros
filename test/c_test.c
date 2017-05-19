#include <stdio.h>
#include "../log_debug.h"
#include "test.h"

int func2();

int main()
{
  func1();
  int res = func2();

  LOG_DEBUG("Return Value of func2 is %d\n", res);

  return 0;
}


int func2()
{
  LOG_DEBUG("func2 start\n");

  int i, sum = 0;
  for (i = 1; i < 5; ++i)
    sum += i;

  LOG_DEBUG("func2 end\n");
  
  return sum;
}
