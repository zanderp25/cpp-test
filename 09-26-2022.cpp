/*  Name: if, else if, else statements
    Date: 09-26-2022
*/

#include <iostream>
using namespace std;

int main(){
    int my_input;
    cout<<"Enter a number > ";
    cin>>my_input;

    if(my_input==0){
        // return 1;
        cout<<"Zero is even... Google says so."<<endl;
    } else if(my_input%2==0) {
        cout<<"This number is even."<<endl;
    } else {
        cout<<"This number is odd."<<endl;
    }

    return 0;
}