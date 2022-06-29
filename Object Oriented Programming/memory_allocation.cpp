#include <iostream>
using namespace std;

class Store
{
    int product_id[100];
    int product_price[100];
    int counter;

public:
    void initialize_counter(void);
    void set_product_price(void);
    void print_product_price(void);
};

void Store::initialize_counter(void)
{
    counter = 0;
}

void Store::set_product_price(void)
{
    cout << "Enter the  product id of your product number " << counter + 1 << " :- ";
    cin >> product_id[counter];

    cout << "Enter the  product price of your product number " << counter + 1 << " :- ";
    cin >> product_price[counter];
    counter++;
}

void Store::print_product_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the product having product id " << product_id[i] << " is :- " << product_price[i] << endl;
    }
}

int main()
{
    Store Wellness;
    Wellness.initialize_counter();
    Wellness.set_product_price();
    Wellness.set_product_price();
    Wellness.set_product_price();
    Wellness.set_product_price();
    Wellness.print_product_price();
    return 0;
}