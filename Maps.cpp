#include<bits/stdc++.h>
using namespace std;

// Maps -> Unorderd maps is not sorted accdng to keys, but orderd maps is sorted accndng to their keys
// in maps we can not do (i + 1) we can do i++ , bcoz maps is not contaginous like array 
// also in maps unique keys is stored

int main(){
    map<int,string> m;
    //insert in maps
    m[1] ="abc";    // O(log(n)) TC for inserting , here n is map current size
    m[5] ="cdc";    // and the TC is depend upon the key data type,like if map<string, string> m , and we want to insert m["avst"] = "hdjk" so here TC is (s.size()*log(n)).
    m[3] ="acd";
    // other method for inserting
    m.insert({4,"afg"});
    //print the map
    map<int,string> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout<<(*it).first<< " "<< (*it).second<<endl;  //output- 1 abc
                                                       //        3 acd
    }                                                  //        4 afg
                                                       //        5 cdc     here all the key is printed in sorted order.

    // other method to print
    for(auto &pr : m){                                // O(log(n)) 
        cout<< pr.first << " "<< pr.second << endl;    
    }

     auto it = m.find(3);        // find() return the iterator, and T.C of find() is O(log(n))
     if(it == m.end()){
        cout<<"no value";
     }else{
        cout<<(*it).first<< " "<< (*it).second<<endl;      // output - 3 acd
     }

     // erase
     m.erase(3);  // O(log(n)) 
     // clear
     m.clear();   // it clear the map , output - 0    

     // one que - Given N strings, print unique strings in lexiographical order with their frequency
        //        N <= 10^5
        //        |S| <= 100

        map<string,int> m1;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            m1[s] = m1[s] +1;
        }
        for(auto pr : m){
            cout<< pr.first << " " << pr.second << endl;
        }

        

}

        
    
 

              


