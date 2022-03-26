#include<bits/stdc++.h>

using namespace std;

void print(map<int, string> &m){
	cout<<m.size()<<endl;
	for(auto &pr : m){
		cout<<pr.first<<" | "<<pr.second<<endl;
	}

	for(map<int, string>::iterator it = m.begin();it!=m.end();++it){
		cout<<(*it).first<<" | " <<(*it).second<<endl;
	}

	auto it = m.find(3);
	//cout<<*it<<endl;
}

void printf(unordered_map<int, string> &m){
	cout<<m.size()<<endl;
	for(auto &pr : m){
		cout<<pr.first<<" | "<<pr.second<<endl;
	}
}


int main(){

	unordered_map<int,string> mp;
	mp[10] = "abc";
	mp[1] = "abc";
	mp[5] = "cde";
	mp[3] = "efg";
	mp.insert({4, "afg"});

	unordered_map<int, string>::iterator its = mp.begin();

	printf(mp);


	map<int, string> m;
	m[1] = "abc";
	m[5] = "cde";
	m[3] = "efg";
	m.insert({4, "afg"});
	m[6];
	m[0];
	auto itr = m.find(3);
	print(m);

	if(itr == m.end()){
		cout<<"NO value"<<endl;
	}
	else{
		cout<<(*itr).first<<" "<<(*itr).second<<endl;
	}


	map<int, string> :: iterator it;
	for(it = m.begin();it!=m.end();++it){
		cout<<(*it).first<<" " <<(*it).second<<endl;
	}
	cout<<"map_size "<<m.size()<<endl;
	cout<<endl;

	for(auto &pr : m){
		//cout<<"pr "<<pr<<"&pr "<<&pr<<endl;
		cout<<pr.first<< " "<<pr.second<<endl;
	}

	cout<<endl;

	for(auto pr : m){
		//cout<<pr<<endl;
		cout<<pr.first<< " "<<pr.second<<endl;
	}
	return 0;
}