#include<bits/stdc++.h>
using namespace std;

// Recursion is implemented internally by using the stack.
int main(){
    stack<int> s;                              // output - 5
    s.push(2);                                 //          4         
    s.push(3);                                 //          3
    s.push(4);                                 //          2
    s.push(5);
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }


    queue<string> q;                          //output- abc
    q.push("abc");                            //        bcd
    q.push("bcd");                            //        cde
    q.push("cde");                            //        def
    q.push("def");                            //        ghi
    q.push("ghi");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
}