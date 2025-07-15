/*If marks are less than 25,"Grade:F"
If marks are between 25 and 44"Grade:E"
If marks are between 45 and 49"Grade:D"
If marks are between 50 and 59"Grade:C"
If marks are between 60 and 69"Grade:B"
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."
*/

#include<bits./stdc++.h>
using namespace std;

int main () {
    int mark;
    cin >> mark;

    if (mark<25) {
        cout << "Your mark is " << mark << " and your grafe is : F" << endl;
    }

    if (mark >=25 && mark <= 44) {
        cout << "Your mark is " << mark << " and your grafe is : E" << endl;
    }

    if (mark >=45 && mark <= 49) {
        cout << "Your mark is " << mark << " and your grafe is : D" << endl;
    }

    if (mark >=50 && mark <= 59) {
        cout << "Your mark is " << mark << " and your grafe is : C" << endl;
    }

    if (mark >=60 && mark <= 69) {
        cout << "Your mark is " << mark << " and your grafe is : B" << endl;
    }

    if (mark >= 70) {
        cout << "Your mark is " << mark << " and your grafe is : A" << endl;
    }
}