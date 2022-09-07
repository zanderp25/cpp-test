/* Name: 08-29-2022
Content: Escape sequences, CONST, Scope
*/
#include <iostream>
using namespace std;
int main(){
    bool my_ret;
    my_ret = false;
    int int_ret;
    int_ret=my_ret;
    // escape sequence: \n: newline;\r return
    cout<<"Today \n"<<"is \n"<<"a \n"<<"Monday!"<<endl;
    cout<<"Today \r"<<"is \r"<<"a \r"<<"Monday!"<<"\r"<<endl;
    //escaping characters
    cout<<"Today \\\\"<<endl;
    // output: Me Today: *__*
    cout<<" Me Today: *__*"<<endl;
    // output: Me Tomorrow /*__\*
    cout<<" Me Tomorrow: /*__\\*"<<endl;
    // Declaring with auto
    auto my_var=1;
    auto my_var_a=2;
    my_var=true;
    cout<<" The size of my variable is: "<<sizeof(my_var)<<endl;
    //Use of arithmetic operator
    cout<<" The size of my variable + my_var_a is: "<<sizeof(my_var/my_var_a)<<endl;
    cout<<" The value of my_var_a is: "<<my_var/my_var_a<<endl;
    cout<<" The size of my variable is: "<<sizeof(1.0*my_var/my_var_a)<<endl;
    cout<<" The value of my floated my_var_a is: "<<1.0*my_var/my_var_a<<endl;

    // 08-31-2022
    char my_var_char='a';
    cout<<" The size of character variable is: "<<sizeof(my_var_char)<<endl;
    string my_var_str="cheese";
    cout<<" The size of string variable is: "<<sizeof(my_var_str)<<endl;
    
    // declare a constant
    const float JIMMY = 100.12;
    cout<<" The output of the constant is: "<<JIMMY<<endl;
    cout<<" The output of some math with constant is: "<<JIMMY+8<<endl;
    // JIMMY=JIMMY*8; JIMMY=200.24; // Constants cannot be reassigned
    // const float JIMMY = 200.24; // Variables cannot be redefined
    // cout<<" Scope of variable Tyler"<<Tyler<<endl; // Undeclared variable
    int Tyler=10;
    cout<<" Scope of variable Tyler"<<Tyler<<endl;

    return int_ret;
}