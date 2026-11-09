#include<iostream>
using namespace std;
void dequeue(){
    
}
void enqueue(int v){
    Node* my = new Node(v);
    my->next = nullptr;
    if(front != nullptr){
        front = my;
        rear = my;
    }
    else{
        rear->next = my;
        rear = my;
    }
    cout<<"Value inserted in queue"<<v;
}
int main(){
    
    return 0;
}