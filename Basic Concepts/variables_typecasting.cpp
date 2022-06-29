#include<iostream>

using namespace std;

int main(){
    /* int a, b, c;
    cout<<"Enter The Value Of A :- "<<endl;
    cin>>a;

    cout<<"Enter The Value Of B :- "<<endl;
    cin>>b;
    c = a + b;
    cout<<"The Value Of Summation Is :- "<<c;

    return 0; */
    
    /* int a, b;

    for ( a = 1; a <= 10 ; a++)
    {
        for ( b = 1; b <= a ; b++)
    {
        cout<<"*";
    }
    cout<<endl;
} */
    
    // Refrence Variables
    /* float x = 455;
    float & y = x;

    cout<<x<<endl;
    cout<<y; */

    // Typecasting
    /* int a = 54;
    int b = 54.67;
    cout<<"The Value Of A Is :- "<<(float)a<<endl;
    cout<<"The Value Of B Is :- "<<(int)b; */

    int a, b, c, d, e, f;
    char oper;

    cout<<"-------------Welcome To Our C++ General Calculator------------------"<<endl;
    cout<<"Enter The Value Of A :- "<<endl;
    cin>>a;
    cout<<"Enter The Operator :- "<<endl;
    cin>>oper;
    cout<<"Enter The Value Of B :- "<<endl;
    cin>>b;

    if (oper == '+')
    {
        c = a + b;
        cout<<"The Value Of Summation Is :- "<<c<<endl;
        cout<<"-------------Thank You For Using The Calculator------------------";
    }else if (oper == '-')
    {
        d = a - b;
        cout<<"The Value Of Subtraction Is :- "<<d<<endl;;
        cout<<"-------------Thank You For Using The Calculator------------------";
    }else if (oper == '*')
    {
        e = a * b;
        cout<<"The Value Of Multiplication Is :- "<<e<<endl;;
        cout<<"-------------Thank You For Using The Calculator------------------";
    }else if (oper == '/')
    {
        f = a / b;
        cout<<"The Value Of Division Is :- "<<f<<endl;
        cout<<"-------------Thank You For Using The Calculator------------------";
    }else{
        cout<<"Please Enter A Vaild Operator";
    }
}