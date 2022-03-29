// C++ program to print all palindromic partitions of a given string
#include<bits/stdc++.h>
using namespace std;


bool oneDigit(int *num){
    if(*num < 0){
        cout<<"the number is less than 0 "<<endl;
        return true;
    }
    else if(*num >= 0 && (*num)/10 > 10){
        cout<<(*num)/10<<"the number is greater than 0 "<<endl;
        return true;
    }
    else{
        return false;
    }
    return false;
}

int ret(int *num){
    if(*num > 0){
        *num = *num+1;
    }
    return *num;
}

int findLenOfStrRec(string str, int startIndex){
    if(str.length() == 0){
        return 0;
    }
    if(str.length() == 1){
        return 1;
    }
    if(startIndex > (str.length()-1)){
        return startIndex;
    }
    return findLenOfStrRec(str, startIndex+1);
}

char firstUpperCaseCharInStr(string str, int i=0)
{
    if (str[i] == '\0')
         return 0;
    if (isupper(str[i]))
            return str[i];
    return firstUpperCaseCharInStr(str, i+1);
}

int findMinMax(int *arr, int startIndex, int lenArr){
    if(lenArr == 0){
        return 0;
    }
    if(lenArr == 1){
        return arr[lenArr];
    }
    if(startIndex >= lenArr){
        return 0;
    }
    if(arr[0] < arr[1]){
        return max(arr[0], findMinMax(arr+1, startIndex+1, lenArr-1));
    }
    
    return findMinMax(arr+1, startIndex+1, lenArr-1);
}

void print(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}

vector<int> findMaxMin(int *arr, int n, vector<int> &vec){
    if(n==1){
		return vec;
	}
	else{
		int minimum = min(arr[0], findMaxMin(arr + 1, n - 1, vec));
		int maximum = max(arr[0], findMaxMin(arr + 1, n - 1, vec));
		vec.push_back(minimum);
		vec.push_back(maximum);
		return vec;
	}
	return vec;
}


/*int getMin(int arr[], int n){
	if(n==1){
		return arr[0];
	}
	else{
		return min(arr[0], getMin(arr + 1, n - 1));
	}
    return (n == 1) ? arr[0] : min(arr[0], getMin(arr + 1, n - 1));
}


int getMax(int arr[], int n){
	if(n==1){
		return arr[0];
	}
	else{
		return max(arr[0], getMin(arr + 1, n - 1));
	}
    return (n == 1) ? arr[0] : max(arr[0], getMin(arr + 1, n - 1));
}*/

// Driver program
int main(){
    
    int arr[] = {2,3,4,5,6,7,8,9};
    
    vector<int> v;
    
    findMaxMin(arr,8, v);
    print(v);
    
    //cout<<"Max "<<findMinMax(arr,0, 8)<<endl;
    
    string st = "geeksforGeeKS";
    
    cout<<"length of string "<<findLenOfStrRec(st, 0)<<endl;
    
    char res = firstUpperCaseCharInStr(st);
    if (res == 0)
        cout << "No uppercase letter";
    else
        cout << res << "\n";
    
    string str = "nitin";
    int a = 123;
    cout<<"ret "<<ret(&a)<<endl;
    cout<<"mod of 1 is "<<1%10<<"   1/10 is "<<1/10<<endl;
    cout<<oneDigit(&a)<<endl;
    
    return 0;
}
