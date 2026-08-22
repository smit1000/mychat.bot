// Multiple Object concept
// #include <iostream> 
// #include <string> 
// using namespace std; 
// class book { 
// public: 
//     string title; 
//     string author; 
//     int year; 
// }; 

// int main() { 
//     book myobj; 
//     myobj.title = "Newton Theories"; 
//     myobj.author = "Smit Meshram"; 
//     myobj.year = 2026; 

//     cout<<"title: "<< myobj.title << "\n"; 
//     cout <<"author: "<< myobj.author << "\n"; 
//     cout<< "year: "<< myobj.year << "\n"; 

//     return 0; 
// }

//Digit count , calculator

#include <iostream>
using namespace std;
int main() {
    int arr[] = {23, 102, 67, 98, 101};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest_elem = -1;
    int second_largest = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < largest_elem) {
            // 1. Save the old largest as the second largest FIRST
            second_largest = largest_elem;
            // 2. Update the largest element
            largest_elem = arr[i];
        } 
        // If it's not larger than 'largest', check if it beats 'second_largest'
        else if (arr[i] < largest_elem && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    // Print the final result ONCE outside the loop
    cout << "Second largest element is: " << second_largest << endl;

    return 0;
}



