#include <bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s, int open, int close){

	//base case
	if(open == 0 && close == 0){
		valid.push_back(s);
		for(vector<string>::iterator itr = valid.begin();itr != valid.end(); ++itr){
			cout<<*itr<<endl;
		}
		return ;
	}

	if(open>0){
		s.push_back('(');
		generate(s, open-1, close);
		s.pop_back();
	}

	if(close > 0){
		if(open < close){
			s.push_back(')');
			generate(s, open, close-1);
			s.pop_back();
		}
	}
}

int main(){
	string s;
	generate(s, 3, 3);
	return 0;
}
