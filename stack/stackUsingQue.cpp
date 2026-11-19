#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int>q1,q2; // stack implementation using two queue;
public:
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    void pop(){
        if(q1.empty()){
            return;
        }
        q1.pop();
    }
    int top(){
        return q1.front();
    }
};

class Stack{
    queue<int> q;
public:
    void push(int x){
        q.push(x);
        for(int i=0; i<q.size()-1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        if(q.empty()){
            return;
        }
        q.pop();
    }
    int top(){
        return q.front();
    }
    int size(){
        return q.size();
    }
};

int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(6);
    s.push(4);
    cout<<"Top element is : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element is : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element is : "<<s.top()<<endl;
}