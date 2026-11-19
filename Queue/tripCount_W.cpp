#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of People: \n";
    cin >> n;
    int w;
    cout<<"Weight \n";
    cin >> w;
    queue<int> q;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    vector<pair<int,int>> ans;

    while(!q.empty()){
        int currWeight = 0;
        int people = 0;

        while(!q.empty() && currWeight + q.front() <= w){
            currWeight+=q.front();
            q.pop();
            people++;
        }
        ans.push_back({people,currWeight});
    }
    cout<<ans.size()<<endl;
    for(auto x : ans){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}