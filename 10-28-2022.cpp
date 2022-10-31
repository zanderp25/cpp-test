/*  Name: String comparison using ASCII
    Date: 10-28-2022
    American Standard for Information Interchange

    Numbers:
    0-9: 48-57

    Letters:
    A-Z: 65-90
    a-z: 97-122

    Special Characters:
    Blank space: 32
    Period: 46

    Activity: Get three input characters. If the sum of the chars is even, print a statement.
    Otherwise, print "Happy Weekend!".
    You need a flag and a conditional operator
*/

#include <iostream>
using namespace std;

int main(){
    // intro();

    char char1, char2, char3;
    bool flag;

    cout<<"Input three characters > ";
    cin>>char1>>char2>>char3;

    (char1+char2+char3) % 2 == 0? flag = true: flag = false;

    cout<<char1+char2+char3<<endl;

    if(flag) cout<<"These numbers are nice and even."<<endl;
    else     cout<<"Happy Weekend! (The numbers are odd.)"<<endl;
}

int intro(){
    char input_char;

    cout<<"Enter a character > ";
    cin>>input_char;

    if(input_char<=57)      cout<<"You entered a digit, space, period, or something else."<<endl;
    else if(input_char>150) cout<<"You entered a character I cannot code in ASCII."<<endl;
    else                    cout<<"Done with ASCII."<<endl;

    cout<<"ASCII for @ symbol is "<< static_cast <int> ('@')<<endl;

    return 0;
}