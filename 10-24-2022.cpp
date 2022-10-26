/*  Name: Binary flags
    Date: 10-19-2022'

    Simple activity: 
    1. get a three digit (or higher) number
    2. determine if the third digit (from the right) is even
    3. use a flag to print a statement of your liking if the third digit is even
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    bool check_flag=true;
    int number;

    if(check_flag)  cout<<"Read class announcements regularly."<<endl;
    else            cout<<"Good job keeping up with the class. "<<endl;

    cout<<endl<<"Input a number with three or more digits > ";
    cin>>number;

    number /= 100;

    if (number % 2 == 0) {
        if(check_flag)  cout<<"The third digit from the right is even."<<endl;
        else            cout<<"The quick brown fox jumped over the lazy dog."<<endl;
    } else {
        cout<<"The third digit from the right is not even."<<endl;
    }
    

    return 0;
}