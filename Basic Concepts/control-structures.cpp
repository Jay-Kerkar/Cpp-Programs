#include<iostream>

using namespace std;

int main(){
    /* int age;
    cout<<"TELL ME YOUR AGE"<<endl;
    cin>>age;

    if(age >= 18){
        cout<<"YOUR ARE A MAJOR"<<endl;
    }else if((age < 18) && (age > 0)){
        cout<<"YOUR ARE A MINOR"<<endl;
    }else{
        cout<<"PLEASE ENTER A VALID AGE"<<endl;
    }

    */

    /* int a, b;

    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    } */
    
    int num1, num2, swappingVariable;

    cout<<"ENTER THE VALUE OF NUMBER 1 : "<<endl;
    cin>>num1;
    cout<<"ENTER THE VALUE OF NUMBER 2 : "<<endl;
    cin>>num2;

    swappingVariable = num2;
    num2 = num1;
    num1 = swappingVariable;

    cout<<"THE VALUE OF NUMBER 1 : "<<num1<<endl;
    cout<<"THE VALUE OF NUMBER 2 : "<<num2<<endl;
}