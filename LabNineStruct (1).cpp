// ********************************************************
// Programmer�s name: Luis Jimenez 
// Course Number:  CIS142
// Date:  December 6, 2022
// Assignment:  Lab 9
// Description:  Structures 
// Files: LabNineStruct.cpp
// ********************************************************

#include <iostream>
#include <string>
using namespace std;

enum Type { ENGINEER, MANAGER, DIRECTOR };
//Structured with information that will be asked for later on
struct USR_EMPLOYEE
{
    string usr_name{};
    string employeeID{};
    Type typelevel{};
    double hourlyrate{};
    double ttlhours{};
    double weeksalary{};
}
;
//Main 
int main()
{
    struct USR_EMPLOYEE Att[3];
    int usr_level = 0, count = 0;
    string usr_inp2 = "Y";
    //Do while statement
    //Asks for user input
    do {
        cout << "Please enter employee's name: ";
        //Stored named in usr_name
        cin >> Att[count].usr_name;

        cout << endl;

        cout << "Please enter employee's ID: ";
        //Stored ID in employeeID
        cin >> Att[count].employeeID;

        cout << endl;

        cout << "Please enter employee's Level (0: ENGINEER, 1: MANAGER, 2: DIRECTOR) : ";
        //Stored Emp's level in typelevel
        cin >> usr_level; Att[count].typelevel = (Type)usr_level;

        cout << endl;

        cout << "Please enter employee's hourly rate: ";
        //Stored Emp's money made per hour
        cin >> Att[count].hourlyrate;

        cout << endl;

        cout << "Please enter employee's working hours: ";
        //Stored the Emp's hours worked 
        cin >> Att[count].ttlhours;

        cout << endl;
        //If statement with all calculations
        //Level 0 Calculation
        if (Att[count].typelevel == 0){
            if (Att[count].ttlhours <= 40)
            {
                Att[count].weeksalary = Att[count].ttlhours * Att[count].hourlyrate;
            }
            else
            {
                Att[count].weeksalary = 40 * Att[count].hourlyrate + (Att[count].hourlyrate * (Att[count].ttlhours - 40) * 1.15);
            }
        }
        //Level 1 Calculation
        else if (Att[count].typelevel == 1){
            if (Att[count].ttlhours <= 40)
            {
                Att[count].weeksalary = Att[count].ttlhours * Att[count].hourlyrate;
            }
            else
            {
                Att[count].weeksalary = 40 * Att[count].hourlyrate + (Att[count].hourlyrate * (Att[count].ttlhours - 40) * 1.2);
            }
        }
        //Level 2 Calculation
        else if (Att[count].typelevel == 2){
            if (Att[count].ttlhours <= 40)
            {
                Att[count].weeksalary = Att[count].ttlhours * Att[count].hourlyrate;
            }
            else
            {
                Att[count].weeksalary = 40 * Att[count].hourlyrate + (Att[count].hourlyrate * (Att[count].ttlhours - 40) * 1.3);
            }
        }
        cout << endl;
        //Asking user if they want to continue 
        cout << "Do you wish to continue (Y/N)? ";
        cin >> usr_inp2;
        count++;
    } 
    //While statement 
    while (usr_inp2 != "n" && usr_inp2 != "N");
    cout << "****************************************";
    cout << endl;
    cout << "Employee Information: ";
    cout << endl;
    cout << endl;
    //For loop
    //Condition - True - WIll run
    for (int x = 0; x < 3; x++)
    {   //Prints out the Employee information
        cout << "Employee's Name: " << Att[x].usr_name << endl;
        cout << "Employee's ID: " << Att[x].employeeID << endl;
        cout << "Employee's Level: " << Att[x].typelevel << endl;
        cout << "Employee's Weekly Pay: " << Att[x].weeksalary << endl;
        cout << endl;
    }
    cout << "****************************************";
    cout << endl;
    //Program ends 
    return 0;
}