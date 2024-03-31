#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<int,int>,int> m;
    pair<int,int> p1,p2;
    p1= {1,2};
    p2 = {2,3};
    cout<<(p1<p2);  // output- 1
    cout<<(p1>p2); // output - 0


    map<set<int>,int> m;
    set<int> s1 = {1,2,3};
    set<int> s2 = {2,3};
    cout<< (s1<s2);   // output- 1



    /*
    input
    3 
    a b 4
    1 2 3 4
    c d 2
    1 2
    d f 3
    2 3 4
    */
   map<pair<string,string>,vector<int> > m1;
   int n;
   cin>>n;
   for (int i = 0; i < n; i++){
    string fn , ln;
    int count;
    cin>>fn>>ln>>count;
    for (int j = 0; j < count; j++){
        int x;
        cin>>x;
        m1[{fn,ln}].push_back(x);
    }
    }
   for(auto &pr : m1){
    auto &full_name = pr.first;
    auto &list = pr.second;
    cout<<full_name.first<<" "<<full_name.second;
    cout<< list.size()<< endl;
    for(auto &element : list){
      cout<< element << " ";
    }
    cout<<endl;
   }
    /*
    output
    3 
    a b 
    4
    1 2 3 4
    c d 
    2
    1 2
    d f 
    3
    2 3 4
    */
  map<int,multiset<string> > marks_map;      //que soln of hackerearth que
  int n;
  cin>>n;
  for(int i =0; i<n; ++i){
    int marks;
    string name;
    cin >> name >> marks;
    marks_map[marks].insert(name);
  }
  auto cur_it = --marks_map.end();
  while (true)
  {
    auto &students = (*cur_it).second;
    int marks = (*cur_it).first;
    for(auto student : students){
           cout<< student << " " << marks << endl;
    }
    if(cur_it == marks_map.begin()) break;
    cur_it--;
  }
  



}