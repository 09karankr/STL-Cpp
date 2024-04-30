#include<bits/stdc++.h>
using namespace std;

/*
Iterator lower_bound (Iterator first, Iterator last, const val)  
    lower_bound returns an iterator pointing to the first element in the range [first,last) 
    which has a value not less than ‘val’  and if the value is not present in the vector then it returns the end iterator.

Iterator upper_bound (Iterator first, Iterator last, const val)
    upper_bound returns an iterator pointing to the first element in the range [first,last) 
    which has a value greater than ‘val’  and if the value is not present in the vector then it returns the end iterator.
*/

// ub lb internally uses binary search for arrays and vectors
// ub lb internally uses tree for sets, map case

int main(){
    // for arrays
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);                     // for ub and lb the data structure you are using must be sorted, 
                                    //  for like array and vectors those must be sorted.
                                    // if not sorted then it does not work in log(n) it works in O(n).
    for (int i = 0; i < n; ++i)
    {
        cout<< a[i] << " ";
    }
    cout<< endl;

    // TC - lb is log(n)
    int *ptr = lower_bound(a, a+n, 6);                // eg - 4 5 5 7 8 25
    if(ptr == (a+n)){                                  //      output- 7
        cout<< "Not found";                        
        return 0;
    }
    cout << (*ptr) << endl;
    
    // TC - ub is log(n)
    int *ptr = upper_bound(a, a+n, 5);                // eg - 4 5 5 7 8 25
    if(ptr == (a+n)){                                 //       output - 7
        cout<< "Not found";
        return 0;
    }
    cout<< (*ptr) << endl;


    // for vectors
    int n;
    cin>> n;
    vector<int> a1(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a1[i];
    }
    sort(a1.begin(), a1.end());
    for (int i = 0; i < n; i++)
    {
        cout<< a1[i] << " ";
    }
    cout<< endl;
    auto it = upper_bound(a1.begin(),a1.end(),5);             //eg- 4 5 5 7 8 25
    if(it == a1.end()){                                       //   output - 8
        cout<< "NOt found";
        return 0;
    }
    cout<< (*it) << endl;

    
    // for sets and maps
     int n;
     cin>> n;
     set<int> s;
     for(int i=0; i< (int)(1e6); ++i){
        s.insert(rand());
     }
     for (int i = 0; i < (int)1e5; ++i)
     {
        auto it = s.lower_bound(rand());               // for sets and maps we use s.lb or s.ub and for maps m.lb or m.ub 
     }
     cout << (*it) << endl;
     
}