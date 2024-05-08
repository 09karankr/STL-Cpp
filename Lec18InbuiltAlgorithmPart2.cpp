#include<bits/stdc++.h>
using namespace std;

int main(){
    // Lambda function
    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3);               // output- 5

    //all_of algo - this return true/false
    vector<int> v = {2,3,5};
    cout<< all_of(v.begin(),v.end(),[](int x){return x > 0;});  // output - 1 
    
    vector<int> v = {2,-1,5};
    cout<< all_of(v.begin(),v.end(),[](int x){return x > 0;});  // output - 0

    //any_of algo - this return true/false
    vector<int> v = {2,-1,-5};
    cout<< any_of(v.begin(),v.end(),[](int x){return x > 0;});   // output - 1
    
    vector<int> v = {-2,-1,-5};
    cout<< any_of(v.begin(),v.end(),[](int x){return x > 0;});   // output - 0
    

    //none_of - it returns true when none of match 

    vector<int> v = {2,-1,-5};
    cout<< none_of(v.begin(),v.end(),[](int x){return x > 0;});   //output - 0
    

    vector<int> v = {-2,-1,-5};
    cout<< none_of(v.begin(),v.end(),[](int x){return x > 0;});   // output - 1

}

