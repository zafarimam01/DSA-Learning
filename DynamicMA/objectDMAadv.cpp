#include<bits/stdc++.h>
using namespace std;

class employee{
    int id;
    float salary;
public:
    void input(){
        cout<<"Enter id \n";
        cin>>id;
        cout<<"Enter salary \n";
        cin>> salary;

    }
    void display(){
        cout<<"\n"<<id<<" "<<salary;
    }
};

int main(){
    int n;
    cout<<"Enter the number of employee \n";
    cin >>n;
    employee *p = new employee(n);
    employee *d = p;
    employee *flag = p;
    if(p == NULL){
        cout<<"Memory allocation failed \n";
        return 0;
    }
    else{
        for(int i=0; i<n; i++){
            p->input();
            p++;
        }
    }
    for(int i=0; i<n; i++){
        d->display();
        d++;
    }
    delete[] flag;
    return 0;
}