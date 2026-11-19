#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};
class stackUsingLinked{
private:
    Node* topInd;
public:
    stackUsingLinked(){
        topInd = nullptr;
    }
    int sizee = 0;
    void push(int x){
        Node* temp = new Node(x);
        temp->next = topInd;
        topInd = temp;
        sizee+=1;
    }
    int pop(){
        if(topInd == NULL){
            cout<<"Stack is Underflow"<<endl;\
            return -1;
        }
        Node* temp = topInd;
        int el = temp->data;
        topInd = topInd->next;
        delete temp;
        sizee-=1;
        return el;
    }
    int top(){
        if(topInd == NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return topInd->data;
    }
    int size(){
        return sizee;
    }
};

int main(){
    stackUsingLinked st;
    st.push(23);
    st.push(34);
    st.push(67);
    st.push(45);
    st.push(89);

    cout<<"Poped : "<<st.pop()<<endl;
    cout<<"Top Element is: "<<st.top()<<endl;
    cout<<"Poped: "<<st.pop()<<endl;
    cout<<"Poped : "<<st.pop()<<endl;
    cout<<"Size: "<<st.size()<<endl;
    return 0;
}