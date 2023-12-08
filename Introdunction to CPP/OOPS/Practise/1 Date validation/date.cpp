#include <bits/stdc++.h>
using namespace std;

// checking valid date
bool dateCheck(int date)
{
    // check for date
    if (date >= 1 && date <= 31)
    {
        return true;
    }
    return false;
}

// checking valid month
bool monthCheck(int month)
{
    if (month >= 1 && month <= 12)
    {
        return true;
    }
    return false;
}

// check for leap year
bool checkIsLeapYear(int year, int date)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (date > 29)
        {
            return false;
        }
    }
    else
    {
        if (date > 28)
        {
            return false;
        }
    }
    return true;
}

// specific month checking having 30 days
bool checkSpecMonth(int month, int date)
{
    if ((month == 4 || month == 6 || month == 9 || month == 11) && date > 30)
    {
        return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int date, month, year;
    cin >> date >> month >> year;

    // checking all conditions to check validation
    if (dateCheck(date) && monthCheck(month) && checkIsLeapYear(year, date) && checkSpecMonth(month, date))
    {
        cout << date << "/" << month << "/" << year << "\n"
             << "This date is valid." << endl;
    }
    else
    {
        cout << date << "/" << month << "/" << year << "\n"
             << "This date is Invalid." << endl;
    }

    return 0;
}
