#include <iostream>
using namespace std;

class Complex_Number
{
private:
    int num1, num2;

public:
    Complex_Number(void); // Declaration of a constructor
    void print_number(void)
    {
        cout << "The complex number is = " << num1 << " + " << num2 << "i" << endl;
    }
};

Complex_Number::Complex_Number(void)
{
    num1 = 3;
    num2 = 4;
}

int main()
{
    Complex_Number c1;
    c1.print_number();
    return 0;
}