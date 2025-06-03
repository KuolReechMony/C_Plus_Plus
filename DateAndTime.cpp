#include <iostream>
#include <string>
#include <ctime>
using namespace std;


// Dates and times >> Uses the ctime package
string Months[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
string Days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

string DateAndTime(int menuChoice = 0)
{
    time_t timestamp = time(&timestamp);
    struct tm datetime = (*localtime(&timestamp));
    string CurrentDate, CurrentTime;
    CurrentDate = Days[datetime.tm_wday] + " " + to_string(datetime.tm_mday) + "-" + Months[datetime.tm_mon] + "-" + to_string(datetime.tm_year + 1900);
    CurrentTime = to_string(datetime.tm_hour) + ":" + to_string(datetime.tm_min);
    switch (menuChoice)
    {
        case 1: // Only returns the current time
            return CurrentTime;
        case 2: // Only returns the current date
            return CurrentDate;
        case 0: // Return current time and current date
        default:
            return CurrentTime, CurrentDate; 
        
    }
}

int TimeModule(int menuChoice = 0)
{
    time_t timestamp = time(&timestamp);
    struct tm datetime = (*localtime(&timestamp));
    switch (menuChoice)
    {
        case 0: // Returns the date
            return datetime.tm_hour, datetime.tm_min;
        case 1: // Returns the time
            return datetime.tm_mday, datetime.tm_mon, datetime.tm_year;
    }
}



int main()
{
    return 0;
}


