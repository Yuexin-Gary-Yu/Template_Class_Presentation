/////////////////////////////////////////////////////////////////////
// max.cpp - return maximum of two arguments                       //
//                                                                 //
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include "max.h"
using namespace std;

//----< specialization of max template >-----------------------------
//
//  Specializations don't have template parameters and so
//  are usually defined in the implementation file, e.g.,
//  here.  Because it's small, inlining makes sense, so we
//  elected to put in the header so clients don't need to use
//  this .cpp file.
//
//template<> pChar max(const pChar& t1, const pChar& t2)
//{
//  cout << "\n  -- using specialization";
//  return ((strcmp(t1,t2)>0) ? t1 : t2);
//}

#ifdef TEST_MAX

void main() {

  cout << "\n  Demonstrating Template Specialization "
       << "\n =======================================\n";

  cout << "\n  the maximum of 1 and 2 is " << ::max(1,2) << "\n\n";

  cout << "\n  the maximum of 0.75 and 0.5e+10 is "
       << ::max(0.75,0.5e+10) << "\n\n";

  char *t = "z string";
  char *s = "a string";

  cout << "\n  the maximum of \"a string\" and \"z string\" is \""
    << ::max(t,s) << "\"\n\n";

}
#endif
