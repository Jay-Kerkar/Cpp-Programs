#include <iostream>
using namespace std;

class Complex_Number
{
private:
    int num1, num2;

public:
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void printNumber(void)
    {
        cout << "The complex number is = " << num1 << " + " << num2 << "i" << endl;
    }
    friend Complex_Number sumOfComplex(Complex_Number n1, Complex_Number n2);
};

Complex_Number sumOfComplex(Complex_Number n1, Complex_Number n2)
{
    Complex_Number n3;
    n3.setNumber((n1.num1 + n2.num1), (n1.num2 + n2.num2));
    return n3;
}

int main()
{
    Complex_Number c1, c2, sum;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    sum = sumOfComplex(c1, c2);
    sum.printNumber();
    return 0;
}