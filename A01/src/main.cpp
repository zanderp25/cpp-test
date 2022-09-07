#include <iostream>
using namespace std;

int main(){
    cout << "Hello World" << endl;

    //variable declaration
    int distance;
    float velocity;
    int time;

    //variable initialization
    char name = 'E';
    // char myName = 'Zander';
    string myStr = "Zander";

    //print name and myName with \t escape sequence
    cout << name << "\t" << myStr << endl;

    bool My_Boole;
    My_Boole = true;
    cout << "The valu of My_Boole: " << My_Boole << endl;

    //compute velocity
    distance = 10;
    time = 4;
    velocity = distance / time;
    cout << "Computed Velocity: " << velocity << endl;

    //compute velocity
    distance = 10.0;
    time = 4;
    velocity = distance / time;
    cout << "Computed Velocity: " << velocity << endl;

    return 0;
}