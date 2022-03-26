#include<iostream>
using namespace std;

bool checkPalindrome(string str){
	int i = 0;
	//int j = str.length()-1;
	while(i<(str.length()-i-1)){
		if(str[i] != str[str.length()-i-1]){
			return false;
		}
		i++;
		//j--;
	}
	return true;
}


bool checkPalindromeUsingRecursion(string &str, int i){
	if(i>(str.length()-i-1)){
		return true;
	}
	if(str[i] != str[str.length()-i-1]){
		return false;
	}
	i++;
	return checkPalindromeUsingRecursion(str, i);
}


bool checkPalindromeUsingRecursn(string &str, int i, int j){
	if(i>j){
		return true;
	}
	if(str[i] != str[j]){
		return false;
	}
	else{
		return checkPalindromeUsingRecursn(str,i+1, j-1);
	}
}



int main(){
	string str = "babbab";
	string str1 = "tenet";
	string str2 = "string";
	string str3 = "bookkoob";
	cout<<"string is palindrome true or false "<<checkPalindrome(str)<<endl;
	cout<<"string is palindrome true or false "<<checkPalindrome(str1)<<endl;
	cout<<"string is palindrome true or false "<<checkPalindrome(str2)<<endl;
	cout<<"string is palindrome true or false "<<checkPalindrome(str3)<<endl;

	cout<<endl;

	cout<<"string is palindrome true or false with recursion "<<checkPalindromeUsingRecursion(str, 0)<<endl;
	cout<<"string is palindrome true or false with recursion "<<checkPalindromeUsingRecursion(str1, 0)<<endl;
	cout<<"string is palindrome true or false with recursion "<<checkPalindromeUsingRecursion(str2, 0)<<endl;
	cout<<"string is palindrome true or false with recursion "<<checkPalindromeUsingRecursion(str3, 0)<<endl;

	cout<<endl;

	cout<<"string is palindrome true or false with recursn "<<checkPalindromeUsingRecursn(str, 0,str.length()-1)<<endl;
	cout<<"string is palindrome true or false with recursn "<<checkPalindromeUsingRecursn(str1, 0,str1.length()-1)<<endl;
	cout<<"string is palindrome true or false with recursn "<<checkPalindromeUsingRecursn(str2, 0,str2.length()-1)<<endl;
	cout<<"string is palindrome true or false with recursn "<<checkPalindromeUsingRecursn(str3, 0,str3.length()-1)<<endl;

	return 0;
}