#include <iostream>

using namespace std;

int main(){

	int a {1};
	int b {2};

	std::cout << a<<b <<std::endl;


	int number1 = 15; // Decimal
   int number2 = 017; // Octal
   int number3 = 0x0F; // Hexadecimal
   int number4 = 0b00001111; // Binary
   int number5 = '2';
   int number6 = (int)"26";
   int number7 {4566};

   std::cout << "number1 : " << number1 << std::endl;
   std::cout << "number2 : " << number2 << std::endl;
   std::cout << "number3 : " << number3 << std::endl;
   std::cout << "number4 : " << number4 << std::endl;
   std::cout << "number5 : " << number5 << std::endl;
   std::cout << "number6 : " << number6 << std::endl;
   std::cout << "number7 : " << number7 << std::endl;


	return 0;
}