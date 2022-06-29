#include <iostream>

using namespace std;
void swap_variable(int *num1, int *num2);

int main()
{
    int num1, num2;

    cout << "Enter The Value Of Num1" << endl;
    cin >> num1;
    cout << "Enter The Value Of Num2" << endl;
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    swap_variable(ptr1, ptr2);

    cout << "The Value Of Num1 Is : " << num1 << endl;
    cout << "The Value Of Num2 Is : " << num2;
    return 0;
}

void swap_variable(int *num1, int *num2)
{
    int temporary_variable = *num2;
    *num2 = *num1;
    *num1 = temporary_variable;
}