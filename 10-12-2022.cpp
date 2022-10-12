/*  Name: Logical operators
    Date: 10-12-2022

    AND     (&&) - (cond1) and (cond2) - result is true if both are true
    OR      (||) - (cond1) and (cond2) - result is true if one is true
    NOT     (!)  - negate (cond1)
    EQUALS  (==) - tests for equality
    NOT EQU (!=) - tests for inequality
*/

#include <iostream>
using namespace std;

int main(){
    int a,b; double c;

    cout<<"Enter the first number > ";  cin>>a;
    cout<<"Enter the second number > "; cin>>b;

    if(a%2==0 && b%2==0){
        cout<<"Both numbers are even."<<endl;
        // double c;
        cout<<"Enter the third number > "; cin>>c;
        c=a*b;
        cout<<"My final answer is "<<c<<endl;
    } else if(a%2==1 && b%2==1){
        cout<<"Odd."<<endl;
    } else {
        // !(p and q) => !p or !q (De Morgan's laws)
        cout<<"Both numbers are NOT even."<<endl;
    }

    return 0;
}