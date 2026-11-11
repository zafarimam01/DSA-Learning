#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
Node* deleteAtLast(Node* &head){
    if(head == nullptr)
        return nullptr;
    if(head->next == nullptr)
        delete head;
        head = nullptr;
        return nullptr;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    
    return head;
}
void printList(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(6);
    head->next = new Node(8);
    head->next->next = new Node(4);
    head->next->next->next = new Node(2);
    head = deleteAtLast(head);
    printList(head);
    return 0;
}