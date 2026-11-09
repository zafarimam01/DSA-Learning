#include<bits/stdc++.h>
using namespace std;

class University{
protected:
    int n;
    int x;

};
class Teacher : public University{
protected:
    string name;
    int UID;
    void get_data(){
        string s;
        cin >> s;
        int u;
        cin>> u;
        UID = u;
        name = s;
    }
    void put_data(){
        cout<<"Teacher Name : "<<name;
        cout<<"Teacher UID : "<< UID;
    }
};
class Student : public University{
protected:
    string sname;
    int sUid;
    void get_dat(){
        string sNa;
        int sUi;
        cin >> sNa;
        cin >> sUi;
        sname = sNa;
        sUid = sUi;
        
    }
    void show_data(){
        cout<<"Student Name : "<<sname<<"\n";
        cout<<"Student ID : "<<sUid;
    }
    
};
int main(){
    Student s1;
    s1.get_dat();
    s1.show_data();
    Teacher t1;
    t1.get_data();
    t1.put_data();
    return 0;
}