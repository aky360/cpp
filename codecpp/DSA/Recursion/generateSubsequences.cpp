#include <bits/stdc++.h>
using namespace std;

class Solution{
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

void printVec(vector<string> str){
    for(vector<string>::iterator itr = str.begin();itr!=str.end();itr++){
        cout<<*itr<<endl;
    }
}

int main(){
    
	string str = "abcd";
	Solution sol;
	
	cout<<"generate all subsequence for the string values "<<endl;
	vector<string> vec = sol.subsequences(str);

	cout << endl;
	printVec(vec);

	return 0; 
}
