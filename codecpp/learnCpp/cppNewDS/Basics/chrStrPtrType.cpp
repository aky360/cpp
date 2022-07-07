#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    // Write C++ code here
    
    string str = "this is string";
    cout<<"string str =>  "<<str<<endl;
    cout<<"string str[] =>  "<<str[0]<<endl;
    cout << "string type => "<<typeid(str).name() << endl;
    
    char* chX = "this";
    cout<<"char pointer string chX => "<<chX<<endl;
    cout<<"char pointer string chX[] => "<<chX[0]<<endl;
    cout << "pointer pointing to char* type => "<<typeid(chX).name() << endl;
    
    char ch = 'a';
    cout<<"ch => "<<ch<<endl;
    cout << "char type => "<<typeid(ch).name() << endl;
    
    char chr[] = "this";
    cout<<"chr => "<<chr<<endl;
    cout<<"char array index value chr[] => "<<chr[0]<<endl;
    cout << "char array type => "<<typeid(chr).name() << endl;
    
    wchar_t cX = 'A';  
    cout<<" wchar_t cX addresss => "<<&cX<<endl;
    cout<<"wchar_t cX vallue => " <<cX <<endl;
    cout << "wchar_t type => "<<typeid(cX).name() << endl;
    
    return 0;
}
