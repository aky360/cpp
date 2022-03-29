// C++ program to print all palindromic partitions of a given string
#include<bits/stdc++.h>
using namespace std;


bool oneDigit(int *num){
    if(*num < 0){
        cout<<"the number is less than 0 "<<endl;
        return true;
    }
    else if(*num >= 0 && (*num)/10 > 10){
        cout<<(*num)/10<<"the number is greater than 0 "<<endl;
        return true;
    }
    else{
        return false;
    }
    return false;
}

int ret(int *num){
    if(*num > 0){
        *num = *num+1;
    }
    return *num;
}

int findLenOfStrRec(string str, int startIndex){
    if(str.length() == 0){
        return 0;
    }
    if(str.length() == 1){
        return 1;
    }
    if(startIndex > (str.length()-1)){
        return startIndex;
    }
    return findLenOfStrRec(str, startIndex+1);
}

char firstUpperCaseCharInStr(string str, int i=0)
{
    if (str[i] == '\0')
         return 0;
    if (isupper(str[i]))
            return str[i];
    return firstUpperCaseCharInStr(str, i+1);
}


// Driver program
int main(){
    
    string st = "geeksforGeeKS";
    
    cout<<"length of string "<<findLenOfStrRec(st, 0)<<endl;
    
    char res = firstUpperCaseCharInStr(st);
    if (res == 0)
        cout << "No uppercase letter";
    else
        cout << res << "\n";
    
    string str = "nitin";
    int a = 123;
    cout<<"ret "<<ret(&a)<<endl;
    cout<<"mod of 1 is "<<1%10<<"   1/10 is "<<1/10<<endl;
    cout<<oneDigit(&a)<<endl;
    
    return 0;
}
