//
//  main.cpp
//  Print_n_ints_while
//
//  Created by Muhammad Talal on 2022-06-19.
//
// Program to print n (user input) numbers of ints.

#include <iostream>
using namespace std;

/*
int main() {
    
    //write your program here..
    
    //Step 2. Declare a var to store n
    int n;
    int i = 1;
    
    //Step 1. enter an integer.
    cout << "Enter n integer: ";
    
    //Step 3. Read n.
    cin >> n;
    
    //Step 4. While loop to print integers till n
    while (i <= n){
        cout << i << " "; //you cannot print i in the first iteration until it has some value.
        ++i;
    }
    
    cout << endl; return 0;
}
*/

///Since we know the number of iterations for this loop we better use For Loop

int main () {
    
    //write your program here.
    
    //Step 2. Declare vars to store n.
    int n;
    
    //Step 1. Enter n (integer value).
    cout << "Enter n: ";
    
    //Step 3. Read n into var
    cin >> n;
    
    //Step 4. For loop to print n num of integers
    for (int i = 1; i <= n; i++) { // if there is no = sign in condition the last number won't print or basically the last iteration won't run
        cout << i << " ";
    }
    
    cout << endl; return 0;
}
