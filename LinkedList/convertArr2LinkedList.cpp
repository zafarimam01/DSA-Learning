#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertarr2ll(vector<int>&arr){
    Node* head = new Node(arr[0]); // Head Starting
    Node* mover = head; 

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; //
    }
    return head;
};
int LengthOf(Node* head){ // to print the length of Linked List;
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int>v = {23,1,83,51};
    Node* head = convertarr2ll(v);
    // cout << head->data;
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";//print all element of linked list;
        temp = temp->next;
    }
    cout << "\n" << LengthOf(head);
    return 0;
}