#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*string str;
 
    cout << "Please enter your name: \n";
    getline(cin, str);
    cout << "Hello, " << str
         << " welcome to GfG !\n";*/
	Addition ad;
	//ad.add(3,5);
 	cout<<ad.a;
    return 0;
}

class Addition{
public:
	int a = 5;
	int b = 6;
public:
	/*Addition(){
		this->a = a;
		this->b = b;
	}*/
	int add(int x, int y){
		int c = x + y;
		return c;
	}
};
