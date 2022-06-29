#include <iostream>
using namespace std;

class Complex_Number
{
protected:
    int num1;
    int num2;

public:
    void set_data(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void set_data_by_sum(Complex_Number v1, Complex_Number v2)
    {
        num1 = v1.num1 + v2.num1;
        num2 = v1.num2 + v2.num2;
    }
    void print_number(void)
    {
        cout << "The complex number is " << num1 << "+" << num2 << "i" << endl;
    }
};

int main()
{
    Complex_Number c1, c2, c3;
    c1.set_data(1, 2);
    c1.print_number();

    c2.set_data(3, 4);
    c2.print_number();

    c3.set_data_by_sum(c1, c2);
    c3.print_number();
    return 0;
}