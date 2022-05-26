#include "Date.hpp"

// getter functions
void Date::get_day(){
    return day;
}

void Date::get_month(){
    return month;
}

void Date::get_appointed(int index){
    return arr[index]
}

// setter functions
void Date::set_day(){
    int day = day;
}

void Date::set_month(){
    int month = month;
}

void Date::set_appointed(int index){
    arr[index] = true;
}

// no appnt allowed on a holiday
// Holidays: Victoria Day (May 23), Canada Day (July 1), BC Day (Aug 1)
bool isHoliday(){

}


