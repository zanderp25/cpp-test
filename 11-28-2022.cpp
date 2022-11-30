/*  Name: File Access using Arrays
    Date: 11-28-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    const int ARR_SIZE = 16;
    // Array Declaration
    int read_array[ARR_SIZE];

    // Array Initialization
    // int write_array[ARR_SIZE-8] = {1,2,3,4,5,6,7,8};
    int write_array[] = {1,2,3,4,5,6,7,8};

    // file streams
    ifstream file_in;
    ofstream file_out;

    file_out.open("ファイル.txt");
    for(int i=0; i < ARR_SIZE-8; i++){
        file_out << write_array[i] << endl;
    }
    file_out.close();

    file_in.open("ファイル.txt");
    // for(int i=0; i < ARR_SIZE; i++){
    for(int i=0; i < ARR_SIZE-8; i++){
        file_in >> read_array[i];
    }
    file_in.close();

    // for(int i=0; i < ARR_SIZE; i++){
    for(int i=0; i < ARR_SIZE-8; i++){
        cout << i << ": " << read_array[i] << endl;
    }
}