#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = nullptr;
    }
};

class QueueUsingLL{
public:
    Node* start = nullptr;
    Node* end = nullptr;
    int sizee = 0;

    void push(int x){
        Node* temp = new Node(x);
        if(start == nullptr){
            start = end = temp;
            sizee++;
        }
        else{
            end->next = temp;
            end = temp;
            sizee++;
        }
    }
    int pop(){
        if(start == nullptr){
            cout<<"List is empty"<<endl;
            return -1;
        }

        Node* temp = start;
        int el = start->val;
        start = start->next;
        if(start == nullptr)
            end = nullptr;
        delete temp;
        sizee-=1;
        return el;
    }
    int top(){
        if(start == nullptr){
            return -1;
        }
        else{
            return start->val;
        }
    }
    int size(){
        return sizee;
    }
};

int main(){
    QueueUsingLL qe;
    qe.push(34);
    qe.push(25);
    qe.push(45);
    qe.push(76);
    qe.push(78);

    qe.size();
    qe.pop();
    qe.top();
    qe.pop();
    qe.top();
    qe.pop();
    qe.size();
    qe.pop();
    qe.top();
    return 0;
}