/* Name: Mathematical Functions
Date: 09-09-2022 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double w, x, y; int a, b, c;

    // Exponentiation
    cout<<"Base > ";
    cin>>a;
    cout<<"Exponent > ";
    cin>>b;
    c=pow(a,b);
    cout<<"The answer is "<<c<<endl;

    // Trigonometric Functions
    cout<<"Enter the first trig argument > ";
    cin>>x;
    cout<<"The result of unit identity is "<<
        pow(sin(x),2)+pow(cos(x),2)
    <<endl;
    cout<<"The sine of the first trig argument is "<<
        sin(x*M_PI/180)
    <<endl;

    // Logarithm
    cout<<"The logarithm of the natural number e (using M_E) is "<<
        log(M_E) // defined value
    <<endl;
    cout<<"The logarithm of the natural number e (using exp(1)) is "<<
        log(exp(1)) //function
    <<endl;
    cout<<"The base 10 logarithm of the 10 is "<<
        log10(10) //function
    <<endl;

    return 0;
}