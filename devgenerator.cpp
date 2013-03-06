#include "devgenerator.h"

#include <fstream>

using namespace std;

namespace hzw
{

   uint8_t randInt8()
   {
      ifstream rin ("/dev/urandom", ios::in | ios::binary);
      register  char result;
      rin.get (result);
      return (uint8_t) result;
   }

   uint16_t randInt16()
   {
      ifstream rin ("/dev/urandom", ios::in | ios::binary);
      register  uint16_t result;
      char *byte = (char *) &result;

      for (char i = 0; i < sizeof (uint16_t); ++i, ++byte)
         rin.get (*byte);

      return (uint16_t) result;
   }

   uint32_t randInt32()
   {
      ifstream rin ("/dev/urandom", ios::in | ios::binary);
      register  uint32_t result;
      char *byte = (char *) &result;

      for (char i = 0; i < sizeof (uint32_t); ++i, ++byte)
         rin.get (*byte);

      return (uint32_t) result;
   }

   uint64_t randInt64()
   {
      ifstream rin ("/dev/urandom", ios::in | ios::binary);
      register  uint64_t result;
      char *byte = (char *) &result;

      for (char i = 0; i < sizeof (uint64_t); ++i, ++byte)
         rin.get (*byte);

      return (uint64_t) result;
   }
}
