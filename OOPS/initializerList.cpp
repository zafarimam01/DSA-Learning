#include<iostream>
using namespace std;
class Rectangle{
private:
    int l,b;
public:
    Rectangle(int x,int y):l(x),b(y){

    }
    int area(){
        return (l*b);
    }
};
int main(){
    Rectangle r(12,34);
    cout<<"Area is: "<<r.area();
    return 0;
}