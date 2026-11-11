#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
        string name;
        Teacher(string n) : name(n){}

};

class Department{
    Teacher* teacher;
    public:
        Department(Teacher* t) : teacher(t){}

        void showTeacher() const {
            if(teacher != nullptr){
                cout<<teacher->name<<endl;
            }
        }
};

int main(){
    Teacher t("Asha");
    {
        Department d(&t);
        d.showTeacher();
    }
    cout<<t.name<<"Still Exist"<<endl;
    return 0;
}