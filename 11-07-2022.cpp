/*  Name: while loop
    Date: 11-07-2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int itr = 0;
    double a = 2, b = 4;

    // while loop
    // while <condition>

    // while(static_cast<int>(a + b) % 2 == 0){
    //     cout<<"あ";
    //     cout.flush();
    //     a--; b++;
    //     // loops infinitely (will probably crash if the number gets too big/small)
    // }

    while(itr < 8) cout << "Crash me! " << ++itr << endl;
    // loops 8 times

    // next: do/while and for loops

    return 0;
}