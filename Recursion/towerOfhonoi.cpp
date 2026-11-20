#include<bits/stdc++.h>
using namespace std;

void towerOfHonoi(int x,char source = 'A',char aux = 'B',char desti = 'C'){
    if(x == 1){
        cout<<"Move Disk: "<<source<<" to "<<desti<<endl;
        return;
    }
    towerOfHonoi(x-1,source,desti,aux);
    cout<<"Move Disk "<<x<<" From "<<source<<" to "<<desti<<endl;
    towerOfHonoi(x-1,aux,source,desti);
}
int main(){
    int n;
    cout<<"Enter number of disk: \n";
    cin >> n;
    towerOfHonoi(n);
}