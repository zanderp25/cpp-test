/* Name: 08-31-2022
Content: cin function
*/
#include <iostream>
using namespace std;

const string RESET = "\033[0m";
const string MAGENTA = "\033[35m";
const string YELLOW = "\033[33m";
const string GREEN = "\033[32m";
const string CYAN = "\033[36m";

int main(){
    int a; int b; int c;
    cout<<GREEN<<"Enter a value for variable \"a\": "<<RESET;
    cin>>a;
    cout<<GREEN<<"Enter a value for variable \"b\": "<<RESET;
    cin>>b;
    // Arithmatic operators - Binary operators
    cout<<YELLOW<<"The "<<MAGENTA<<"sum"<<YELLOW<<" of 'a' and 'b' is: "<<CYAN<<a+b<<endl;
    cout<<YELLOW<<"The "<<MAGENTA<<"difference"<<YELLOW<<" of 'a' and 'b' is: "<<CYAN<<a-b<<endl;
    cout<<YELLOW<<"The "<<MAGENTA<<"product"<<YELLOW<<" of 'a' and 'b' is: "<<CYAN<<a*b<<endl;
    cout<<YELLOW<<"The "<<MAGENTA<<"quotient"<<YELLOW<<" of 'a' and 'b' is: "<<CYAN<<a/b<<endl;
    cout<<YELLOW<<"The "<<MAGENTA<<"modulo"<<YELLOW<<" of 'a' and 'b' is: "<<CYAN<<a%b<<endl;
    cout<<RESET;
    // Arithmatic operators - Unary operators
    cout<<YELLOW<<"The "<<MAGENTA<<"negation"<<YELLOW<<" of 'a' is: "<<-a<<endl;
    cout<<RESET;
    // Modulo 2 test
    cout<<YELLOW<<"The variable 'a' is "<<CYAN<<(a%2==0?"even":"odd")<<endl;
    // Modulo 10
    cout<<YELLOW<<"The "<<MAGENTA<<"modulo-10"<<YELLOW<<" of 'b' is: "<<CYAN<<b%10<<endl;
    // Modulo 100
    cout<<YELLOW<<"The "<<MAGENTA<<"modulo-100"<<YELLOW<<" of 'b' is: "<<CYAN<<b%100<<endl;
    return 0;
}