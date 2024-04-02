#include <iostream>
using namespace std;

int main() {
  cout << "There are types of data variables" << endl;
  int a = 5;
  char ch = 'a';
  float f = 1.2;  
  double d = 1.23;
  bool b = true;
  int c = 'c';                   //typecasting
  cout << a << " " << ch << " "<< f << " "<< d << " "<< b << " " << endl;

  int size = sizeof(a);
  cout << "Size of a is : " << size << endl;
  cout << c << endl;           //tpyecasting
}
  
  