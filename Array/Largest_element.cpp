//Largest element
#include<iostream>
using namespace std;
int main(){
    int arr[]={23,102,67,98,101};
    int size=sizeof(arr)/sizeof(arr[0]);
   int largest_elem=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largest_elem){
            largest_elem=arr[i];
        }
    }
    cout<<largest_elem;
    return 0;
}

//2nd largest element
int main() {
    int arr[] = {23, 102, 67, 98, 101};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int largest_elem = arr[0];
    int second_largest = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest_elem) {
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


int main(){
    int arr[]={23,102,67,98,101};
    int size=sizeof(arr)/sizeof(arr[0]);
   int smallest_elem=arr[4];
    for(int i=0;i<size;i++){
        if(arr[i]<smallest_elem){
            smallest_elem=arr[i];
        }
    }
    cout<<smallest_elem;
    return 0;
}


