#include<bits/stdc++.h>
using namespace std;

class B1{
public:
    void show_data(){
        cout<<"In the base class 1";
    }
};
class B2{
public:
    void show_data(){
        cout<<"In the base class 1";
    }
};
class D: public B1, public B2{
public:
    void display(){
        B1::show_data();
        B2::show_data();
    }
};
int main(){
    D obj;
    //obj.show_data(); // compiler can't decide which class to call ; //Ambiguity;
    // -----> Solution;

    //obj.B1::show_data();
    //obj.B2::show_data();

    // ---> we can access using this as well ;
    obj.display();

}