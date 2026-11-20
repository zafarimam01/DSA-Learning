#include<bits/stdc++.h>
using namespace std;

class Array{
private:
    int *arr;
    int n;
public:
    Array();
    void show_data(){
    }
};
Array::Array(){
    cout<<"Enter Size \n";
    arr = new int[n];
    cout<<"Enter array elements: \n";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}
void Array::show_data(){
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
}

int main(){
    int no_obj;
    cout<<"Enter the number of objects: \n";
    cin>>no_obj;
    Array *ptr = new Array[no_obj];
    for(int i=0; i<no_obj; i++){
        prt->show_data();
        ptr++
    }
    return 0;
}