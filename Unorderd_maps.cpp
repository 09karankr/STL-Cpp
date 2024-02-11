#include<bits/stdc++.h>
using namespace std;


// unorderd maps 
 // key diff betweeen maps and unorderd maps - 1. Inbuilt implementation , 2. Time complexity , 3. valid key datatype
 // 1. inbuilt imple - in unordered maps it uses hash table, and in maps it uses red black trees
 // 2. time complexity - in unorderd maps TC is O(1) for insertion and also accessing 
 
int main(){
     //unordered_map<pair<int,int>,string> m;    unordered map does not support pair

// now lets see a que on unordered_map
/*
Given N strings and Q queries.In each query you are given a string print frequency of that string
 N<= 10^6
 |S| <= 100
 Q <= 10^6
*/

unordered_map<string,int> m;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
     string s;
     cin>>s;
     m[s]++;
}
int q;
cin>>q;
while(q--){
     string s;
     cin>> s;
     cout<<m[s]<<endl;
}

}
