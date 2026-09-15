#include<bits/stdc++.h>
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
Node* insertAtBeging(Node* &head,int d){
    Node* newNode = new Node(d);
    if(head == nullptr)
        return newNode;
    newNode->next = head;
    head = newNode;
    return head;
}
void printList(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}
int main(){
    Node* head = new Node(3);
    head->next = new Node(7);
    head->next->next = new Node(4);
    int n;
    cin>> n;
    head = insertAtBeging(head,n);
    printList(head);
    return 0;
}