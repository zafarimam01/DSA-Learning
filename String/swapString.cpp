#include<bits/stdc++.h>
using namespace std;
void reverseString(string str){
    int a=0, b=str.size()-1;
    while(a < b){
        char temp = str[a];
        str[a] = str[b];
        str[b] = temp;
        a++;
        b--;
        
    }
    cout << str << endl;
}
int main(){
    string str;
    cin >> str;
    
    reverseString(str);
    return 0;
}