#include <iostream>
#include "string.h"
using namespace std;

enum Day {Sun, Mon, Tues, Wendney, Thur, Fri, Satur};
 enum Weather {Sunny, Rainy, Cloudy,Foggy};
struct DayInfo
{
    Day today;
    Weather the_wea;
   
};

bool canTravel(DayInfo &day) {
    // 如果是周末且天气晴朗，返回 true，否则返回 false
    if ((day.today == Sun || day.today == Satur) && day.the_wea == Sunny) {
        return true;
    } else {
        return false;
    }
}



int main()
{   

    DayInfo theDay;
    theDay.today = Sun;
    theDay.the_wea = Sunny;
    cout << (canTravel(theDay) ? "Can travel" : "Cannot travel") << endl;
    return 0;

}