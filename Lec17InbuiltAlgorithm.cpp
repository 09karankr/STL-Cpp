#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min = *min_element(v.begin(),v.end());               // eg- 2 3 1 6 7 6
    cout<< min<< endl;                                        // output - 1
    int max = *max_element(v.begin(),v.end());                
    cout<< max<< endl;                                       // output - 7

    int sum = accumulate(v.begin(), v.end(),0);       // it gives the sum of the elements, 
                                                      // and 3rd value in the param is the initial sum value
    // output - 25

    int ct = count(v.begin(),v.end(),6);
    cout<< ct << endl;                                 // output - 2

    auto it = find(v.begin(),v.end(),10);
    if(it != v.end()){
        cout<< *it <<endl;
    }
    else{
        cout << " Element not found";
    }
   
   // reverse
    reverse(v.begin(),v.end());
    for(auto val : v){
        cout << val << " ";                            // output- 6 7 6 1 3 2
    }
    cout << endl; 
    
    
}