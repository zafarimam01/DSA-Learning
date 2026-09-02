#include<bits/stdc++.h>
using namespace std;
class Sample{
    int a,b;
    public:
    void setvalue(){
        a=10,b=20;
    }
    friend float mean(Sample s);

};
float mean(Sample s){
    {
        return (s.a+s.b)/2;
    }
}
int main(){
    Sample x;
    x.setvalue();
    cout << "mean is " << mean(x);
}