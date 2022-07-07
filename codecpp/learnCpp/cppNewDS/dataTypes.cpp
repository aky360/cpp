
#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    // Write C++ code here
    
    int z = 300.09; //this is the float value but int type only and removes the float values
    cout<<" int type takes only int value => "<<z<<endl;        //int type holds the int value only prints only int value here
    
    int a = 243;
    cout << "int type => "<<typeid(a).name() << endl;
    
    float fVal = 2345.655;
    cout << "float type => "<<typeid(fVal).name() << endl;
    
    long long b = 342452.5633;
    cout << "long long type => "<<typeid(b).name() << endl;
    
    unsigned int x = 10;
    cout << "unsigned int type => "<<typeid(x).name() << endl;
    
    signed int y = -10;
    cout << "signed int type => "<<typeid(y).name() << endl;
    
    bool c = true;
    cout << "bool type => "<<typeid(c).name() << endl;
    
    string str = "this is string";
    cout<<"string str =>  "<<str<<endl;
    cout << "string type => "<<typeid(str).name() << endl;
    
    char* chX = "this";
    cout<<"char pointer string chX => "<<chX<<endl;
    cout << "pointer pointing to char* type => "<<typeid(chX).name() << endl;
    
    char ch = 'a';
    cout<<"ch => "<<ch<<endl;
    cout << "char type => "<<typeid(ch).name() << endl;
    
    char chr[] = "this";
    cout<<"chr => "<<chr<<endl;
    cout<<"char array index value chr => "<<chr[0]<<endl;
    cout << "char array type => "<<typeid(chr).name() << endl;
    
    wchar_t cX = 'A';  
    cout<<" wchar_t cX addresss => "<<&cX<<endl;
    cout<<"wchar_t cX vallue => " <<cX <<endl;
    cout << "wchar_t type => "<<typeid(cX).name() << endl;
    
    return 0;
}
