#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
// E=MC^{2}

const double speed_of_light = 3E8;

// int main()
// {
//     int x, y, z;
//     x = 5, y= 8, z = 0;
//     std::cout << (x < y &&  x == z) << std::endl; // 0
//     std::cout << (x < y ||  x == z) << std::endl; // 1
//     std::cout << (x < y &&  !(x == z)) << std::endl; // 1
//     return 0;
// }

// int main()
// {
//     string first;
//     int age;
//     cout << "First name ";
//     getline (cin, first);
//     cout << "Name: " << first;
//     return 0;
// }

// int main()
// {
//     cout << log(0) << "\n";
//     cout << log(-5) << "\n";
//     cout << log(0);
// }

// Even or odd
// int main()
// {
//     int user_input;
//     cout << "Number to check for even or odd: ";
//     cin >> user_input;
//     string y = (user_input % 2 == 0) ? "Even number" : "Odd number";
//     cout << y;
// }

// Divisibility test for 6
// int main()
// {
//     int user_input;
//     cout << "Check for divisibility test of number 6: ";
//     cin >> user_input;
//     if (user_input % 3 == 0 && user_input % 2 == 0)
//     {
//         cout << "Divisible by 6";
//     }
// }

// int main()
// {
//     string user_input;
//     cout << "Enter number:\t";
//     cin >> user_input;
//     char last_char = user_input.back();
//     switch (last_char)
//     {
//         case '0':
//         case '5':
//             cout << "Divisible by 5";
//             break;
//         default:
//             cout << "Not divisible by 5";
//     }
//     return 0;
// }



/*
// Check if prime number
int main()
{
    int user_input;
    cout << "Number to check if prime number:\t";
    cin >> user_input;
    int counter = 1, num_factors = 0;
    while (counter <= user_input)
    {
        int result = (user_input % counter == 0) ? ++num_factors, ++counter : ++ counter;
    }
    string prime = (num_factors == 2) ? "Prime number" : "Not a prime number";
    cout << prime;
}
*/


/*
int main()
{
    int user_input;
    cout << "Number to check if prime number:\t";
    cin >> user_input;
    int counter = 1, num_factors = 0;
    while (counter <= user_input)
    {
        if (user_input % counter == 0)
        {
            ++num_factors;
        }
        ++counter;
    }
    if (num_factors == 2)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime number";    
    }
}
*/



/*
// Allows final only one transaction that puts you in debt

int main()
{
    float balance = 1000.000;
    do {
        float expense;
        cout << "Amount spent: ";
        cin >> expense;
        balance -= expense;
    }
    while (balance > 0 );
    cout << balance << " balance!";
}
*/

/*
// Sum of squares of numbers in a given range: good for summation functions
int main()
{
    int answer = 0;
    for (int x = 0, y = 100; x <= y; ++x) //Before the code in brackets execution ; Condition for loop;  After the code in brackets is executed
    {
        answer +=  (x*x);
    }
    cout << answer;
}
*/


/*
// Prints every character in a string iteratively skipping '@' and ending after '?'
int main()
{
    string x;
    cout << "Enter a string:\t";
    cin >> x;
    for (char c: x)
    {
    if (c == '?')
    {
        break;
    } else if (c == '@')
    {
        continue;
    }
        cout << c << "\n";
    }
}
*/



/*
// prints each item of the array
int main()
{
    int primes[4] = {2,3,5,7};
    for (int x: primes)
    {
        cout << x << "\n";
    }
}
*/


/*
int main()
{
    double numbers[] = {54.432, 253.552};
    for (float i : numbers)
    {
        cout << i << "\n";
    }
}
*/


/*
// Vectors: uses the vector library
int main()
{
    vector<int> primes = {2,3,5,7};
    primes.push_back(11);
}

*/

/*
int main()
{
    int numbers[] = {5,6,7};
    cout << sizeof(numbers)/sizeof(numbers[0]);
}
*/

/*
// Nested arrays
int main()
{
    string position [2][3] = {
    {"e4", "d4", "Nf3"},
    {"Nc6", "e5", "a5"}
    };
}
*/

// stuctures
int main()
{
    struct {
        string knight1, knight2;
        bool pinned;
    } black, white;

    black.knight1 = "g8";
    black.knight2 = "c6";
    black.pinned = 0;
    
    white.knight1 = "f3";
    white.knight2 = "b1";
    white.pinned = 1;
    
}


int main()
{
    struct student {
        string name;
        int age;
        char grade;
    };

    student s1;
    s1.name = "Liam";
    s1.age = 35;
    // s1.grade = "A";
}









