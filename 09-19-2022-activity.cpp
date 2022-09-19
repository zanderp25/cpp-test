/*
    Name: If-else activity
    Date: 09-19-2022
    Activity:
        1. Get a double input
        2. Test if double is >= -1 and <= 1
        3. If condition passes, find acos, otherwise, exit
        4. Print "done inverting"
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double i;

    cout<<"Input a number to calculate the inverse cosine > ";
    cin>>i;
    
    if(fabs(i) <= 1) {
    // if(i >= -1 && i <= 1) {
        cout<<"The inverse cosine of this number is "
            <<acos(i)
            <<" radians."
        <<endl;
    } else {
        cerr<<"The number is not in the domain of the function."<<endl;
        return 1;
    }
    cout<<"Done inverting."<<endl;
    return 0;
}