#include<bits/stdc++.h>
using namespace std;

//Iterators

int main(){
    vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();  // Declaration of iterator it
    cout<<(*it)<<endl;   // output- 2, *it gives the value 
    cout<<(*(it+1))<<endl; // output-3
    for ( it = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<endl;                             // output - 2,3,5,6,7   here v.end() is one step more from the last element
    } 

    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it1;
    for (it1 = v_p.begin(); it1 != v_p.end(); ++it1)
    {
        cout<<(*it1).first << " "<< (*it1).second<<endl;   //output- 1 2  2 3  3 4
    }                                                                
                                                                    
           // other syntax also used when an iterator is pointed to a pair

      for (it1 = v_p.begin(); it1 != v_p.end(); ++it1)
    {
        cout<<(it1->first) << " "<< (it1->second)<<endl;  // output is same    
    }
        //(*it).first <=> (it->first)
    
}