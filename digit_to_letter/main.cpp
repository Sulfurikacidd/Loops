//
//  main.cpp
//  digit_to_letter
//
//  Created by Muhammad Talal on 2022-06-24.
//
// This program prints the integer n (user input) into words i.e n = 123 as one two three
// Make sure your number dont start or end at 0
// Basically you reverse a number i.e 123 becomes 321, then you pull each number from the end of reversed number and print it i.e pull 1 and print one, then pull 2 and print two and then finally pull 3 and print three.

#include <iostream>
using namespace std;

int main() {
    //write your program here..
    
    //Step 2. Declare the variables needed.
    int n; //user input
    int dig; // single digit of n
    int rev = 0; //reverse of n
    
    //Step 1. Ask for an integer n.
    cout << "Enter integer n: ";
    
    //Step 3. Read n into var
    cin >> n;
    
    //Step 4. Use while loop to reverse the number
    while (n > 0) {
        dig = n % 10; //get the last digit of n
        rev = rev * 10 + dig; // store the digit in the var rev
        n = n/10; //remove the last digit of n and update n
    } //loop end
    
    //Step 5. print rev
    cout << "Rev: " << rev << endl;
    
    //Step 6. Iterate through rev this time printing the digits from last to first
    while (rev > 0) {
        
        switch (rev % 10) {
            case 0: cout << "Zero "; break;
            case 1: cout << "One "; break;
            case 2: cout << "Two "; break;
            case 3: cout << "Three "; break;
            case 4: cout << "Four "; break;
            case 5: cout << "Five "; break;
            case 6: cout << "Six "; break;
            case 7: cout << "Seven "; break;
            case 8: cout << "Eight "; break;
            case 9: cout << "Nine "; break;
            default:
                break;
        }
        
        rev = rev/10; // remove the last digit of rev
    }
    
    
    cout << endl; return 0;
}
