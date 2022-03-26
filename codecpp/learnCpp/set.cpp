#include<bits/stdc++.h>

using namespace std;

void print(set<string> &s){
	for(set<string>::iterator it = s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
	cout<<endl;
	for(auto it = s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
	cout<<endl;
	for(string value : s){
		cout<<value<<endl;
	}
	cout<<"s_size() " <<s.size()<<endl;
}

void printf(unordered_set<string> &s){
	for(unordered_set<string>::iterator it = s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
	cout<<endl;
	for(auto it = s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
	cout<<endl;
	for(string value : s){
		cout<<value<<endl;
	}
	cout<<"s_size() " <<s.size()<<endl;
}

int main(){

	unordered_set<string> st;

	st.insert("abc");
	st.insert("sdfc");
	st.insert("asdf");

	printf(st);

	multiset<string> ss;
	ss.insert("abc");
	ss.insert("abc");

	auto itt = ss.find("abc");
	cout<<*itt<<endl;
    //s.erase(iterator)  delete only the iterator value at that iterator in multiset.
	//s.erase(value)     deletes the all value present in multiset

	//set<int> st;
	set<string> s;
	s.insert("abc");
	s.insert("sdfc");
	s.insert("asdf");
	
	auto it = s.find("sdfc");

	if(it!=s.end()){
		cout<<(&it)<<endl;
		cout<<*it<<endl;
	}
	cout<<endl;
	s.insert("asdf");

	print(s);
	
	return 0;
}