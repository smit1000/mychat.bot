//Palindro
#include <iostream>
using namespace std;
int main() {
 int n,temp,digit=0,rev=0;
 cout<<"enter";
 cin>>n;
 temp=n;
 for(int i=0;n!=0;i++){
     digit=n%10;
     rev=rev*10+digit;
     n/=10;
 }if(temp==rev){
     cout<<"pali";
 }else{
     cout<<"not pali";
 }
    return 0;
}