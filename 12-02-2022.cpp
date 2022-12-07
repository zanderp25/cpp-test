/*  Name: Functions
    Date: 12-02-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// function definition
// <return datatype> function_name(arguments, parameters) {}
int meow(string str){
    // function body
    cout << "ニャア〜" << endl;

    cout << "猫は「" << str << "」と言いました。" << endl;

    return 23;
}

double woof(){
    cout << "¡Guau!" << endl;

    return 23e-5;
}

bool moo(){
    cout << "Moooooooooooo!" << endl;

    return true;
}

int main(){
    int meow_var;
    double woof_var;
    bool moo_var;

    int sum_var;

    // string quote;
    // cout << "What did the cat say? > ";
    // readLine

    // function call
    meow_var = meow("hehe");
    woof_var = woof();
    moo_var = moo();

    cout << "The cat has meowed " << meow_var << " times." << endl;
    cout << "The dog will bark " << woof_var << " times." << endl;
    cout << "The cow has mooed: " << (moo_var ? "true": "false") << endl;

    sum_var = meow_var + woof_var + moo_var;

    cout << "\nSum of returned values:" << sum_var << endl;
}