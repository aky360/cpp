#include <bits/stdc++.h>

using namespace std ;
//max returns the maximum of the two elements
template <class T>
class Max{
    public:
    T max(T a, T b){
	    return a > b ? a : b ;
    }
};

int main()
{
   Max <int> mx;
   Max <char> m;
   Max <float> f;
	cout << "max(10, 15) = " << mx.max(10, 15) << endl ;
	cout << "max('k', 's') = " << m.max('k', 's') << endl ;
	cout << "max(10.1, 15.2) = " << f.max(10.1, 15.2) << endl ;
	return 0;
}