#include <iostream>
using namespace std;

class Complex_Number;

class Calculator
{
public:
    int sum_of_complex_number_real(Complex_Number, Complex_Number);
    int sum_of_complex_number_imaginary(Complex_Number, Complex_Number);
};

class Complex_Number
{
private:
    int num1, num2;
    // Individual friend declaration
    friend int Calculator::sum_of_complex_number_real(Complex_Number, Complex_Number);
    friend int Calculator::sum_of_complex_number_imaginary(Complex_Number, Complex_Number);

    // Declaring the entire class at once
    friend class Calculator;

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
};

int Calculator::sum_of_complex_number_real(Complex_Number c1, Complex_Number c2)
{
    return (c1.num1 + c2.num1);
}

int Calculator::sum_of_complex_number_imaginary(Complex_Number c1, Complex_Number c2)
{
    return (c1.num2 + c2.num2);
}

int main()
{
    Complex_Number c1, c2;
    c1.setNumber(2, 4);
    c2.setNumber(3, 6);

    Calculator calc;
    int result1 = calc.sum_of_complex_number_real(c1, c2);
    cout << "The sum of real parts of c1 and c2 is = " << result1 << endl;
    int result2 = calc.sum_of_complex_number_imaginary(c1, c2);
    cout << "The sum of imaginary parts of c1 and c2 is = " << result2 << endl;
    return 0;
}