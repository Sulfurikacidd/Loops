//
//  main.cpp
//  armstrong_number
//
//  Created by Muhammad Talal on 2022-06-24.
//
// Armstrong number: n == sum of cube of digits.

#include <iostream>
using namespace std;

int main() {
    //write your code here..
 
    //Step 2. declare vars that you need for the program.
    int n;
    int m = 0; //copy of n
    int sum = 0; //store the sum of cube of all the digits of n
    int dig; //a single digit of n
    
    
    //Step 1. Ask for n.
    cout << "Enter integer n: ";
    
    //Step 3. Store n.
    cin >> n;
    
    //Step 4. copy n into m (RHS gets stored into LHS)
    m = n;
    
    //Step 5. use while loop to get to the digits of n
    while (n > 0) {
        dig = n % 10; //take out the last digit and store it in dig
        sum += (dig*dig*dig); //take the cube of digit, add it into sum and store it back into sum
        n = n/10; //remove the last digit of n to repeat the process
    } //loop end
    
    //Step 6. check if the number is an armstrong number or not
    cout << "Sum: "<< sum << endl;
    if(sum == m) {
        cout << m << " is an Armstrong number" << endl;
    } else {
        cout << m << " is NOT an Armstrong number" << endl;
    }
    
    
    return 0;
}
