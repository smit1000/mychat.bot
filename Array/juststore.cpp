#include <iostream>
using namespace std;
// // Function to perform linear search
// // Returns the index of the element if found, otherwise returns -1
// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i; // Target found, return current index
//         }
//     }
//     return -1; // Target not found after checking the entire array
// }
// int main() {
//     int MyArray[] = {12, 45, 7, 23, 9, 89, 3};   
//     // Calculate the total number of elements in the array
//     int size = sizeof(MyArray) / sizeof(MyArray[0]); 
//     int target = 23; // Element we want to find
    
//     // Call the search function
//     int result = linearSearch(MyArray, size, target);
    
//     // Display the result
//     if (result != -1) {
//         cout << "Element " << target << " found at index: " << result << std::endl;
//     } else {
//         cout << "Element " << target << " not found in the array." << std::endl;
//     }
    
//     return 0;
// }

// //
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string word;
//     cin >> word;
//     for (int i = 0; i < word.length(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < word.length(); j++)
//         {
//             if (word[i] == word[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             cout << i;
//             return 0;
//         }
//     }
//     cout << -1;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit (n): ";
    cin >> n;
    cout << "\n--- USING WHILE LOOPS ---" << endl;
    // Counting 1 to n
    cout << "Counting 1 to " << n << ":" << endl;
    int countUp = 1; 
    while (countUp <= n) { 
        cout << countUp << " ";
        countUp++; 
    }
    cout << "\n\n";
    // Counting n to 1 (Reverse)
    cout << "Counting " << n << " to 1 (Reverse):" << endl;
    int countDown = n; 
    while (countDown >= 1) { 
        cout << countDown << " ";
        countDown--; 
    }
    cout << endl;
    return 0;
}

int main(){
    string s,temp,rev;
    cin>>s;
    temp=s;
    for(int i=s.length()-1;i<=s.length();i--){
        rev+=s[i];
    
    }
    cout<<rev<<endl;
    if(temp==rev){
        cout<<"palindrome";
    }else{
        cout<<"non palin";
    }
    return 0;
}