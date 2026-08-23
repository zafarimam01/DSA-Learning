// #include<bits/stdc++.h>
// using namespace std;
// void swwap(int x,int y){
//     int z = x;
//     x = y;
//     y = z;
//     cout<<x<<" "<< y;
// }
// int main(){
//     int a=10,b=20;
//     swwap(a,b);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void swwap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
    cout<<*x<<" "<<*y;
}
int main(){
    int a = 10, b= 20;
    swwap(&a, &b);
    return 0;
}