#include<bits/stdc++.h>

using namespace std;


namespace ak{
	//no. of types to declare pair
	namespace type_to_declare_pair{
		/*
		pair<int, int> pr = {1,2};

		pair<int, char> PAIR1;
    	PAIR1.first = 100;
    	PAIR1.second = 'G';

    	pair<int,int> result(1,2);

    	pair <string, double> PAIR3 ;
		PAIR3 = make_pair ("GeeksForGeeks is Best",4.56);

		pair<char, int>pair1 = make_pair('A', 1);
		*/
	}
}

int main(){

	pair<int, int> pr = {1,2};

	pair<int, char> PAIR1;
    PAIR1.first = 100;
    PAIR1.second = 'G';
    cout<<PAIR1.first<<" "<<PAIR1.second<<endl;

	pair<int,int> result(1,2);
	cout<<result.first<<" "<<result.second<<endl;

	pair <string, double> PAIR3 ;
	PAIR3 = make_pair ("GeeksForGeeks is Best",4.56);
	cout<<PAIR3.first<<" "<<PAIR3.second<<endl;

	pair<char, int>pair1 = make_pair('A', 1);
    pair<char, int>pair2 = make_pair('B', 2);

    cout<<"before swap pair1: "<<pair1.first<<" "<<pair1.second<<endl;
    cout<<"before swap pair2: "<<pair2.first<<" "<<pair2.second<<endl;

    pair1.swap(pair2);
    cout<<"after swap pair1: "<<pair1.first<<" "<<pair1.second<<endl;
    cout<<"after swap pair2: "<<pair2.first<<" "<<pair2.second<<endl;

    cout<<endl;

    pair <string, int> g1;
    pair <string, int> g2("Quiz", 3);

    cout<<"g2: "<<g2.first<<" "<<g2.second<<endl;

    pair <string, int> &g3(g2);
    g3.first = "g3 string";
    cout<<"g3: "<<g3.first<<" "<<g3.second<<endl;

    cout<<endl;

    cout<<"g2: when we pass as (&g3(g2)) reference then value of g2 also reflected back to the g2. Otherwise there is no changes reflected back to g2 in general (g3(g2))"<< "\n"<< "\n"<<"g3: "<<g2.first<<" "<<g2.second<<endl;
    cout<<endl;

    // ==>> tie(int &, int &) = pair1; 

    pair<int, int> pairr = { 1, 2 };
    int a, b;
    tie(a, b) = pairr;        //tie(a, b) is used to unpack the value into specific variable.
    cout << a << " " << b << "\n";             //here tie(a, b) unpack the value into the a and b;
 

    pair<int, int> pairr2 = { 3, 4 };
    tie(a, ignore) = pairr2;            //here ignore not unpack;
    cout << a << " " << b << "\n";

    // Illustrating pair of pairs
    pair<int, pair<int, char> > pairr3 = { 3, { 4, 'a' } };
    int x, y;
    char z;
    // tie(x,y,z) = pairr3; Gives compilation error
    // tie(x, tie(y,z)) = pairr3; Gives compilation error
    // Each pair needs to be explicitly handled
    x = pairr3.first;
    tie(y, z) = pairr3.second;
    cout << x << " " << y << " " << z << "\n";   

	return 0;
}