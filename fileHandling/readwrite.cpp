#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream file("student.txt");

    if(!file){
        cout<<"File could not be opened \n";
        return 1;
    }
    file<<"Jafar"<<" \n";
    file<< 85 <<endl;
    file.close();
    cout<<"Data written successfully \n";

    ifstream obj("student.txt");
    if(!obj){
        cout<<"File not found \n";
        return 1;
    }
    string name;
    int marks;
    obj>>name;
    obj>>marks;

    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
    obj.close();
    return 0;
}