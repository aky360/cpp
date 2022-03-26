#include <iostream>
#include <string>
using namespace std;
int myFunction(string fname, int a, int b);


int main() {
  myFunction("Liam",3,4);
  myFunction("jds",1,3);
  myFunction("Anja",5,6);
  int a=myFunction("Anja",5,6);
  cout<< a;
  return 0;
}
int myFunction(string fname, int a, int b) {
  cout << fname << " Refsnes\n";
  cout<< "sum of "<<a+b<<endl;
  return 5;
}
