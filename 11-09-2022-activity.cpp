/*  Name: do-while loop
    Date: 11-07-2022

    1. Initialize a=1 and b=10
    2. print "Yay" 10 times
    3. use modulo operator
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 1, b = 10;

    do{
        cout << a << " Yay" << endl;
        a++;
    } while ((a - 1) % b);

    return 0;
}