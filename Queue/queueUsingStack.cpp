#include<bits/stdc++.h>
using namespace std;

// class Queue{
//     stack<int>s1,s2;
    
// public:
//     void push(int x){
//         while(!s1.empty()){ // slow for big push operation O(2N);
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(x);
        
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//     int pop(){
//         if(s1.empty()){
//             return -1;
//         }
//         else{
//             int st = s1.top();
//             s1.pop();
//             return st;
//         }

//     }
//     int top(){
//         if(s1.empty()){
//             return -1;
//         }
//         return s1.top();
//     }
// };

// ...... Improved Code --> 

class Queue{
    stack<int>s1,s2;
public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        
        if(!s2.empty()){
            int ss = s2.top();
            s2.pop();
            return ss;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int s = s2.top();
            s2.pop();
            return s;
        }
    }
    int top(){
        if(!s2.empty()){
            return s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
};

int main(){
    Queue q;
    q.push(2);
    q.push(7);
    q.push(6);
    q.push(3);
    q.push(5);
    cout<<"Top is: "<<q.top()<<endl;
    cout<<"poped element is: "<<q.pop()<<endl;
    cout<<"Top is: "<<q.top()<<endl;
    cout<<"poped element is: "<<q.pop()<<endl;
    cout<<"poped element is: "<<q.pop()<<endl;
    cout<<"Top is: "<<q.top()<<endl;

    return 0;
}

