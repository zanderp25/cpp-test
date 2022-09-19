/*  Name: Relational Operators
    Date: 09-16-2022
    aka Logical operators: >, <, >=, <=, !=, !, ==
*/
#include <iostream>
using namespace std;

int main(){
    // Variable Declaration
    bool my_check;
    // Variable Initialization
    int x=96, y=34, o;
    // Relational expression
    my_check = x > y;
    cout<<"The result of x > y is ";
    if(my_check) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    // Get input value
    cout<<"Type a number > ";
    cin>>o;

    if(!o){
        cout<<"Where's the number?"<<endl;
    } else if (o == 69){
        cout<<"nice"<<endl;
    }

    // Check if number is odd/even
    if(o%2==1) cout<<"This number is odd"<<endl;
    if(o%2==0) cout<<"This number is even"<<endl;
    // if (o%2==1) {
    //     cout<<"This number is odd"<<endl;
    // } else {
    //     cout<<"This number is even"<<endl;
    // }

    return 0;
}