/*  Name: Nested IF statements
    Date: 10-10-2022
*/

#include <iostream>
#include <cmath>
#include "colors.h"

using namespace std;

int main(){
    int a,b;

    cout<<"Enter the first number > ";
    cin>>a;
    cout<<"Enter the second number > ";
    cin>>b;

    if(a>5){
        cout<<GREEN<<"[PASS] "<<RESET;
        if(a%2==0) cout<<"The number is even."<<endl;
        else       cout<<"The number is odd."<<endl;
    // } else if(a<=5 && a>0){
    //     cout<<"ok"<<endl;
    } else {
        cout<<RED<<"[FAIL] "<<RESET;
        if(a>0){
            if(a%2==0) cout<<"The number is even."<<endl;
            else       cout<<"The number is odd."<<endl;
        }    
        else{
            cout<<"Not doing anything. ";
            if(b>100) cout<<"Yay!"<<endl;
            else      cout<<"Sad :("<<endl;
        }
        return 1;
    }
    return 0;
}