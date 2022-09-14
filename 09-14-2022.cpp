/*  Name:
    Date: 09-14-2022
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
    double a,b;

    cout<<"Enter a number for precision > ";
    cin>>a;
    cout<<"Enter number for value > ";
    cin>>b;

    // note: split lines due to terminator(;)
    cout<<"The adjusted precision for input value: "
        <<setprecision(a)
        <<b
    <<endl;

    unsigned int seed = time(0);
    // Set seed for random number generation
    srand(seed);

    // Random number generation
    cout<<"Printing a random number: "<<rand()<<endl;
    cout<<"The seed is: "<<seed<<endl;

    return 0;
}