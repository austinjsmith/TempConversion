// TempConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int fToC(int fTemp)
{
    return (fTemp - 32) / 1.8;
}
int cToF(int cTemp)
{
    return cTemp * 1.8 + 32;
}

int main()
{
    int input = -1, temperature = 0;
    while (input != 0)
    {
        cout << "Select a function:\n"
            "1: F to C.\n"
            "2: C to F.\n"
            "0: Exit program.\n";
        cin >> input;


        if (input > 0)
        {
            cout << "Enter the temperature: ";
            cin >> temperature;
        }

        if (input == 1)
        {
            temperature = fToC(temperature);
            cout << "The converted temperature is " << temperature << "*C\n";
        }
        else if (input == 2)
        {
            temperature = cToF(temperature);
            cout << "The converted temperature is " << temperature << "*C\n";
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
