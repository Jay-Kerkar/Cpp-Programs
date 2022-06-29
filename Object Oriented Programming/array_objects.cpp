#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void set_data(void)
    {
        cout << "Enter employee id :- ";
        cin >> id;
        salary = 10000;
    }
    void get_data(void)
    {
        cout << "\nThe id of this employee is :- " << id << endl;
    }
};

int main()
{
    Employee Insta[3];
    for (int i = 0; i < 3; i++)
    {
        Insta[i].set_data();
        Insta[i].get_data();
    }
    return 0;
}