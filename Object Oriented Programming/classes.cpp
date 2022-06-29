#include <iostream>
using namespace std;

class Student
{
private:
    int variable1, variable2;

public:
    int variable3, variable4;
    void setValue(int a, int b, int c, int d);
    void getValue()
    {
        cout << "The value of variable 1 is = " << variable1 << endl;
        cout << "The value of variable 2 is = " << variable2 << endl;
        cout << "The value of variable 3 is = " << variable3 << endl;
        cout << "The value of variable 4 is = " << variable4 << endl;
    }
};

void Student ::setValue(int a, int b, int c, int d)
{
    variable1 = a;
    variable2 = b;
    variable3 = c;
    variable4 = d;
}

int main()
{
    Student Jay;
    Jay.setValue(10, 20, 30, 40);
    Jay.getValue();
    return 0;
}