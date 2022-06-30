//
//  main.cpp
//  display_digits_reverse
//
//  Created by Muhammad Talal on 2022-06-22.
//
// Display the digits of a number in reverse.

#include <iostream>
using namespace std;

int main() {
    //write your program here..
    
    //Step 2. Declare a var to store n
    int n;
    
    //Step 1. Ask for integer n
    cout << "Enter an integer n: ";
    
    //Step 3. Store n
    cin >> n;
    
    //Step 4. Use while loop to iterate through n
    while (n > 0) {
        cout << n % 10 << " "; //gets the last digit of n
        n /= 10; // n = n/10 -- removes the last digit of n
    }
    
    
    return 0;
}
