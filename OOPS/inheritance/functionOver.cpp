#include<bits/stdc++.h>
using namespace std;

class B{
protected:
    int x = 10;
    int y = 20;
public:
    void show_data(){
        cout<<"\n Sum is : "<<x+y; 
    }
};
class D:public B{
protected:
    int s = 14;
    int d = 23;
public:
    void show_data(){
        cout<<"\n Difference is :"<<d-s;
    }
};
int main(){
    D obj;
    obj.show_data();
    return 0;
}