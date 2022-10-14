/*  Name: Multiple and Combined Assignments
    Date: 10-14-2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a=75; int b,c;

    // Multiple Assignments
    b = c = a;

    bool d;

    c=a=d;

    // Combined assignment
    c+=6;

    cout<<"The output of b is: "<<b<<endl;
    cout<<"The output of c is: "<<c<<endl;

    return 0;
}