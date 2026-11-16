#include<iostream>
using namespace std;

class stackUsingArr{
private:
    int topInd = -1;
    int st[10];
public:
    void push(int x){
        if(topInd >= 9){
            cout<<"Stack Overflow";
            return;
        }
        st[++topInd] = x;
    }
    int top(){
        if(topInd == -1){
            cout<<"empty stack";
            return -1;
        }
        return st[topInd];
    }
    int pop(){
        if(topInd == -1){
            cout<<"stack is free";
            return -1;
        }
        return st[topInd--];
    }
    int size(){
        return topInd+1;
    }
};

int main(){
    stackUsingArr sta;
    sta.push(20);
    sta.push(34);
    sta.push(56);
    cout << "Popped: " << sta.pop() << endl;
    cout << "Top element: " << sta.top() << endl;
    cout << "Size: " << sta.size() << endl;

}