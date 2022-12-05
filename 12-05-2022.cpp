/*  Name: prototypes
    Date: 11-30-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// Function prototypes

void fun();
string happy_function(bool);
double excited_function(int, int);

int main(){
    int excited;

    fun();
    cout << happy_function(true) << endl;
    excited = excited_function(2, 3);

    if(excited >= 2){
        cout << "doubly excited" << endl;
    } else if (excited == 1){
        cout << "just excited" << endl;
    } else {
        cout << "not excited at all" << endl;
    }
}

// fun
void fun(){
    cout << "This is a FUNction." << endl;
}

// happy
string happy_function(bool happiness){
    return happiness? "Happy :D": "Not happy. :c";
}

// excited
double excited_function(int reason_1, int reason_2){
    return reason_2/reason_1;
}