/*  Name: Higher Dimensional Arrays
    Date: 11-30-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    // array to be saved to the file
    int my_table[4][4] = {
        { 1, 2, 3, 4},
        { 5, 6, 7, 8},
        { 9,10,11,12},
        {13,14,15,16}
    };

    // output stream
    ofstream output;

    output.open("2darray.tsv");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            output << my_table[i][j] << "\t";
        }
        output << "\n";
    }

    output.close();

    // input stream
    ifstream input;

    input.open("2darray.tsv");

    // array to be read from file
    int input_array[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            input >> input_array[j][i];
        }
    }

    input.close();

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << input_array[i][j] << "\t";
        }
        cout << endl;
    }
}