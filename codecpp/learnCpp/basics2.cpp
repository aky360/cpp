#include<bits/stdc++.h>

using namespace std;
	

namespace ak{
    namespace dk{
        string st = "this is the string for the namespace inside namespace ";
 	}
}


int main(){

	int x = 4;
	int *p_x = &x;

	cout<<"x: "<<x<<endl;
	cout<<"addr x : " <<&x << endl;
	cout<<"addr of &p_x : " <<&p_x<< endl;
	cout<<"Val p_x: "<<p_x<<endl;
	cout<<"Val *p_x: "<<*p_x<<endl;

	cout<<endl;

	*p_x = 5;

	cout<<"x: "<<x<<endl;
	cout<<"address of x: "<<&x << endl;
	cout<<"addr of &p_x : " <<&p_x<< endl;
	cout<<"Val p_x: "<<p_x<<endl;
	cout<<"Val *p_x: "<<*p_x<<endl;

	cout<<"p_x + 1: "<<p_x + 1<<endl;

	cout<<endl;

	int **p_p_x = &p_x;

	cout<<"addr at p_x: "<<p_x<<endl;
	cout<<"addr &p_x : " <<&p_x << endl;
	cout<<"Val p_p_x: "<<p_p_x<<endl;
	cout<<"Val *p_p_x: "<<*p_p_x<<endl;

	cout<<endl;

	cout<<"Val **p_p_x: "<<**p_p_x<<endl;

	cout<<endl;
	cout<<endl;

	int z[5] = {1,2,3,4,5};

	cout<<z<<endl;
	cout<<&z[0]<<endl; //z==&z[0] are equals
	cout<<*z<<endl;

	cout<<z+1<<endl;
	cout<<&z[1]<<endl;
	cout<<*z+1<<endl;
	cout<<*(z+1)<<endl; // you can use either *z+1 or *(z+1) both are same thing

	cout<<z+2<<endl;
	cout<<&z[2]<<endl;
	cout<<*z+2<<endl;

	cout<<z+3<<endl;
	cout<<&z[3]<<endl;
	cout<<*z+3<<endl;

	cout<<z+4<<endl;
	cout<<&z[4]<<endl;
	cout<<*z+4<<endl;

	int a[] = {1,2,3,4,5};
    int n = *(&a + 1) - a;
    cout<<n<<endl;
    
    cout<<a<<endl;
    cout<<a+1<<endl;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<*a+1<<endl;
    
    for(int i=0;i<n;i++){
        //cout<<*a+i<<" "<<endl;
        //int *x = *a+i;
        //cout<<*x<<endl;
        cout<<*a+i<<endl;
        //a++;
        //cout<<*a+i<<endl;
    }
    
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
        
    vector<int>::iterator it = g1.begin();
    
    cout<<"iterator: "<<*it<<endl;

    for(vector<int>::iterator it = g1.begin(); it != g1.end(); ++it){
    	cout<<"using iterators: "<<*it<<endl;
    }
    
    cout << "Output of begin and end: "<<endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
        //cout <<"address of iterator vector : " &i << " "<<"Val of *i: "<<*i<<endl;
        cout<<"address of vec val: "<<*i<<endl;
    	//cout<<"address of vec val: "<<i<<endl;
    

    for(int q : g1){
    	cout<<"itr using for each loop: "<<q<<endl;
    }
    cout<<endl;


    vector<int> *v = new vector<int>();
    
    v->push_back(4);
    v->push_back(12);
    v->push_back(1);
    v->push_back(9);
    v->push_back(0);
    v->push_back(90);
    v->push_back(0);
    
    cout<<v->at(0)<<endl;
    cout<<v->at(1)<<endl;

    cout<<v<<endl;
    cout<<&v<<endl;
    

    for(vector<int>::iterator it = v->begin(); it != v->end(); ++it){
    	cout<<"add of : "<<&it<<endl;
    	cout<<"val of : "<<*it<<endl;
    }

    cout<<endl;

    for(auto it = v->begin(); it != v->end(); ++it){
    	cout<<"add of : "<<&it<<endl;
    	cout<<"val of : "<<*it<<endl;
    }

    for(int ab : *v){
    	cout<<"Val of vector using for each loop: "<<ab<<endl;
    }

    
    cout << "Hello world!";
    cout<<ak::dk::st;

    cout<<'a'<<endl;

    return 0;

}



/*int main() {
    int a[] = {1,2,3,4,5,6,7,8};
    //cout<<a.size();
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*(&a)<<endl;
    cout<<*(&a + 1)<<endl;
    cout<<*(&a + 1) - a;

    return 0;
}
}
*/