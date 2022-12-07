/*  Name: Overloading, Passing by reference, passing arrays
    Date: 12-07-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// overloading functions
int argentina(int, int, int, double);

// parameter initialization
void argentina(int fifa=0, int messi=1, int soccer=88);

// passing arrays
int argentina(int [], int[], int, int);

// pass by reference
void argentine(int &);

int main(){
    int ref_val=23;
    argentina(1, 2, 3);
    argentina(1, 2, 3, 4.5);
    argentina();
    argentina(1e9);
    int array[] = {1, 2, 3, 4};
    int arrayb[] = {5, 6, 7, 8};
    cout << argentina(array, arrayb, 4, 4) << endl;

    cout << ref_val << " to ";
    argentine(ref_val);
    cout << ref_val << endl;
}

int argentina(int a, int b, int c, double d){
    cout << "hehe" << endl;
    return 0;
}

void argentina(int fifa, int messi, int soccer){
    cout << "Don't cry for me, Argentina!"<<endl;
    cout << soccer * messi * fifa <<endl;
}

int argentina(int array[], int beret[], int size_a, int size_b){
    cout << "no"<<endl;
    int prod=1;
    for(int i=0; i < size_a; i++){
        prod*=array[i];
    }
    return prod;
}

void argentine(int &arg){
    arg = 3;
}