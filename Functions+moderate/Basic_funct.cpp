//Basic function
// #include<iostream>
// using namespace std;
// int json(int a){
//     if(a%2==0){
//         cout<<"Number "<<a<<" is Even";
//     }else{
//         cout<<"Number "<<a<<" is odd";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     json(n);
    
// }

//Q1: Function to Find Maximum
#include<iostream>
using namespace std;
int maxima(int a,int b){
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }else{
        cout<<b<<" is greater than "<<a;
    }
}
int main(){
    int a,b;
    
    cout<<"enter the number";
    cin>>a>>b;
     maxima(a,b);
    
}dfdf