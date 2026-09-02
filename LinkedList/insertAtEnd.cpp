#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;

    }

};
Node* insertatEnd(Node* head, int x){
    Node* newNode = new Node(x);
    if(head == nullptr){
        return nullptr;
    }
    Node* last = head;
    while(last->next != nullptr){
        last = last->next;
    }
    last->next = newNode;
    return head;
}
void PrintList(Node* head){
    while(Node != nullptr){
        cout << node->data << " ";
        node = node->next;
    }

}
int main(){
    Node* Linkedlist<int> l = {1,3,4,2};
    Node* head = next;
    int a = 7;
    insertatEnd(head,a);
    PrintList(head);
    return 0;
}