//basic in strings
#include<bits/stdc++.h>
using namespace std;

int main () {
    string a;
    int len;
    cin >> a;

    a[1] = 'o';   // it will replace the value by o char in 1st index.
    
    len = a.size();
    cout << a << endl;   //it will print the string after modifying it.
    cout << a[len-1] << endl;   //it will print the last char of string.
    return 0;

}