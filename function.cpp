//working with functions
#include<bits/stdc++.h>
using namespace std;

//take two numbers and returns its sum.
int sum(int num1, int num2) {
    int num3 = num1 + num2;    // 22 + 38
    return num3;     // 60

}


int main () {
    int num1 , num2;
    cin >> num1 >> num2;    //  22+38
    int res = sum(num1,num2);    //22+38 = 60
    cout << res;    //60
    return 0;
}