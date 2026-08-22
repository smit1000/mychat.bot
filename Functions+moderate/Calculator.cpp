#include <iostream>
using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int subtract(int a, int b) {
//     return a - b;
// }

// int multiply(int a, int b) {
//     return a * b;
// }

// double divide(int a, int b) {
//     if (b == 0) {
//         cout << "Division by zero is not possible.\n";
//         return 0;
//     }
//     return (double)a / b;
// }

// int main() {

//     int a, b, choice;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "\n1. Addition\n";
//     cout << "2. Subtraction\n";
//     cout << "3. Multiplication\n";
//     cout << "4. Division\n";

//     cout << "\nEnter your choice: ";
//     cin >> choice;

//     switch(choice) {

//         case 1:
//             cout << "Answer = " << add(a,b);
//             break;

//         case 2:
//             cout << "Answer = " << subtract(a,b);
//             break;

//         case 3:
//             cout << "Answer = " << multiply(a,b);
//             break;

//         case 4:
//             cout << "Answer = " << divide(a,b);
//             break;

//         default:
//             cout << "Invalid Choice";
//     }

//     return 0;
// }

int addition(int a , int b){
    return a+b;
}
int subtraction(int a , int b){
    return a-b;
}
int multiplication(int a , int b){
    return a*b;
}
double divison(int a , int b){

    if(b==0){
        cout<<"divisible by zero is not possible";
        return 0;
    }
     return (double)a /b;
   
}

int main(){
    int a,b,choices;
    cout<<"enter the two numbers: ";
    cin>>a>>b;
    cout<<"\n1.addition\n";
    cout<<"2.subtraction\n";
    cout<<"3.multiplication\n";
    cout<<"4.division\n";
    cout<<"\nEnter the choice ";
     cin>>choices;
     switch(choices){
        case 1:
        cout<<"Answere ="<<addition(a,b);
        break;
        case 2:
        cout<<"Answere ="<<subtraction(a,b);
        break;
        case 3:
        cout<<"Answere ="<<multiplication(a,b);
        break;
        case 4:
        cout<<"Answere ="<<divison(a,b);
        break;
        default:
        cout<<"invalid Choice";
     }
     return 0;
}
