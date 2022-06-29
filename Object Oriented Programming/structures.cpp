#include <iostream>
using namespace std;

struct student
{
    int studentId;
    int standard;
    float percentage;
};

int main()
{
    struct student jay;
    jay.studentId = 66;
    jay.standard = 12;
    jay.percentage = 96;

    cout << "The value of student id is = " << jay.studentId << endl;
    cout << "The value of standard is = " << jay.standard << endl;
    cout << "The value of percentage is = " << jay.percentage;
    return 0;
}