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

        pair<int,int> pir = make_pair(11, 22);
        pair<int, int> *p = &pir;
        cout<<"using pointer first: "<<p->first<<endl;
        cout<<"using pointer second: "<<p->second<<endl;

		*/
        string print(){
            cout<<"this is inside(nested namespace block) the namespace block"<<endl;
            return "return string; ";
        }

        int array_of_pair(){
            pair<int, int> p_array[3];
            p_array[0] = {1,2};
            p_array[1] = {2,3};
            p_array[2] = {3,4};
            for(int i=0;i<3;++i){
                cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
            }
            return 0;
        }
	}
}

//namespace pracVector{
class pracVector{
private:
    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};
public:
    void array_of_vectors(){
        int N;
        cin>>N;
        vector<int> v[N];
        for (int i=0;i<N;++i){
            int n;
            cin>>n;
            for (int j = 0; j < n; ++j)
            {
                /* code */
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        for (int i=0;i<N;++i){
            printVec(v[i]);
        }
        //return 0;
    }

    void vector_of_vectors(){
        int N;
        cin>>N;
        vector<vector<int>> v;
        for (int i=0;i<N;++i){
            int n;
            cin>>n;
            //vector<int> temp;
            v.push_back(vector<int> ());
            for (int j = 0; j < n; ++j)
            {
                /* code */
                int x;
                cin>>x;
                //temp.push_back(x);
                v[i].push_back(x);
            }
            //v.push_back(temp);
        }
        for (int i=0;i<v.size();++i){
            printVec(v[i]);
        }
    }
    

    void printVec(vector<int> &v){
        cout<<"size: "<<v.size()<<endl;
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<" "<<endl;
        }
        //return 0;
    }
};



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

    cout<<"play with pointers:: "<<endl;
    cout<<endl;

    int l[] = {1,22};

    pair<string, string> prStr = {"str->first", "str->second"};
    cout<<"pair address: "<<&prStr<<endl;
    cout<<"pair address first: "<<&prStr.first<<endl;
    cout<<"pair address second: "<<&prStr.second<<endl;

    pair<int,int> pir = make_pair(11, 22);
    pair<int, int> *p = &pir;
    cout<<"using pointer in pair. p->first: "<<p->first<<endl;
    cout<<"using pointer in pair. p->second: "<<p->second<<endl;
    cout<<endl;

    pair<int,pair<int, int>> prOfpr = {11, {22, 21}};
    pair<int, pair<int, int>> *pontr = &prOfpr;
    cout<<"&prOfpr: "<<&prOfpr<<endl;
    cout<<"&pontr: "<<&pontr<<endl;
    cout<<"&pontr->first: "<<&pontr->first<<endl;
    cout<<"&pontr->second.first: "<<&pontr->second.first<<endl;
    cout<<"&pontr->second.second: "<<&pontr->second.second<<endl;
    cout<<"pair inside pair with pointer. pontr->second: "<<pontr->first<<endl;
    cout<<"pair inside pair with pointer. pontr->second.first: "<<pontr->second.first<<endl;
    cout<<"pair inside pair with pointer. pontr->second.second: "<<pontr->second.second<<endl;

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

    cout<<ak::type_to_declare_pair::print()<<endl;
    cout<<ak::type_to_declare_pair::array_of_pair()<<endl; 
    //cout<<pracVector::functor()<<endl;
    pracVector pracVec;
    //cout<<pracVec.array_of_vectors()<<endl;
    pracVec.vector_of_vectors();
    cout<<endl;

	return 0;
}