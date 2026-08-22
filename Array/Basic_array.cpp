#include<iostream>
using namespace std;

// int main(){
// int n;
// int arr[5]={25,40,50,60,80};
// // accessing elem
// cout<<arr[0];
// cout<<arr[4];
// cout<<"enter";
// cin>>arr[4]>>arr[0]; //adding elements
// cout<<arr[0]<<" ";
// cout<<arr[4];
// return 0;
// }

//linear search
// int lins(int arr[],int size,int target){
  

// int main(){
   
//    int result=0;
//     int arr[5]={23,34,56,78,90};
//     int size=sizeof(arr)/sizeof(arr[0]);
  
//     for(int i=0;i<size;i++){
//          result+=arr[i];
    
// }
// cout<<result<<endl;
// return 0;
    
// }

int lin_search(int arr[],int size,int target){
for(int i=0;i<size;i++){
if(arr[i]==target){
   return i;
}
}
}
int main(){
  int target;
  cout<<"enter the target";
  cin>>target;
  int arr[]={23,45,67,89,98};
  int size;
  size=sizeof(arr)/sizeof(arr[0]);
  int result=lin_search(arr,size,target);
  cout<<result;
}