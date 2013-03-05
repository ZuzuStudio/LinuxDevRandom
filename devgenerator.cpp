#include "devgenerator.h"

#include <fstream>

using namespace std;

namespace hzw
{

   unsigned char randInt8()
   {
      ifstream rin ("/dev/urandom", ios::in | ios::binary);
      register  char result;
      rin.get (result);
      return (unsigned char) result;
   }
}
