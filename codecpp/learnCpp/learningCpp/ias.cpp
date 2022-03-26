/*#include <iostream>
using namespace std;

class car {        
  public:          
    string x;  
    string y;  
    int z;              
    void ias();
};
void car::ias(){
	cout<<"Enter brand";
	cin>>x;
    cout<<"Enter model";
	cin>>y;
    cout<<"Enter year";
	cin>>z;

}
int main() {
	car rt;
    rt.ias();
	
 return 0;
}*/
/*#include <iostream>
using namespace std;
class Employee {
  private:
    int salary;
  public:
    void setSalary(int s) {
      salary = s;
    }
    
};
int main() {
    int salary;
   int s;
    cout<<"Enter salary";
    cin>>salary;
  Employee myObj;
  myObj.setSalary(s);
  //cout << myObj.getSalary();
  return 0;
}*/
#include <iostream>
using namespace std;

// Base class
class Employee  {
  public:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}