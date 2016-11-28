#include <iostream>
#include <string>

using namespace std;

void printEmployee(const string id[], const string name[], const double salary[], size_t size)
{
    cout << "------------------------" << endl;
    for (size_t i = 0; i < size; ++i)
    {
        cout << "Id:\t" << id[i] << endl
            << "Name:\t" << name[i] << endl
            << "Salary:\t" << salary[i] << endl
            << "------------------------" << endl;
    }
    return;
}

string findEmloyeeWithLongestName(const string name[], size_t size)
{
    string longestName = name[0];
    for (size_t i = 1; i < size; ++i)
    {
        if (longestName.length() < name[i].length())
            longestName = name[i];
    }
    return longestName;
}

int calculateEmployeeSalary(int year, const int hireYear[], const int hireMonth[], const double salary[], size_t n)
{
    if (hireYear[n] < year)
        return (salary[n] * 12);
    if (hireYear[n] == year)
        return ((12 - hireMonth[n]) * salary[n]);
    return 0;
}

int main()
{
    string id[] = { "E001", "E002", "E003" },
           name[] = { "Ola", "Basia", "Mateusz" };
    double salary[] = { 3500, 3750, 3600 };
    int hireYear[] = { 2015, 2016, 2016 },
        hireMonth[] = { 7, 3, 8 };
    size_t size = 3,
           employeeNumber = 1,
           year = 2016;


    printEmployee(id, name, salary, size);
    cout << "Longest name is " << findEmloyeeWithLongestName(name, size) << endl;
    cout << "Employee " << name[employeeNumber]
         << " in "<< year
         << " salary: " << calculateEmployeeSalary(year, hireMonth, hireYear, salary, employeeNumber) << endl;


    system("pause");
    return 0;
}