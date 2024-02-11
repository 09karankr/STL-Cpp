#include<bits/stdc++.h>
using namespace std;

void printVec1(vector<pair<int,int>> v1){
    cout<<"size: "<<v1.size()<<endl;
    for (int i = 0; i < v1.size(); ++i)
    {
        cout<<v1[i].first <<" "<<v1[i].second<<endl;
    }
    cout<<endl;
    
}

void printVec2(vector<int> v2){
    cout<<"size: "<<v2.size()<<endl;
    for (int i = 0; i < v2.size(); ++i)
    {
        cout<< v2[i] << " "<< endl;
    }
    cout<<endl;
    
}

int main(){
    // Vector of Pairs
    vector<pair<int,int>> v1;
    printVec1(v1);
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    printVec1(v1); // end of vector of pairs 


    // Array of vectors
       int N;
       cin>>N;
       vector<int> v2[N]; // it means it created N vectors of 0 size
       for (int i = 0; i < N; ++i){
       
        int n; // here n is the number of elements in the given vector
        cin>>n;
        for (int j = 0; j < n; ++j){
       
            int x;   // here x is the element which is inserted in the given vector
            cin>>x;
            v2[i].push_back(x);
        }
        
       }
       for (int i = 0; i < N; ++i)
       {
        printVec2(v2[i]);
       }
       
       // Vector of Vector
        int N;
        cin>>N;
        vector<vector<int>> v;
        for (int i = 0; i < N; i++)
        {
            int n;
            cin>>n;
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                int x; 
                cin>>x;
                temp.push_back(x);
            }
            v.push_back(temp);
            
        }
        for (int i = 0; i < v.size(); i++)
        {
           //printVec(v[i]);
        }
        
        
       
    
}
