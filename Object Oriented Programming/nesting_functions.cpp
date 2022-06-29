#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string str;
    void check_binary();

public:
    void read_binary();
    void one_complement();
    void print_complement();
};

void Binary::read_binary()
{
    cout << "Enter a binary number : ";
    cin >> str;
}

void Binary::check_binary()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "\nThe number is not in binary format";
            exit(0);
        }
    }
}

void Binary::one_complement()
{
    check_binary();
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }
}

void Binary::print_complement()
{
    cout << "\nThe one complement of the binary number : ";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
    }
}

int main()
{
    Binary member;
    member.read_binary();
    member.one_complement();
    member.print_complement();
    return 0;
}