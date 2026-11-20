#include<bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}
void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<"Data: "<<root->data<<" ";
    inorder(root->right);

}
void preOrder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<"Data: "<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == nullptr){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<"Data: "<<root->data<<" ";

}
int main(){
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Inorder: \n";
    inorder(root);

    cout<<"\nPreorder: \n";
    preOrder(root);

    cout<<"\nPostorder: \n";
    postOrder(root);
    return 0;
}