#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cstdlib> // for atoi()
#include <string>  // for getline()
#define count 3
#define dollar '$'
#define sign '/'
using namespace std;
struct emloyeeType
{
    int employeeNumber;
    float employeesCompensation;
} emloyeeData[count];
void DataEntry(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the Employee ID: ", cin >> emloyeeData[i].employeeNumber;
        cout << "Enter the the Employees Compensation:  " << dollar, cin >> emloyeeData[i].employeesCompensation;
    }
    cout << endl;
}
void Display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Employee ID: " << emloyeeData[i].employeeNumber << endl;
        cout << "Enter the the Employees Compensation:  " << emloyeeData[i].employeesCompensation << dollar << endl;
    }
}
int main()
{
    int date[3];
    char s = '/';
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", date[i]);
        printf("%s");
    }

    // DataEntry();
    // Display();
}

// for (int i = 0; i < 3; i++)
// {
//     cin >> date[i], cin.ignore();
//     cout << sign, cin.ignore();
// }
//     int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cin.ignore(); // discard the newline character
//    cout << "The number you entered is: " << num << endl;

// string input;
// int num;
// cout << "Enter a number: ";
// getline(cin, input), cin >> num;
// stringstream(input) >> num;
// cout << "The number you entered is: " << num << endl;

//=====================3==================
// int num1, num2, num3;
// char comma; // to read the comma character

// cout << "Enter three integers separated by commas: ";
// cin >> num1;
// cin.get(comma); // read the comma character and discard it

// cin >> num2;
// cin.get(comma); // read the comma character and discard it

// cin >> num3;
// cin.ignore(); // discard the newline character

// cout << "You entered: " << num1 << ", " << num2 << ", " << num3 << endl;
