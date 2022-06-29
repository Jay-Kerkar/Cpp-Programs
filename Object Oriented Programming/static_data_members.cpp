#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    static int count;

public:
    void set_data(void)
    {
        cout << "Enter the student id :- " << endl;
        cin >> id;
        count++;
    }
    void get_data(void)
    {
        cout << "The student id is :- " << id << " and the student number is :- " << count << endl;
    }
    static void get_count(void)
    {
        cout << "The value of count is :- " << count << endl;
    }
};

int Student::count;

int main()
{
    Student Jay, Shivam, Aaryan;

    Jay.set_data();
    Jay.get_data();
    Student::get_count();

    Shivam.set_data();
    Shivam.get_data();
    Student::get_count();

    Aaryan.set_data();
    Aaryan.get_data();
    Student::get_count();

    return 0;
}