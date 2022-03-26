#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int e);
    
};

int Car::speed(int e) {
  return e;
}

int main() {
  Car myObj;
  cout << myObj.speed(100);
  return 0;
}
