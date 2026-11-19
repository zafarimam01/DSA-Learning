#include<bits/stdc++.h>
using namespace std;

int main(){
    string path;
    cout<<"Enter the path \n";
    cin >> path;

    stack<string>st;
    int i = 0;
    int n = path.size();
    while(i < n){
        if(path[i] == '/'){
            i++;
            continue;
        }
        int j = i;
        while(j < n && path[j] != '/'){
            j++;
        }
        string folder = path.substr(i,j-i);

        if(folder == "."){

        }
        else if(folder == ".."){
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            st.push(folder);
        }

        i = j;
    }

    string ans = "";
    while(!st.empty()){
        ans = "/" + st.top() + ans;
        st.pop();
    }
    if(ans.empty()) ans = "/";
    cout<<ans << endl;
}