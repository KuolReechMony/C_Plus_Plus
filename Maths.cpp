#define _USE_MATH_DEFINES // For pie = 22/7
#include <iostream>
#include <cmath>

using namespace std;

// Returns number of factors (if not 2, then prime number)
bool prime(unsigned int number = 1)
{
    int factors = 0, range = 1;
    while (range <= number)
    {
        int results =  (number % range == 0) ? factors++, range++ : range++;
    }
    if (factors == 2)
    {
        return 1;
    } else {
        return 0;
    }
}

double DegsToRads(double degree = 0)
{
    const double constant = M_PI/180;
    return (degree * constant);
}

int main()
{
    int choice, number;
    cout << "Menu: 1 - prime numbers, 2 - degrees/radians:\t ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Possible prime number:\t";
            cin >> number;
            if (DegsToRads(number))
            {
                cout << number << " is a prime number";
            } else{
                cout << number << " is not a prime number";
            }
            break;
        case 2:
            cout << "Angle in degrees:\t";
            cin >> number;
            cout << number << " degrees equals " << DegsToRads(number) << " radians";
            break;
    };
}





// class Transactions{
//     public:
//         Transactions()
//         {
//             cout << "Initiliazing new transcation\t\n";
//         };
//     private:
//         double Amount;
//         string DateAndTime;
//         string Account;
//         string Description;
//     };






/*
class Service
{
    public:
        Service()
        {
            
            cout << "Initializing new service\t\n";
        };
    string ServiceName;
    string emailUsername;
    string password;
    bool GooglePassword_Screenshot;
    string BackupEMail;
    bool PhoneNumber;
    string TwoFactor;
    bool PermissionsAddress;
    bool PermissionsBanking;
};

*/