#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
	void solve(vector<string> str, string output, int index, vector<string>& ans){

		if(index >= str.size()){
			ans.push_back(output);
			return ;
		}

		//exclude
		solve(str, output, index+1, ans);

		//include
		output = output + str[index];
		solve(str, output, index+1, ans);
	}

	vector<string> subsequences(vector<string>& nums){

		vector<string> ans;
		string output = "";
		int index = 0;
		solve(nums, output, index, ans);

		return ans;
	}
}; 


class SolutionLB{
public:
	void solve(vector<string>& ans, string str, string output, int i) {
    	//base case
    	if(i>=str.length()) {
        	if(output.length()>0)
        		ans.push_back(output);
        	return ;
        }

    	//exclude
    	solve(ans, str, output, i+1);

    	//include
    	output.push_back(str[i]);
    	solve(ans, str, output, i+1);
	}

	vector<string> subsequences(string str){
	
		vector<string> ans;
    	string output = "";
    	solve(ans,str,output,0);
    	
    	return ans;
	}
};



void printVector(vector<string> vec){
	for (vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it<< endl;
    }
}

int main(){
	vector<string> str = {"a", "b", "c"};
	string str1 = "abc";

	Solution sol;
	SolutionLB solLB;

	//cout<<"generate subsequences for the str values "<<endl;

	vector<string> vec = sol.subsequences(str);
	cout<<"subsequences solution 1 with vec "<<endl;
	printVector(vec);
	cout<<endl;

	vector<string> vecs = solLB.subsequences(str1);
	cout<<"subsequences solution 2 with str "<<endl;
	printVector(vecs);
	cout<<endl;

	cout <<"original values "<< endl;
	printVector(str);

	return 0; 
}
