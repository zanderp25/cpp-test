/*  Name: Nested for loops
    Date: 11-14-2022

    [
        1,2,1
        2,4,8
        8,2,4
    ]

    indices: the position in the table
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int loop_result;
    for (int i=1; i<=16; i++){
        for (int j=1; j<=8; j++){
            loop_result = i * j;
            cout << "- " << i << " * " << j << " = " << loop_result <<endl;
        }
    }
}