//basic of 1D array
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[5];

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;   //assigns every elements respectively.

    arr[3] += 12;   //we can modify array. it will add +12 in 3rd index value.
    arr[1] = 32;   //replace the value of 1st index with 32.
    
    cout << arr[3] << endl;
    cout << arr[1] << endl;

    return 0;

}