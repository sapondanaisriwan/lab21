#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        cout << "Please input numbers to find average.";
        return 0;
    }

    double sum = 0;
    double average = 0;
    double number = argc - 1;
    for (int i = 1; i < argc; i++)
    {
        sum += atof(argv[i]);
    }
    average = sum / number;
    cout << "---------------------------------" << endl;
    cout << "Average of " << number << " numbers = " << average << endl;
    cout << "---------------------------------" << endl;
    return 0;
}