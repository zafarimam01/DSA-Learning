#include<iostream>
using namespace std;
class Sample{
private:
    int n;
public:
    Sample(int x){
        n = x;
        cout<<"Constructor called for Value of X: "<<n<<endl;
    }
    ~Sample(){
        cout<<"Destructor called for Value of x: "<<n<<endl; 
    }
};
int main(){
    Sample s1(1);
    Sample s2(2);
    Sample s3(3);
    return 0;
}