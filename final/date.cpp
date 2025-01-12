#include <iostream>
using namespace std;

bool isLeap(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int DaysInMonth(int month, int year)
{
    int daysMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isLeap(year) && month == 2)
    {
        return 29;
    }
    return daysMonth[month - 1];
}

int main(){

    int day, month, year;
    cin >> day >> month >> year;

    day++;

    if(day > DaysInMonth(month, year)) 
    {
        day = 1;
        month++;
    }

    if(month > 12)
    {
        month = 1;
        year++;
    }

    cout << date << " " << month << " " << year;


    return 0;
}