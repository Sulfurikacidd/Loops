//
//  main.cpp
//  factorial_n
//
//  Created by Muhammad Talal on 2022-06-20.
//
// This program calculates the factorial of an n (user input) integer

#include <iostream>
using namespace std;

int main() {
    //write your code here..
    
    //Step 2. Declare var to store n. Also declate and init factorial.
    int n;
    int factorial = 1; //if you start factorial with 0 the entire result will be 0 !!
    
    //Step 1. Ask for integer n.
    cout << "Enter integer n: ";
    
    //Step 3. Read the value of n into the var.
    cin >> n;
    
    //Step 4. Calculate factorial using for loop -  we know the number of iterations i.e n
    for (int i = 1; i<=n; ++i) {
        factorial *= i; /// To see how to print every step of the process consult "add_upto_n_integers"
    }
    //loop ends
    
    //Step 5. Print the value of the factorial.
    cout << "factorial of " << n << " is: " << factorial << endl;
    
    
    return 0;
}
