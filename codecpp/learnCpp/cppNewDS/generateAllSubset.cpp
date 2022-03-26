#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
	generateAllSubsets(vector<int>&nums, int currentIndex, vector<int>&res, vector<vector<int>>&powerSet){
		//base condition
		if(currentIndex >= nums.size()){
			powerSet.push_back(res);
			return;
		}
		int currentVal = nums[currentIndex];
		res.push_back(currentVal);
		generate(nums, currentIndex+1, res,powerSet);
		//remove the currentVal (not considering)
		res.pop_back();
		generateAllSubsets(nums, currentIndex+1, res,powerSet);

	}

	vector<vector<int>> subsets(vector<int>& nums){
		vector<vector<int>> powerSet;
		vector<int> res;
		generateAllSubsets(nums, 0, res, powerSet);
		return powerSet;
	}
};


int main(){

	BinaryTreeNode* root = NULL;
	root = buildTree(root);

	return 0;
}
