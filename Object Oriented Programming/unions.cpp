#include <iostream>
using namespace std;

union vendor
{
    char vendorType;
    char vendorName;
    char vendorContract;
};

int main()
{
    union vendor tcs;
    tcs.vendorType = 'T';
    cout << "The value of vendor type is = " << tcs.vendorType << endl;
    return 0;
}