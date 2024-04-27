#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    //int a[n]; // this is array 

    for (int i = 0; i < n; i++)
    { 
        cin>>a[i];
    }
    // this sort function takes 2 parameter, 
    //1st is starting address of the the value in array which we want to sort,here a is the address of the 0th value, 
   // because in array a[0] address is a. 
    //And the 2nd parameter hmko last address ka ek aage ka address dena h jo ki a+n hoga.

    // summary - 1st param is jaha se tumko sorting krni h suru,waha ka address 
    //           and 2nd param is jaha tk tumko sorting khtm krni h na uska agla address.
    
    //sort(a,a+n); // for array
    sort(a.begin(),a.end()); // for vector
    for(int i =0; i<n; ++i){
        cout<< a[i]<< " ";
    }
    cout<<endl;
    

    // also study intro sort : https://www.geeksforgeeks.org/introsort-cs-sorting-weapon/
}