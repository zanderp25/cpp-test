/* Name: Arithmetic Operators
Date: 09-12-2022 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double p, q, r;
    cout<<"Input a number for variable p > ";
    cin>>p;
    cout<<"Input a number for variable q > ";
    cin>>q;
    // cout<<"The remainder of variable p divided by variable q is "<<p%q<<endl;
    // the remainder has to be an integer, so it is impossible to get one from a floating point number
    // Use fmod() instead
    r=fmod(p,q);
    cout<<"The remainder of variable p divided by variable q is "<<r<<endl;
    
    // inverse trigonometric functions: inverse is not the same as reciprocal
    // inverse sine
    cout<<"The inverse sine of the remainder is "<<asin(r)<<endl;
    // answer in degrees
    cout<<"The inverse sine in degrees is "<<asin(p/q)*(180/M_PI)<<endl;

    return 0;
}