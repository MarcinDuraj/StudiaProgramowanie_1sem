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

int main()
{
    string id[] = { "E001", "E002", "E003" };
    string name[] = { "Ola", "Basia", "Mateusz" };
    double salary[] = { 3500, 3750, 3600 };
    size_t size = 3;

    printEmployee(id, name, salary, size);
    cout << "Longest name is " << findEmloyeeWithLongestName(name, size) << endl;

    system("pause");
    return 0;
}