#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of tree: \n";
    cin>>n;
    int tree[n];
    cout<<"Enter Nodes: ";
    for(int i=0; i<n; i++){
        cin>>tree[i];
    }
    for(int i=0; i<n; i++){
        cout<<"Node: "<<tree[i]<<"\n";

        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < n){
            cout<<"left Node: "<<tree[left]<<"\n";
        }
        if(right < n){
            cout<<"Right Node: "<<tree[right]<<"\n";
        }
        cout<<"\n";
    }

    return 0;
}