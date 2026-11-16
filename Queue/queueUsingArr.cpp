#include<iostream>
using namespace std;

class QueueUsingArr{
private:
    int *qu;
    int cap;
    int start = -1;
    int end = -1;
    int currSize = 0;
public:
    QueueUsingArr(int capacity){
        cap = capacity;
        qu = new int[cap];
    }
    void push(int x){
        if(currSize >= cap){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(currSize == 0){
            start = end = 0;
        }
        else{
            end = (end+1)%cap;
        }
        qu[end] = x;
        currSize+=1;
    }
    int pop(){
        if(currSize == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int el = qu[start];
        if(currSize == 1){
            start = end = -1;
        }
        else{
            start = (start + 1)% cap;
        }

        currSize -= 1;
        return el;
    }
    int top(){
        if(currSize == 0){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return qu[start];
    }
    int size(){
        return currSize;
    }
};

int main(){
    int cp;
    cin>>cp;
    QueueUsingArr qt(cp);
    qt.push(45);
    qt.push(56);
    qt.push(23);
    qt.push(89);
    cout<<"Poped Element is : "<<qt.pop()<<endl;
    cout<<"Top Element is : "<<qt.top()<<endl;
    cout<<"Poped Element is : "<<qt.pop()<<endl;
    cout<<"Top Element is : "<<qt.top()<<endl;
    cout<<"Size is : "<<qt.size()<<endl;
    return 0;
}