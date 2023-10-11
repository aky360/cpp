// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str="0101";
    char a = 'b';
    int y;
    cout<<int(98+'z')<<"this this"<<endl;
    cout<<int(a)<<endl;
    cout<<char(98)<<endl;
    str[0]='1';
    cout<<str[0]<<endl;
    vector<int> ans(4);
    cout<<ans[0]<<endl;
    int n=stoi(str);
    char x='0';
    int i=0,N=str.size();
    cout<<str[0]<<endl;
    cout<<stoi(str);
    if(str[0]>='0' && str[0]<='1'){
        cout<<"cout "<<endl;
    }
    // if(str.contains(x)){
    //     cout<<"this true"<<str.contains('0')<<endl;
    // }
    // else{
    //     cout<<"false "<<endl;
    // }
    // while(i<N){
    //     if()
    // }
    cout << typeid(n).name() << endl;
    return 0;
}


vector <int> count (string s){
    int i=0;
    vector<int> ans(4);
    while(i<s.size()){
        if(s[i]>='A' and s[i]<='Z') ans[0]++;
        else if(s[i]>='a' and s[i]<='z') ans[1]++;
        else if(s[i]>='0' and s[i]<='9') ans[2]++;
        else ans[3]++;
        i++;
    }
    return ans;
}
