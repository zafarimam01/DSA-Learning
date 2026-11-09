#include<iostream>
using namespace std;

// class abc{
// private:
//     int x;
//     int y;
//     int z;
// public:
//     abc(int a,int b,int c){
//         x = a;
//         y = b;
//         z = c;
//     }
//     void display(){
//         cout<<x;
//         cout<<y;
//         cout<<z<<endl;
//     }
//     void operator-(){
//         x = -x;
//         y = -y;
//         z = -z;
//     }
// };

// int main(){
//     abc s(10,-20,30);
//     cout<<"S: ";
//     s.display();
//     -s;
//     cout<<"S : ";
//     s.display();
//     return 0;
// }

// unirary opretor to decreament value;

// class Score{
// private:
//     int val;
// public:
//     Score() {val = 10;}
//     void operator--(){
//         val = val-1;

//     }
//     int show(){
//         return val;
//     }
// };
// int main(){
//     Score s1,s2;
//     cout<<"Initial Value of s1 Object = "<<s1.show()<<endl;
//     cout<<"Initial Value of s2 Object = "<<s2.show()<<endl;
//     --s1;
//     --s1;
//     --s2;
//     cout<<"Final value of s1 Objects = "<<s1.show()<<endl;
//     cout<<"Final value of s2 Objects = "<<s2.show()<<endl;
//     return 0;
// }

class Complex{
    int x;
    int y;
public:
    Complex(){
        x = 10;
        y = 20;
    }
    Complex(int a,int b){
        x = a;
        y = b;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }
    void show(){
        cout<<x<<"+i"<<y;
    }
};
int main(){
    Complex c1(2,3),c2(4,5),c3;
    c3 = c1+c2;
    c3.show();
    return 0;
}