/* Code Reference:
 * https://www.tutorialspoint.com/cplusplus/cpp_namespaces.htm
 * */
#include <iostream>
#include "../log_debug.h"
using namespace std;

// first name space
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
      LOG_DEBUG("Hello Wolrd first\n");
   }
}

// second name space
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
      LOG_DEBUG("Hello Wolrd second\n");
   }
}

int main () {
 
   // Calls function from first name space.
   first_space::func();
   
   // Calls function from second name space.
   second_space::func(); 

   return 0;
}

