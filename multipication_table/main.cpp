//
//  main.cpp
//  multipication_table
//
//  Created by Muhammad Talal on 2022-06-20.
//
// This program prints the multipication table till 10 of the number n (user input)

#include <iostream>
using namespace std;

int main() {
    
    //write your code here ..
    
    //Step 2. Declare var to store n, declare result to store the result.
    int n;
//    int result; // do i need the value of result after the loop - No !!
    
    //Step 1. Ask for int n.
    cout << "Enter n integer: ";
    
    //Step 3. Read n into the var
    cin >> n;
    
    //Step 4. Print the multipication table using for loop -- we know the number of iterations i.e 10
    for (int i = 1; i<=10; ++i) {
//        result = n * i; // I can just do n * i instead of storing the result and wasting memory --  i don't need the value of result after the loop.
        cout << n << " x " << i << " = " << n * i << endl;
    } //loop ends here.
    
    return 0;
    
}
