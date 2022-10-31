/*  Name: Switch-Case operator/statement
    Date: 10-31-2022
*/

#include <iostream>
using namespace std;

int main(){
    char input_char;
    string input;

    cout<<"Enter a character > ";
    cin>>input_char;

    switch (input_char){
        case 'A':
            cout<<"Computers are cool!"<<endl;
            break;
        case '2':
            cout<<"Happy Halloween!"<<endl;
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