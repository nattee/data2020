#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hour, minute, totalMinutePass;
    int hourPass, minPass, hourTime, minTime;

    cin >> hour;
    cin >> minute;
    cin >> totalMinutePass;

    hourPass = totalMinutePass / 60;
    minPass = totalMinutePass % 60;

    minTime = minute + minPass;
    hourPass = hourPass + (minTime/60);
    minTime = minTime % 60;
    hourTime = (hour + hourPass)%24;

    if (hourTime<10) {
        cout << "0";
    }
    cout << hourTime << " ";
    if(minTime<10){
        cout << "0";
    }

    cout << minTime << endl;
   // cout << (hourTime<10)? "0":"" << hourTime << " " << (minTime<10)? "0":"" << minTime << endl;


    return 0;
}