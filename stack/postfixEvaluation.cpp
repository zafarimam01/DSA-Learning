#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter the Postfix experation: \n";
    cin>>str;
    stack<int> s;

    for(char ch : str){
        if(isdigit(ch)){
            s.push(ch-'0');
        }
        else{
            int b = s.top();
            s.pop();
            int a =s.top();
            s.pop();
            int res = 0;

            switch (ch)
            {
            case '+':
                res = a+b;
                break;
            case '-':
                res = a-b;
                break;
            case '*':
                res = a*b;
                break;
            case '/':
                res = a/b;
                break;
            }
            s.push(res);
        }
        
    }
    cout<<"Result: "<<s.top()<<endl;
    return 0;

}