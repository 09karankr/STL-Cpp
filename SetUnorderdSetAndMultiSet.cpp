#include<bits/stdc++.h>
using namespace std;

// the internal implementation of set is using Red black tree
// the internal implementation of onordered set is using hash table
void print(set<string> &s){
   //1st method
   for(string value: s){                                // output 1st method - abc 
     cout<< value << endl;                              //                     bcd
   }                                                    //                     zsdf
   //2nd method                                         //   set always print in sorted order                              
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
    auto it = s.find("abc"); //log(n)
    print(s);


    //unordered set
    unordered_set<string> s;       // unordered set is used where the order does not matter, 
                                   // this is commonly used when we want to check if the given value is present or not in the set.
      s.insert("abc");          //o(1)
      auto it = s.find("abc");  //o(1)

  /*   Que 1
      Given N strings and Q queries.
      In each query you are given a string
      print yes if string is present else
      print no.

      N<=10^6
      |S| <= 100
      Q <= 10^6
  */
    unordered_set<string> s1;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }

    int q;
    cin>>q;
    while (q--)
    {
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<< "no"<<endl;
        }
        else{
            cout<< "yes"<<endl;
        }
    }
    
    // multi set - in multi set we can take multiple same value,like in below we can take abc two times
    //             and when we print the set it gives the 2 abc output.
    // we can also use multiset in the place of priority queue in stl.

    multiset<string> s;    
    s.insert("abc"); // o(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    auto it = s.find("abc"); //o(log(n))
    if(it!= s.end()){
        s.erase(it);               // here output is - abc,bcd,zsdf.  It is deleted by iterator,and
    }                              // only one value is deleted.

    s.erase("abc");                // here output is - bcd , zsdf . it is deleted by value,and all the 
    print(s);                      // value is deleted 




}