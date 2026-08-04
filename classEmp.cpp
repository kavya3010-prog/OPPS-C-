#include <iostream>
using namespace std;

class Employee
{
    int Emp_ID;
    string Emp_Name;
    float E_salary;

public:
    void getdata()
    {
        cout << "Enter Employee ID: ";
        cin >> Emp_ID;

        cout << "Enter Employee Name: ";
        cin >> Emp_Name;

        cout << "Enter Employee Salary: ";
        cin >> E_salary;
    }

    void printdata()
    {
        if (E_salary > 10000)
        {
            cout << "\nEmployee Details" << endl;
            cout << "ID = " << Emp_ID << endl;
            cout << "Name = " << Emp_Name << endl;
            cout << "Salary = " << E_salary << endl;
        }
    }
};

int main()
{
    Employee e[5];

    cout << "Enter Employee Details:\n";

    for (int i = 0; i < 5; i++)
    {
        e[i].getdata();
    }

    cout << "\nEmployees having salary greater than 10000:\n";

    for (int i = 0; i < 5; i++)
    {
        e[i].printdata();
    }

    return 0;
}