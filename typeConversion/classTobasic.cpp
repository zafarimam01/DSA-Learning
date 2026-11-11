#include<iostream>
using namespace std;

class Student{
private:
    int rollNO;
    float fees;
public:
    Student(int a,float b){
        rollNO = a;
        fees = b;
    }
    operator int(){
        return rollNO;
    }
    operator float(){
        return fees;
    }
};

int main(){
    int i;
    float j;
    Student st(5,4500.34);
    i = st;
    j = st;
    cout<<"\n value of i: "<<i<<endl;
    cout<<"\n value of j: "<<j<<endl;
    return 0;
}