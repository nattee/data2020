#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour;
    int minute;
    int x;
    string outputhour;
    string outputminute;
    cin >> hour;
    cin >> minute;
    cin >> x;
    if (minute + x < 60) minute += x;
    while (minute + x >= 60) {
        hour++;
        if (hour >= 24) hour -= 24;
        minute = minute + x - 60;
    }
    outputhour = to_string(hour);
    outputminute = to_string(minute);
    while (outputhour.length() < 2) {
        outputhour = "0" + outputhour;
    }
    while (outputminute.length() < 2) {
        outputminute = "0" + outputminute;
    }
    cout << outputhour << " " << outputminute;
    return 0;
}