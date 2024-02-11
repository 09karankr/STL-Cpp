#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
   //1st method
   for(string value: s){
    cout<< s << endl;
   } 
   //2nd method
   for(auto it = s.begin(); it != s.end(); ++it){
    cout<< (*it) << endl;
   }
}

int main(){
    //ordered set
    set<string> s;
    s.insert("abc"); //log(n)
    s.insert("zsdf");
    s.insert("bcd");
    auto it = s.find("abc");

}