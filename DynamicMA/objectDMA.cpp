#include<bits/stdc++.h>
using namespace std;

class Sample{
public:
    Sample(){
        cout<<"Sample class called \n";
    }
    ~Sample(){
        cout<<"Sample class Destroyed \n";
    }
};
int main(){
    int n;
    cin >>n;
    Sample *obj = new Sample[n];
    delete[] obj;
    return 0;
}