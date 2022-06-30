//
//  main.cpp
//  perfect_number
//
//  Created by Muhammad Talal on 2022-06-22.
//
// This program finds out if the int n (user entered) is a perfect number or not.
// By defination a perfect number is a number whose sum of factors is equal to 2*n (number).

#include <iostream>
using namespace std;

int main () {
    //write code here ..
    
    //Step 2. declare a var to store n.
    int n;
    
    //step 5. declare and init a var called sum to hold the sum of the factors.
    int sum = 0;
    
    //Step 1. Ask for an int n.
    cout << "Enter an int n: ";
    
    //Step 3. store n into the declared var
    cin >> n;
    
    //Step 4. for loop to find the factors of n.
    for(int i = 1; i<=n; ++i) {
        if (n%i == 0) { // if n divided by i has no remainder then i is the factor of n
            //i is the factor
            sum = sum + i; //sum of all the factors
        }
    } //loop end
    
    //Step 6. Check if n is a perfect number or not
    if (sum == n*2) {
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }
    
    return 0;
}
