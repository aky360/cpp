#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;


class reverseString{
public:
	string revStr(string &str){
		reverse(str.begin(), str.end());
		return str;
	}
};


int main(){
	reverseString strRev;

	vector<int> nums = {1,1,2,3};
	vector<int> v;
	 int* isolate = vector<int*>(&nums);


	string str = "string of clor";
	cout<<strRev.revStr(str)<<endl;
	return 0;
}