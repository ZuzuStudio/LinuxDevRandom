#include <iostream>
#include "devgenerator.h"
using namespace std;
using namespace hzw;

int main()
{
   cout << "Small random number sequence\n";

   for (int i = 0; i < 20; ++i)
   {
      cout.width (3);
      cout << (int) randInt8() << endl;
   }

   return 0;
}
