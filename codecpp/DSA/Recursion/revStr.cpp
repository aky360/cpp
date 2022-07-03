#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;


void reverseStr(string &str, int i, int j){
    if(i>j){
        return ;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    return reverseStr(str, i, j);
}


void reverseStrWithSinglePtr(string& str, int i){

	cout << "call recieved for " << str << endl;

	if(i>(str.length()-i-1)){
		return ;
	}

	swap(str[i], str[str.length()-i-1]);
	i++;
	reverseStrWithSinglePtr(str, i);
}


string revStr(string str){
	int i=0;
	//int j=str.length()-1;
	while(i<(str.length()-i-1)){
		swap(str[i],str[str.length()-i-1]);
		i++;
		//j--;
	}
	return str;
}


int main() {

    string name = "abcde";
    cout << endl;
    reverseStr(name, 0 , name.length()-1 );  //this takes the original name and reverse the name to edcba
    cout << endl;
    cout << name << endl;
    
    cout <<"reversed string is using recursion function "<<name<< endl;


	
	cout<<"reversed string is "<<revStr(name1)<<endl; //this takes the copy of the variable str and reversed them and return the reversed string but the original variable doesn't change or reversed.

	//if we take the & address or reference of the variable then it changes affect the original variable also and also the original variable changes or reversed 
	//and changes reflect to the original variable ;

	cout<<"reversed string is "<<revStr(name)<<endl;  //this takes the reversed name which is changed by the reverseStr function 
	//and it again reverse the string to name to abcde;

	cout<<"the original str is after reversing "<<name1<<endl;

	cout<<"the original name is after reversing "<<name<<endl;


	string name2 = "abcde";
	reverseStrWithSinglePtr(name2, 0);

	cout <<"reversed string is using recursion function "<<name2<< endl;

    return 0;
}
