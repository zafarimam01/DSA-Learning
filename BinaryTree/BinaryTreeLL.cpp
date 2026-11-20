#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node* createNode(int x){
    return new Node(x);
}
int main(){
    Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    cout<<root->data<<"\n";
    cout<<root->left->data<<"\n";
    cout<<root->right->data;
    return 0;
}