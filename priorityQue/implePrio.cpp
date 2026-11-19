#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    // max Priority Queue --->
    pq.push(30);
    pq.push(78);
    pq.push(34);
    pq.push(67);
    pq.push(45);

    cout<<"Max Priority Queue: \n";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
    priority_queue<int, vector<int>, greater<int>> minpq;
    //Min priority queue -->

    minpq.push(45);
    minpq.push(56);
    minpq.push(23);
    minpq.push(12);
    minpq.push(89);

    cout<<"Min priority queue: \n";
    while(!minpq.empty()){
        cout<<minpq.top()<<" ";
        minpq.pop();
    }
    return 0;
}