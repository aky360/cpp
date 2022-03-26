#include <bits/stdc++.h>
template <class T>
class Swap{
    T a;
    T b;
    public:
    void swapNum(T a, T b){
        T temp;
        temp = a;
        a = b;
        b = temp;
        std::cout<<a<<"\n"<<b<<"\n";
    }
};

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    Swap <float> sw;
    sw.swapNum(3.3,2.4);
    return 0;
}