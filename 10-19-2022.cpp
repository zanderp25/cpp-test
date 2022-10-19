/*  Name: Getting input
    Date: 10-19-2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,d;
    string myString;
    // string myString2;
    // string myString3;

    // cout<<"Enter the values of the four numbers: "<<endl;
    // // cin>>a>>b>>c>>d;
    // cout<<"a > "; cin>>a;
    // cout<<"b > "; cin>>b;
    // cout<<"c > "; cin>>c;
    // cout<<"d > "; cin>>d;

    // cout
    //     << "The sum of the four numbers is "
    //     << a+b+c+d
    // <<endl;

    // cout<<"Enter a simple sentence > "; cin>>myString>>myString2>>myString3;
    // cout
    //     << "The simple sentence you entered was: "
    //     << myString << " "
    //     << myString2 << " "
    //     << myString3
    // <<endl;

    cout<<"Enter a creative sentence > ";
    getline(cin, myString);
    cout<<"The creative sentence you created is: "<<myString<<endl;

    return 0;
}