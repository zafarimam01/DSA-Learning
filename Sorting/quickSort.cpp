#include<bits/stdc++.h>
using namespace std;

int partionArr(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int arr[],int low,int high){
    if(low < high){
        int pivotInd = partionArr(arr,low,high);
        quickSort(arr,low,pivotInd-1);
        quickSort(arr,pivotInd+1,high);

    }
}
int main(){
    int n;
    cout<<"Enter size of array: \n";
    cin >>n;
    int arr[n];
    cout<<"Enter array element: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    cout<<"Sorted Array: \n";
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}