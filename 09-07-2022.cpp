/*  Name: Modulo Arithmetic
    Get two inputs (both integers)
    first integer must be 12 digits long
    second integer must be 3 digits long
    divide the first integer by the second and multiply the remainder by 1984
    save the result to a variable, K
    Get another input from console and call it R. find R% of K and print.
*/

#include <iostream>
#include "colors.h"
using namespace std;

int main(){
    // use long to prevent overflow
    long a, K; int b; double R;
    cout<<GREEN<<"Enter the first number (12 digits) > "<<RESET;
    cin>>a;
    cout<<GREEN<<"Enter the second number (3 digits) > "<<RESET;
    cin>>b;
    cout<<MAGENTA<<"Got "<<CYAN<<a<<MAGENTA<<" and "<<CYAN<<b<<RESET<<endl;
    // use modulus to find remainder
    K = (a % b) * 1984;
    cout<<MAGENTA<<"Calculation 1 result: "<<K<<RESET<<endl;
    cout<<GREEN<<"Enter a percent to multiply > "<<RESET;
    cin>>R;
    // find the percent by multiplying
    cout<<MAGENTA<<R<<"% of the previous result is: "<<CYAN<<(R/100)*K<<RESET<<endl;
    return 0;
}