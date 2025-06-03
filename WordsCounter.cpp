#include <iostream>
#include <string>
using namespace std;



int WordCounter(string text = "")
{
    int words = 1;
    for (int max = text.length(), counter = 0; counter < max; counter++)
    {
        if (isspace(text[counter]))
        {
            words++;
        }
    }
    return words;
}

int main()
{
    string UserInput;
    cout << "Enter the text:\n";
    getline(cin, UserInput);
    cout << WordCounter(UserInput) << " words!";
}


