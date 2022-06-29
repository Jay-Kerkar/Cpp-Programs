#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter 5 Numbers" << endl;
    for (int index = 0; index < 5; index++)
    {
        cin >> arr[index];
    }
    cout << "Elements Of Array Are : " << endl;
    for (int index = 0; index < 5; index++)
    {
        cout << arr[index] << endl;
    }

    return 0;
}