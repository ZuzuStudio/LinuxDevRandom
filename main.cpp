#include <iostream>
#include "devgenerator.h"
using namespace std;
using namespace hzw;

int main()
{
   cout << "\nSmall random number sequence  8 bit:\n";

   for (int i = 0; i < 20; ++i)
   {
      cout.width (3);
      cout << (int)randInt8() << endl;
   }

   cout << "\nSmall random number sequence 16 bit:\n";

   for (int i = 0; i < 20; ++i)
   {
      cout.width (5);
      cout << randInt16() << endl;
   }

   cout << "\nSmall random number sequence 32 bit:\n";

   for (int i = 0; i < 20; ++i)
   {
      cout.width (10);
      cout << randInt32() << endl;
   }

   cout << "\nSmall random number sequence 64 bit:\n";

   for (int i = 0; i < 20; ++i)
   {
      cout.width (20);
      cout << randInt64() << endl;
   }

   return 0;
}
