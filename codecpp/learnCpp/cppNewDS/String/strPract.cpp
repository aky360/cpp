// find if string contains at least one number and at least one uppercase letter and at least one lowercase letter.
// if string contains at least one number and at least one uppercase letter and at least one lowercase letter then print "YES" otherwise "NO".

#include <stdio.h>
//#include <algorithm>
//#include <cctype>
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	//codeint t;
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int upper = 0, lower = 0, number = 0;
	    for(string::size_type i=0;i<str.size();i++){
            if (str[i] >= 'A' && str[i] <= 'Z'){
                upper++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z'){
                lower++;
            }
            else if(str[i]>= '0' && str[i]<= '9'){
                number++;
            }
        }
        if(upper > 0 && lower > 0 && number > 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	    
	}
	return 0;
}
