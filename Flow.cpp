#include <iostream>

int main()
{
    int sum = 0, val = 0;
    while (val <= 10)
    {
        sum += val;
        val+=2;
    }
    
    std::cout << "sum of every even number from 1 to 10 is " << sum << std::endl;

    return 0;
}