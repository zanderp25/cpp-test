/*
    Name: If-else statement
    Date: 09-19-2022
*/

#include <iostream>
using namespace std;

int main(){
    // Variable initialization with multiple assignments
    double var_a, var_b, var_c;
    var_a=var_b=var_c=2.0;
    int mod_val;

    cout<<"Input a number > ";
    cin>>var_c;

    // Type Casting: can promote or demote data types. Level: double > int
    mod_val = static_cast<int>(var_c)%2;
    
    
    cout<<"This number is ";
    if(mod_val==0) cout<<"'even'."<<endl;
    else cout<<"'odd'."<<endl;

    return 0;
}