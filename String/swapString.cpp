// #include<bits/stdc++.h>
// using namespace std;
// void reverseString(string str){
//     int a=0, b=str.size()-1;
//     while(a < b){
//         char temp = str[a];
//         str[a] = str[b];
//         str[b] = temp;
//         a++;
//         b--;
        
//     }
//     cout << str << endl;
// }
// int main(){
//     string str;
//     cin >> str;
    
//     reverseString(str);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v = {5,8,4,6,8,3,2,5};
//     int minValue = v[0];
//     int ans = 0;
//     for(int i=0; i<v.size(); i++){
//         if(v[i] < minValue){
//             minValue = v[i];
//         }
//         ans = max(ans,v[i]-minValue);
//     }
//     cout << ans;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int x,int y,int z=0,int w=0){ // in parameters we inisialised value from right;
//     return x+y+z+w;
// }
// int main(){
//     cout<< sum(10,15) << endl;
//     cout << sum(15,10,20) << endl;
//     cout << sum(10,15,25,30) << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// void sum(int x,int y){
//     cout<< x+y;
// }
// void sum(double a,double b){
//     cout<< a+b;
// }
// void sum(char d,char g){
//     cout << d+g;
// }
// int main(){
//     int a= 10,int b=20;
//     double c = 7.52, d=8.14;
//     char e='A', char f='B';
//     sum(a,b);
//     sum(c,d);
//     sum(e,f);
// }

