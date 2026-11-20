#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    ofstream file("number.txt");
    if(!file){
        cout<<"File can not be opened \n";
        return 1;
    }
    for(int i=0; i<n; i++){
        file<<num[i]<<" ";
    }
    file.close();
    cout<<"Data written Successfully \n";

    ofstream evenArr("even.txt");
    if(!evenArr){
        cout<<"File is not opening \n";
        return 1;
    }
    for(int i=0; i<n; i++){
        if(num[i] % 2 ==0){
            evenArr<<num[i]<<" ";
        }
    }
    evenArr.close();
    ofstream oddArr("odd.txt");
    if(!oddArr){
        cout<<"File is not opening \n";
        return 1;
    }
    for(int i=0; i<n; i++){
        if(num[i]%2 != 0){
            oddArr<<num[i]<<" ";
        }
    }
    oddArr.close();
    cout<<"Even Number: ";
    ifstream evenRead("even.txt");
    if(!evenRead){
        cout<<"Not opening \n";
        return 1;
    }
    int temp;
    while(evenRead >> temp){
        cout<< temp<<" ";
    }
    evenRead.close();
    cout<<endl;

    ifstream oddRead("odd.txt");
    if(!oddRead){
        cout<<"File is not opening \n";
        return 1;
    }
    int tp;
    while(oddRead >> tp){
        cout<<tp<<" ";
    }
        oddRead.close();
        cout<<endl;

    return 0;
}