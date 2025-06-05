#include <iostream>
using namespace std;

int main() {
  // data types
  // 1.primitive data types or built-in data types
  // int, float, char, bool, double, void
  
  // 1.1 integer
  int a = 123;
  cout << "int data type => " << a << endl;
  cout << "a took " << sizeof(a) << " bytes to store it in memory." << endl
       << endl;

  // 1.2 float
  float b = 1.5;
  cout << "float data type => " << b << endl;
  cout << "b took " << sizeof(b) << " bytes to store it in memory." << endl
       << endl;

  // 1.3 char
  char c = 'a';
  cout << "char data type => " << c << endl;
  cout << "c took " << sizeof(c) << " bytes to store it in memory." << endl
       << endl;

  // 1.4 bool
  bool d = true;
  cout << "bool data type => " << d << endl;
  cout << "d took " << sizeof(d) << " bytes to store it in memory." << endl
       << endl;

  // 1.5 double
  double e = 1.525252;
  cout << "double data type => " << e << endl;
  cout << "e took " << sizeof(e) << " bytes to store it in memory." << endl
       << endl;

  // 1.6 void

  // differe between float and double
  // float => 4 bytes
  // double => 8 bytes
  // float => 7 decimal places
  // double => 15 decimal places

  // 2.derived data types
  // array, pointer, function, reference

  // 3.user defined data types
  // class, struct, enum, union, typedef
  
  // 4.other data types
  // NULL, auto, register, extern, mutable, volatile, const, inline, virtual,
  // friend, static, typedef, using, namespace, asm, goto, switch, case, default,
  // break, continue

}