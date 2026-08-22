#include <iostream>
using namespace std;
#include<cmath>

int main() {
    int num, temp, digit,digits=0;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while(temp){
        digits++;
        temp/=10;

    }
    temp=num;
    while (temp) {
        digit = temp % 10;
        sum += pow(digit,digits);
        temp /= 10;
      
    }
    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}