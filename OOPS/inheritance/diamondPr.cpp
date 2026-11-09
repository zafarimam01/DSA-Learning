#include<bits/stdc++.h>
using namespace std;
class B{
protected:
    int x;
public:
    void get_data(){
        cout<<"Enter the value of x \n";
        cin >> x;
    }
};
class DB1:public virtual B{
protected:
    int y;
public:
    void get_dataDb1(){
        cout<<"Enter the value of y \n";
        cin >> y;
    }
};
class DB2:public virtual B{
protected:
    int z;
public:
    void get_dataDb2(){
        cout<<"Enter the value of z \n";
        cin >> z;

    }
};
class D:public DB1,public DB2{
public:
    void sum{
        int result;
        result = x+y+z;
        cout <<"\n Result is"<<result;
    }
};
int main(){
    D obj;
    obj.get_data();
    obj.get_dataDb1();
    obj.get_dataDb2();
    obj.sum();
    return 0;
}