/*  Name: Wind speed calc
    Date: 09-26-2022
    Activity: 
        - Wind > 110 mph: Panic!
        - Wind > 50 mph: Don't panic!
        - Otherwise: False panic...
*/

#include <iostream>
using namespace std;

int main(){
    int wind_speed;
    cout<<"Enter wind speed in mph > ";
    cin>>wind_speed;

    if(wind_speed > 110){
        cout<<"🚨🚨 PANIC!!!! 🚨🚨"<<endl;
        if(wind_speed > 150)    cout<<"SO SCREWED!!!1!"<<endl;
        else                    cout<<"GETTING CLOSER TO BEING SCREWED!!"<<endl;
    }
    else if(wind_speed > 50)    cout<<"Don't panic!"<<endl;
    else                        cout<<"False panic.. :D"<<endl;

    return 0;
}