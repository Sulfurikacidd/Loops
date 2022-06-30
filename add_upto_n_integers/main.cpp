//
//  main.cpp
//  add_upto_n_integers
//
//  Created by Muhammad Talal on 2022-06-20.
//
// This progrma add upto the n (user input) intergers i.e if n is 3 -- 1 + 2 + 3 = 6.

#include <iostream>
using namespace std;

int sum_func(int sum, int i) {
    return sum+=i;
}

int main() {
    // write your program here..
    
    //Step 2. Declare var to store n and a var to store sum.
    int n;
    int sum = 0; // init the sum value to 0.
    
    //Step 1. Ask for n
    cout << "Enter an integer n: ";
    
    
    //Step 3. Read n into the var
    cin >> n;
    
    //Step 4. Use for loop to find the sum -- we know the number of iterations
    for (int i = 1; i<=n; ++i) {
        cout << sum << " + " << i << " = ";  
        sum+=i; // in each iteration value of sum is added to itself
        cout << sum << endl;
    }
    
    //Step 5. print the value of the sum.
    cout << "\nTotal is: " << sum << endl;
    
    return 0;
    
}
