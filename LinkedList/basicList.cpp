#include<bits/stdc++.h>
using namespace std;
struct Node{ //we can use struct or for OOPS we can use class;
    public:
    int data; //store value
    Node* next; // Pointer to the next veriable

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
int main(){
    vector<int> v = {2,3,1,4,5};
    Node* y = new Node(v[0]);
    cout<<y<<endl;
    cout<<y->data;
    return 0;
}