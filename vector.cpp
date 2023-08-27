#include <iostream>

namespace TU_bla
{
  class Vector
  {
    size_t size;
    double * data;

  public:
    Vector (size_t _size) 
      : size(_size), data(new double[size]) { ; }
      ~Vector () { delete [] data; } 
  };
}

using namespace TU_bla;

int main()
{
  Vector x(5);
}
