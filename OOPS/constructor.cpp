#include<iostream>
using namespace std;
class Rectangle{
private:
    int length,breadth;
public:
    Rectangle(int a,int b){ // Parameterised Constructor 
    
        // Rectangle() // Defualt parameter;

        length = a;
        breadth = b;
    }
    void area(){
        int arrea = length*breadth;
        cout<<"area of rectangle is " << arrea;
    }
};
int main(){
    Rectangle r1(7,8);
    Rectangle r2(4,6);
    r1.area();
    return 0;
}