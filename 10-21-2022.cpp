/*  Name: Getting input with getline, cont.
    Date: 10-19-2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string myString;
    char delim;

    cout<<"Enter a character to use as a delimiter > "; cin>>delim;
    
    cout<<"Enter a creative sentence > ";
    // getline(cin, myString,'\t');
    getline(cin, myString, delim);
    cout<<"The creative sentence you created is: "<<myString<<endl;

    return 0;
}