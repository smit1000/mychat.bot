//To print range of prime num
#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime=1;
    cout<<"Enter the number";
    cin>>n;
    for(int i=2;i<n;i++){
        bool isprime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                bool isprime=0;
                break;

            }
        }
       if(isprime){
            cout<<i;
        }

    }
     
    return 0;
}
