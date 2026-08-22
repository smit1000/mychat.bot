// //aplphabet pattern

// #include <iostream>
// using namespace std;
// int main() {
//     int n; char ch;
//     cout<<"enter the num";
//     cin>>n;
//     cout<<"Enter the variable";
//     cin>>ch;
//  for(int i=0;i<=n;i++){
//     ch; 
//     for(int j=0;j<=n;j++){
//         cout<<ch;
//         ch+=1;
      
//     }
//      cout<<endl;
   
// }
//  return 0;
// }

//star left angle
// #include <iostream> 
// using namespace std;
// int main() {
//     int n;
//     bool isprime=true;
//     cout << "Enter the number";
//     cin>>n;
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//              cout<<i;
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
       
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: " << endl;

    // Loop through every number from 2 up to n
    for (int num = 2; num <= n; num++) {
        bool isprime = true;

        // Check if the current 'num' has any divisors
        for (int i = 2; i * i <= num; i++) { 
            if (num % i == 0) {
                isprime = false;
                break; // Stop checking if a divisor is found
            }
        }

        // If no divisors were found, it is prime
        if (isprime) {
            cout << num << " "<<endl;
            sum+=num;
            
        }
        
    }
 cout<<sum;
    return 0;
}

