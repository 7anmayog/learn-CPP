//basic of 2D array
#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[3][4];    //row and column . here, row=3 and column=4  .
    
    arr[2][0] = 5;
    cout << arr[2][0];

    return 0;

}

//if we enter a wrong index which does not exist then it will print a garbage value.