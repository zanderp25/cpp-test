/*  Name: 
    Date: 10-19-2022'
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string check_flag="";
    int number;

    cout<<"Input a number with three or more digits > ";
    cin>>number;

    number % 2 ? check_flag="odd": check_flag="even";

    cout<<check_flag<<endl;

    if(number % 2) check_flag = "odd";
    else           check_flag = "even";

    cout<<check_flag<<endl;

    check_flag=="even"?cout<<"yay"<<endl:cout<<"aww"<<endl;

    return 0;
}