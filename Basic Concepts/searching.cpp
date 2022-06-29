#include <iostream>
using namespace std;

// Binary Searching Of Elements
int binary_search(int arr[], int array_size, int search_value)
{
    int starting_point = 0;
    int ending_point = array_size;

    while (starting_point <= ending_point)
    {
        int mid_point = (starting_point + ending_point) / 2;

        if (arr[mid_point] == search_value)
        {
            return mid_point;
        }
        else if (arr[mid_point] > search_value)
        {
            ending_point = mid_point - 1;
        }
        else
        {
            starting_point = mid_point + 1;
        }
    }
    return -1;
}

int main()
{
    int array_size;
    cout << "ENTER THE SIZE OF THE ARRAY" << endl;
    cin >> array_size;

    int arr[array_size];
    for (int i = 0; i < array_size; i++)
    {
        cout << "ENTER THE ELEMENTS OF THE ARRAY" << endl;
        cin >> arr[i];
    }

    int search_value;
    cout << "ENTER THE VALUE WHICH IS TO BE SEARCHED IN THE ARRAY" << endl;
    cin >> search_value;

    cout << binary_search(arr, array_size, search_value) << endl;
    return 0;
}
