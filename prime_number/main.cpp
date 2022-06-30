//
//  main.cpp
//  prime_number
//
//  Created by Muhammad Talal on 2022-06-22.
//
// This program finds out if the int n (user input) is a prime number or not.
// By defination a prime number is a number with only 2 factors -- 1 and itself.

#include <iostream>
using namespace std;

int main () {
    //write your program here.
    
    //Step 2. declare a var to store n.
    int n;
    
    //step 5. declare and init a var called count to count the number of factors.
    int count = 0;
    
    //Step 1. Ask for an int n.
    cout << "Enter an int n: ";
    
    //Step 3. store n into the declared var
    cin >> n;
    
    //Step 4. for loop to find the factors of n.
    for(int i = 1; i<=n; ++i) {
        if (n % i == 0) {
            //means that i is the factor of n.
            ++count; //increase count if i is a factor of n
        }
    }// loop ends
    
    //Step 6. Check if n is a prime number or not
    if (count == 2) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
    
    return 0;
}
