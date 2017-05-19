#include <cstdio>
#include "../log_debug.h"

class Test
{
private:
  int data1;
  float data2; 

public:
  Test() {
      LOG_DEBUG("Test Constructor\n");
  }
  ~Test() {
      LOG_DEBUG("Test Destructor\n");
  }
  int func(int a) {
      LOG_DEBUG("2*a: %d\n", 2*a);
      return 2*a;
  }

  float func(float a) {
      LOG_DEBUG("2*a: %f\n", 2*a);
      return 2*a;
  }
};

int main()
{
  Test o1, o2;

  int ret_int = o1.func(2.0f);
  float ret_float = o2.func(2);
}
