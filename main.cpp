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
      cout << (int) randInt8() << endl;
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

   uint16_t limits[5] = {255, 16383, 32767, 49151, 65535};
   int histogram[5] = {0, 0, 0, 0, 0};

   for (int i = 0; i < 4000; ++i)
   {
      uint16_t rnd = randInt16();

      for (int j = 0; j < 5; ++j)
      {
         if (rnd <= limits[j])
         {
            histogram[j]++;
            break;
         }
      }
   }

   cout << endl << endl;

   for (int i = 0; i < 5; ++i)
      cout << limits[i] << ":  " << histogram[i] << endl;


   return 0;
}
