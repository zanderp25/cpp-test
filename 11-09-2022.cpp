/*  Name: for loop
    Date: 11-07-2022 - 11-14-2022

    for: counter loop
    while, do-while: conditional loops
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // for (int i = 8; i >= 1; i--){
    //     cout << "¡El viernes es feriado! " << i <<endl;
    // }

    // // internal initialization
    // for (int i = 8; i >= 1; i--){
    //     cout << "¡No te vayas a clase el viernes! " << i <<endl;
    // }

    // // external initialization
    // int iterator = 0;
    // for ( ; iterator <= 10; iterator++) cout << "Don't come to class on Friday! " << iterator <<endl;

    // 11-14-2022

    // within loop iteration
    int itr2=2;
    for ( ; ; ){
        cout << "Come to class on Friday " << itr2 <<endl;
        itr2++;
        if (!(itr2 <= 10)) break;
    }

    return 0;
}