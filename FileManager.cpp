#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void ReadFiles(string FileName = "File.txt")
{
    string Text;
    ifstream MyReadFile(FileName);
    while (getline (MyReadFile, Text))
    {
        cout << Text << "\n";
    }
    MyReadFile.close();
    cout << "\n\nReading from " << FileName << " complete!\n";
}

void WriteFiles(string FileName = "File.txt")
{
    string Text;
    cout << FileName << ">>>>\t";
    getline(cin, Text);
    ofstream Myfile(FileName); // Creates a  new file
    Myfile << Text; // Writes to the file
    Myfile.close();
    cout << "\n\nWriting to " << FileName << " complete!\n";
}

int main()
{
    bool Running = 1;
    int MenuOption;
    string FileName;
    while (Running)
    {
        cout << "Menu: 1 - Read file, 2 - Write to file:\t";
        cin >> MenuOption;
        cin.ignore();
        cout << "File name:\t";
        getline(cin, FileName);
        switch (MenuOption)
        {
            case 1:
                ReadFiles(FileName);
                break;
            case 2:
                WriteFiles(FileName);
                break;
            default:
                cout << "Invalid menu option!!\n";
                Running = 0;
                break;
        }
    }
}