#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int, greater<int>> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            cout<<it<<endl;
        }
        return st.size();
    }
};

//problem 26 leetcode
class SolLeetCode {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 & nums[i] == nums[i+1]){
                continue;
            }
            nums[count] = nums[i];
            count++;
        }
        return count;
    }
};


int main(){

    vector<int> nums = {1,1,2,3};

    SolLeetCode sol;
    cout<<"SolLeetCode size() " <<sol.removeDuplicates(nums)<<endl;


    set<int> ss;
    ss.insert(1);
    ss.insert(1);
    ss.insert(2);
    ss.insert(2);
    ss.insert(3);

    for(auto it : ss){
        cout<<"ss "<<it<<endl;
    }
    cout<<endl;

    Solution sl;
    cout<<"removeDuplicates "<<sl.removeDuplicates(nums)<<endl;

    set<int, greater<int>> st;
    st.insert(40);
    st.insert(30);
    st.insert(60);
    st.insert(20);
    st.insert(50);

    cout<<"this is "<<&st<<endl;
    cout<<"this is "<<&st+1<<endl;
    cout<<"this is "<<&st+2<<endl;
    cout<<"this is "<<&st+3<<endl;

    cout<<endl;

    for(auto it : st){
        cout<<"this is "<<it<<endl;
    }
    cout<<endl;

    for(set<int, greater<int>>::iterator itr=st.begin(); itr!=st.end(); itr++){
        cout<<"this is "<<*itr<<endl;
    }
    cout<<endl;

    set<int> stt(st.begin(), st.end());

    for(set<int, greater<int>>::iterator itr=stt.begin(); itr!=stt.end(); itr++){
        cout<<"this is "<<*itr<<endl;
    }
    cout<<endl;


    // empty set container
    set<int, greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
 
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    //assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    //remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40) << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40) << endl;
 
    return 0;
}