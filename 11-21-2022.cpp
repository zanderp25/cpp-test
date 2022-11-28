/*  Name: Arrays
    Date: 11-21-2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int myint;
    // array variable type
    int myarr[8];

    for (int k=0; k<=7; k++){
        cout << "Enter a number > ";
        cin >> myint;
        myarr[k] = myint;
    }

    // for (int k=0; k<=7; k++){
    //     cout << "The " << k << " of the array is " << myarr[k] << endl;
    // }

    cout << "My array is " << myarr << endl << "[";
    for(int k=0;k<7;k++){
        cout << myarr[k] << ",";
    }
    cout << "\b]" << endl;

    return 0;
}