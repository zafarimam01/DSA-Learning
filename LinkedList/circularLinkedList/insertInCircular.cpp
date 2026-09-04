#include<bits/stdc++.h>
#include<
using namespace std;

// Insert At Begining In A Circular Linked List;
struct Node()
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        int data;
        next = nullptr;
    }
};
Node* insertAtBeginig(Node* last,int key){
    Node* newNode = new Node(key);
    if(last == nullptr){
        newNode->next = newNode;
        return newNode;
    }
    newNode->last = last->next;
    last->next = newNode;
    return last;

}
void printList(Node* last){
    last->next = head;
    Node* temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }(temp->next != head);
}
int main(){
    Node* first = new Node(2);
    first->next = new Node(4);
    first->next-> = new Node(7);
    int last,key;
    cin >> last >> key;
    Node* last = first->next->next;
    last->next = first;
    insertAtBeginig(last,key);
    printList(last);
    return 0;
}