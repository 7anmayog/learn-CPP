#include<bits/stdc++.h>
using namespace std;

//from line 5 to 12 is for frontend which is written by the user in the interview.
void pattern(int n) {
    for(int i=0; i<n; i++) {    //outer loop
        for(int j=0; j<n; j++) {   //inner loop
            cout << "* " ;   //while its for the inner loop , it prints the columns of the pattern.
        }
        cout << endl;    //and it prints the rows of the pattern.
    }
}

//now from line 15 to 23 is for backend and it is hidden in the interviews . and it i8s also called as test cases.
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        pattern(n);
    }
}
//here are two for loops , outer and inner loop
//outer loop is created for printing the rows of the pattern
//while inner loop is created for printing the column