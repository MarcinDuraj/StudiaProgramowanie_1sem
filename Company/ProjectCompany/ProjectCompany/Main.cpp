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

int main()
{
    string id[] = { "E001", "E002", "E003" };
    string name[] = { "Ola", "Basia", "Mateusz" };
    double salary[] = { 3500, 3750, 3600 };
    size_t size = 3;

    printEmployee(id, name, salary, size);

    system("pause");
    return 0;
}