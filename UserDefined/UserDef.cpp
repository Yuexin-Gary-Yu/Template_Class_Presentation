/////////////////////////////////////////////////////////////////////
//  UserDef.cpp  -  demonstrating template with user defined       //
//                  type parameter                                 //
//                                                                 //
//     Refer to Stroustrup, 13.2.3 - Template Parameters           //
//                                                                 //
/////////////////////////////////////////////////////////////////////
//
// To keep this demo simple I've placed the template definitions
// along with the test code in the same cpp file.  Normally you
// will place all template definitions in a separate header file.
//
#include <iostream>
using namespace std;

//----< declare two simple classes >---------------------------------

class implem1 {

public:
  void show() { cout << "\n  this is implementation #1"; }

};

class implem2 {

public:
  void show() {  cout << "\n  this is implementation #2"; }
};

//---< declare template class taking user defined type parameter >---

template <class T>
class templ {

  T t;

  public:
    void show() { t.show(); }
};


void main() {

  cout << "\n  Demonstrating template with user defined type parameter "
       << "\n =========================================================\n";

  templ<implem1> tl;
  tl.show();

  templ<implem2> t2;
  t2.show();

  cout << "\n\n";
}
