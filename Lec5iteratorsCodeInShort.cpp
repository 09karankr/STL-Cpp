#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<<endl;


    //Range based Loops - we can directly iterate over the elements in container, this loop can work on any container

    for(int value : v){             // here we use copy of the vector v
        cout<<value<< " ";         // output - 2 3 5 6 7
    }
    cout<<endl;

    for(int &value : v){            // here we use reference , it means it is actual value of the vector v
        value++;                   // output - 3 4 6 7 8
    }


    // auto keyword -> auto keyword dynamically determines the data type of the a, it is very useful in the case of iterators
    auto a =1;
    cout<<a<<endl;    //output - 1

    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    //vector<pair<int,int>> :: iterator it1;
    for (auto it1 = v_p.begin(); it1 != v_p.end(); ++it1)
    {
        cout<<(*it1).first << " "<< (*it1).second<<endl;   //output- 1 2  2 3  3 4
    }                                                   
}

