#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
	void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
		//base case
		if(index >= nums.size()){
			ans.push_back(output);
			return ;
		}
		//exclude the item
		solve(nums, output, index+1, ans);

		//include the item
		int element = nums[index];
		output.push_back(element);
		solve(nums, output, index+1, ans);
	}

	vector<vector<int>> subsets(vector<int>& nums){
		vector<vector<int>> ans;
		vector<int> output;
		int index = 0;
		solve(nums, output, index, ans);
		return ans;
	}
};

void printNestedVector1(vector<vector<int>> vec){
	for (vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); ++it){
        for (vector<int>::iterator it1 = (*it).begin(); it1 != (*it).end(); ++it1){
            cout << *it1 << " ";
        }
        cout << endl;
    }
}

void printNestedVector2(vector<vector<int>> vec){
	for (const auto& v : vec){
    	for (auto i : v){
        	cout << i << " ";
    	}
    	cout << endl;
	}
}

int main(){
	vector<int> nums = {1,2,3};
	Solution sol;
	cout<<"generate subsets for the nums values "<<endl;
	vector<vector<int>> vec = sol.subsets(nums);
	printNestedVector1(vec);
	cout << endl;
	printNestedVector2(vec);
	return 0; 
}
