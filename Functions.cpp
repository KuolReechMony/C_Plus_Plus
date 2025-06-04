#include <iostream>
#include <string>
#include <ctime>
#include <utility> // Make pair function: Return multiple arguments
#include <vector>
using namespace std;


// // Dates and times >> Uses the ctime package
// string Months[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
// string Days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

// string DateAndTime(int menuChoice = 0)
// {
//     time_t timestamp = time(&timestamp);
//     struct tm datetime = (*localtime(&timestamp));
//     string CurrentDate, CurrentTime;
//     CurrentDate = Days[datetime.tm_wday] + " " + to_string(datetime.tm_mday) + "-" + Months[datetime.tm_mon] + "-" + to_string(datetime.tm_year + 1900);
//     CurrentTime = to_string(datetime.tm_hour) + ":" + to_string(datetime.tm_min);
//     switch (menuChoice)
//     {
//         case 1: // Only returns the current time
//             return CurrentTime;
//         case 2: // Only returns the current date
//             return CurrentDate;
//         case 0: // Return current time and current date
//         default:
//             return CurrentTime, CurrentDate; 
        
//     }
// }

// pair<int, int> TimeModule(int menuChoice = 0)
// {
//     time_t timestamp = time(&timestamp);
//     struct tm datetime = (*localtime(&timestamp));
//     switch (menuChoice)
//     {
//         case 0: // Returns the time
//             return make_pair(datetime.tm_hour, datetime.tm_min);
//         case 1: // Returns the date
//             return make_pair(datetime.tm_mday, datetime.tm_mon)/*datetime.tm_year*/;
//     }
// }

// void SleepSchedule(int CurrentHour = 0, int CurrentMinute = 0)
// {
//     const int SleepHour = 23;
//     const int WakeHour = 6;
//     const int SleepMinute = 50;
//     if (CurrentHour >= SleepHour  || CurrentHour <= WakeHour)
//     {
//         if (CurrentMinute >= SleepMinute)
//         {
//             cout << "Go to sleep!!";
//         }
//     } else{
//         cout << "Not late!";
//     }
// }


// int main()
// {
//     pair<int, int> timeNow = TimeModule(0);
//     SleepSchedule(timeNow.first, timeNow.second);
//     return 0;
// }









string mathSymbols[4] = {"+", "-", "*", "/"};
int SymbolOccurences[4] = {0, 0, 0, 0};

double SumFunction(double A = 0, double B = 0) { return A + B; }
double DifferenceFunction(double A = 0, double B = 0) { return A - B; }
double ProductFunction(double A = 0, double B = 0) { return A * B; }
double DivisionFunction(double A = 0, double B = 1) { return A / B; }

void Bodmas(string Question = "")
{
    vector<string> characters = {};
    int counter = 0;
    for (int StringLength = Question.length(); counter < StringLength; counter++)
    {
        string cha = Question.substr(counter,1);
        characters.push_back(cha);
        if (cha == "+")
        {
            SymbolOccurences[0] += 1;
        } else if (cha == "-")
        {
            SymbolOccurences[1] += 1;
        } else if (cha == "*")
        {
            SymbolOccurences[2] += 1;
        } else if (cha == "/")
        {
            SymbolOccurences[3] += 1;
        }
    }

}

int main()
{
    string Text;
    cout << "ENter some text: ";
    getline(cin, Text);
    Bodmas(Text);
    return 0;
}
