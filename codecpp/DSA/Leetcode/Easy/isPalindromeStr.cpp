/*
125. Valid Palindrome
*/

class Solution {
public:
    bool isPalindrome(string s) {
        s = removeNoise(s);
        
        for(int i=0; i<s.size()/2; i++)
            if (s[i]!= s[s.size()-i-1]) return false;
            
        return true;
    }
    
    string removeNoise(string& s){
        string d;
        
        for(int i=0; i<s.size(); i++)
            if(::isalpha(s[i]) || ::isdigit(s[i]))
                d.push_back(::tolower(s[i]));
        
        return d;
    }
};
