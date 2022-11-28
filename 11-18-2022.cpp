/*  Name: File access with while
    Date: 11-18-2022 - 11-21-2022
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    ifstream file_i;
    ofstream file_o;
    char a;

    file_o.open("EOF_Try.txt");
    for(int i=1;i<=4;i++){
        cout<<"> ";
        cin>>a;
        file_o.put(a);
        file_o.put('\n');
    }
    file_o.close();

    // Read input file stream

    file_i.open("EOF_Try.txt");
    
    while(file_i >> a){
        cout<<"My number from the file is: " << a << endl;
    }
    file_i.close();
}