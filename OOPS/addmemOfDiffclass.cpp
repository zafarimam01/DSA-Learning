#include<bits/stdc++.h>
using namespace std;
class Two;
class One
{
    private:
        int a;
    public:
        void fun(){
            a = 10;
        }
        friend int add(One,Two);
}A;
class Two
{
    private:
        int b;
    public:
        void func()
         {
            b =20;
        }
    friend int add(One, Two);
}B;
int add(One objectA,Two objectB){
    int s;
    s = objectA.a + objectB.b;
    return (s);
}
int main(){
    A.fun();
    B.func();
    cout << "Sum is "<< add(A,B);
}