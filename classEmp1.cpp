#include <iostream>
using namespace std;

class Employee
{
    int age;
    float salary;

public:
    void getdata()
    {
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displaydata()
    {
        cout << "Age = " << age << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Employee e1, e2;

    cout << "Enter Details of Employee 1" << endl;
    e1.getdata();

    cout << "\nEnter Details of Employee 2" << endl;
    e2.getdata();

    cout << "\nEmployee 1 Details" << endl;
    e1.displaydata();

    cout << "\nEmployee 2 Details" << endl;
    e2.displaydata();

    return 0;
}