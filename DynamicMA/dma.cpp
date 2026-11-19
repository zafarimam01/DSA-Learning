#include<bits/stdc++.h>
using namespace std;

class String1{
    char* str;
public:
    String1(char* s){
        int lengt = strlen(s);
        str = new char[lengt+1];
        strcpy(str,s);
    }
    ~String1(){
        cout<<"Deleting str\n";
        delete[]str;
    }
    void display(){
        cout<<Str<<endl;
    }

};

int main(){
    String1 s("This is DMA example for string");
    cout<<s<<endl;
    s.display();
    return 0;
}