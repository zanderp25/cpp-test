/*  Name: File access
    Date: 11-16-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    string temp;
    int num = 2, sum = 0;
    // input fstream
    ifstream file_input;
    // output fstream
    ofstream file_output;

    file_output.open("tempfile.txt");
    for(int i=1;i<=3;i++){
        cout << "Enter a number > "; cin >> num;
        file_output << "My number is \n"
            << num << "\n";
    }
    file_output.close();
    cout << "Saved." << endl;

    file_input.open("tempfile.txt");
    for(int i = 1; i <= 6; i++){
        getline(file_input,temp,'\n');
        if(i%2){
            cout<<temp<<endl;
            sum += stoi(temp);
        }
    }
    cout<<"The sum of these numbers is: "<<sum<<endl;
}