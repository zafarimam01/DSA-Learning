#include<bits/stdc++.h>
using namespace std;
// void printArray(int *arr[], int n){
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int k=0; k<n; k++){
//         cout << arr[k];
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     // for(int k=0; k<n; k++){
//     //     cout << arr[k];
//     // }
//     // //printArray(arr,n);
//     // return 0;

//     int i = 0;
//     while(i < n){
//         int *ptr = arr+i;
//         cout << *ptr;
//         i++;
//     }
// }

int main(){
    int n,mul;
    cin >> n;
    int arr[10];

    for(int j=0; j<10; j++){
        mul = n*(j+1);
        cout << mul << endl;
    }
    
    return 0;
}