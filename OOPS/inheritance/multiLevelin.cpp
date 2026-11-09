#include<bits/stdc++.h>
using namespace std;

class Student{
protected:
    int roll_no;
public:
    void get_no(int);
    void put_no(void);

};
void Student::get_no(int a){
    roll_no = a;
}
void Student::put_no(){
    cout<<"Roll number is: "<<roll_no;
}

class Test : public Student{
protected:
    float sub1,sub2;
public:
    void get_marks(float x,float y){
        sub1 = x;
        sub2 = y;
    }
    void put_marks(){
        cout<<"Marks is "<<sub1<<sub2;
    }
};
class Result : public Test{
    float total;
public:
    void display(){
        total = sub1+sub2;
        put_no();
        put_marks();
        cout<<"Total is: "<<total;
    }
} ;
int main(){
    Result Student1;
    Student1.get_no(23);
    Student1.get_marks(80.6,89.0);
    Student1.display();
    return 0;
}