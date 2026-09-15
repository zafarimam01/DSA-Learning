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
Node* insertatEnd(Node* head, int x){
    Node* newNode = new Node(x);
    if(head == nullptr){
        return newNode;
    }
    Node* last = head;
    while(last->next != nullptr){
        last = last->next;
    }
    last->next = newNode;
    return head;
}
void PrintList(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;

}
int main(){
    Node* node1 = new Node(2);
    node1->next = new Node(4);
    node1->next->next = new Node(7);
    int a;
    cin >> a;
    node1 = insertatEnd(node1,a);
    PrintList(node1);
    return 0;
}