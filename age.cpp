//write a program to check if the user is an adult or a minor based on the input age that user provides.
#include<bits/stdc++.h>   //this includes most of the standard libraries in c++.
using namespace std;   //this allow us to use some stndard function without wwiting std:: .

int main()  {   //creating the main function.
    int age;   //delaring a variable that staore the age of the user.
    cin >> age;   //taking input from the user and storing it in age named variable.

    if (age>=18) {    //if statement , this loop execute if the condition is true.
        cout << "your age is : " << age << " and you are an adult" << endl;   //prints output that user is an adult anf their age also.
    
    }
    else {   //else statement , other wise this else statement executes if the if statement's condition is false.
        cout << "your age is : " << age << " and you are a minor" << endl;   //prints output that the user is a minior and their age also.

    }
    return 0;   //this indicates that the program is ended.
}