/*
9. Palindrome Number
*/

class Solution {
public:
    
    int reverse(int x){
        long rev = 0;
        long temp = x;
        while(temp!=0){
            rev = rev *10 + temp%10;
            temp = temp / 10;
        }
        return rev;
    }
    
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(reverse(x) == x) return true;
        return false;
    }
};
