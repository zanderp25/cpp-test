/*  Name: Multiple and Combined Assignments Activity
    Date: 10-14-2022

    Quadratic Equation: ax^2+bx+c=0
    ((-b)+/-sqrt(b^2-4*a*c))/(2*a)
    
    a>0 : Parabola opens upward, has a minimum
    a<0 : Parabola opens downward, has a maximum
    a==0: Not a parabola! (Linear)

    discriminant: b^2-4ac

    b^2-4ac>0 : Roots (x-intercepts) are real numbers
    b^2-4ac<0 : Root is real. The curve touches and turns at the x-axis.
    b^2-4ac==0: Roots are imaginary (curve never touches the x axis).

    - Initialize a,b,c to 0
    - Get inputs for a,b,c
    - Print if the parabola is open up/down, doesn't/touch/cross the x-axis
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,discrim;
    a=b=c=0;

    cout<<"The quadratic equation is defined with a, b, and c, where ax^2+bx+c=0."<<endl;
    cout<<"Enter a number for a > "; cin>>a;
    cout<<"Enter a number for b > "; cin>>b;
    cout<<"Enter a number for c > "; cin>>c;

    cout<<"This equation is";

    if(a==0 && b==0 && c==0){
        cout<<" completely useless!"<<endl;
        return 0;
    }

    if(a==0){
        cout<<" a linear equation!"<<endl;
        return 0;
    }

    cout<<" a porabola that opens";
    if(a>0)  cout<<" upward and has a minimum.";
    else     cout<<" downward and has a minimum.";

    discrim = (pow(b,2.0)-(4*a*c));

    if(discrim < 0)       cout<<" It never touches the x-axis.";
    else if(discrim == 0) cout<<" It only touches the x-axis.";
    else                  cout<<" It crosses the x-axis.";

    cout<<endl;
    return 0;
}