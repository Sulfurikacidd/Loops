//
//  main.cpp
//  palindrome_number
//
//  Created by Muhammad Talal on 2022-06-24.
//
// program checks if an integer n (user input) is palindrome or not.
// By defination, a number is a palindrome when the reverse of that number is same as original number
// make sure your number don't start or end at 0.


#include <iostream>
using namespace std;

int main() {
    //write your code here..
    
    //Step 2. Declare varibales
    int n; //user input
    int m; //copy of n as n will become 0 by the end of process
    int dig; //single digit of n
    int rev = 0; //reverse of n
    
    
    //Step 1. Ask for n
    cout << "Enter integer n: ";
    
    //Step 3. Read n
    cin >> n;
    
    //Step 4. copy n into m
    m = n; //(RHS gets stored into LHS)
    
    //Step 5. use while loop to get reverse of n
    while(n > 0) {
        dig = n % 10;       //get the last digit of n
        rev = rev*10 + dig; //add the digits to reverse
        n = n/10;           //remove the last digit of n

    } //loop end
    
    if(m == rev) {
        cout << "Rev: " << rev << endl;
        cout << m << " is a palindrome" << endl;
    } else {
        cout << "Rev: " << rev << endl;
        cout << m << " is NOT a palindrome" << endl;
    }
    
    return  0;
}
