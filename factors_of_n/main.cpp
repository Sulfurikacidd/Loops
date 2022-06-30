//
//  main.cpp
//  factors_of_n
//
//  Created by Muhammad Talal on 2022-06-20.
//
// This program prints out the factor of an integer n (user input)

#include <iostream>
using namespace std;

int main() {
    //write your program here..
    
    //Step 2. Declare a var to store n
    int n;
    
    //Step 1. Ask for integer n.
    cout << "Enter an interger n: ";
    
    //Step 3. Read n into the var
    cin >> n;
    
    //Step 5. Use for loop to get the factors of n
    for(int i = 1; i<=n; ++i) {
        if (n%i == 0) { //if n divides by i and the remainder is 0 then i is the factor of n
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    
    return 0;
}
