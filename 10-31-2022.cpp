/*  Name: Switch-Case operator/statement
    Date: 10-31-2022 - 11-2-2022
*/

#include <iostream>
using namespace std;

int main(){
    /*  1. get integer input
        2. if input is 2, set flag_check to true otherwise false
            input to switch expression is flag_check
        3. create two case expressions. one for true, another for false
        4. use cout inside case expression to print an output to console
    */

    int num;
    bool flag_check;

    cout<<"Pick a number > "; cin>>num;
    flag_check = (num == 2);

    switch (static_cast<int>(flag_check)){
    case true:
        cout<<"Correct! 2 is the magic number!"<<endl;
        break;
    case false:
        cout<<"Nope! That's not the right number."<<endl;
        break;
    // case 0:
    //     cout<<"No"<<endl;
    //     break;
    // case 1:
    //     cout<<"Yes"<<endl;
    //     break;
    default:
        cout<<"How did we get here?"<<endl;
        break;
    }
}

int intro(){
    char input_char;
    int integer;
    // string input;

    // // using char inputs
    // cout<<"Enter a character > ";
    // cin>>input_char;
    // switch (input_char){

    // using integer inputs
    cout<<"Enter an option: 1/2/3 > ";
    cin>>integer;
    switch (integer){
        case 'A':
            cout<<"Computers are cool!"<<endl;
            break;
        case '2':
            cout<<"Happy Halloween!"<<endl;
            break;
        case 1:
            cout<<"Don't do the homework late."<<endl;
            break;
        case 2:
            cout<<"I like to surf."<<endl;
            break;
        case 3:
            cout<<"(!)Don't read the book."<<endl;
            break;
        default:
            cout<<"Not an option."<<endl;
            break;
    }

    // // This doesn't work because Switch doesn't like strings
    // cout<<"Are you celebrating for Halloween? > ";
    // cin>>input_char;

    // switch (input){
    //     case "yes":
    //         cout<<"I am going to a Halloween party this evening."<<endl;
    //         break;
    //     case "no":
    //         cout<<"I am not going to a Halloween party."<<endl;
    //         break;
    //     default:
    //         cout<<"It depends!"<<endl;
    //         break;
    // }


    return 0;
}