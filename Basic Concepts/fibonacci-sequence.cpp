#include<iostream>

using namespace std;

int main(){
    int total_terms, a = 0, b = 1, count = 2, c;

    cout<<"ENTER THE TOTAL NUMBER OF TERMS IN THE SEQUENCE"<<endl;
    cin>>total_terms;

    cout<<"THE VALUE OF A IS : "<<a<<endl;
    cout<<"THE VALUE OF B IS : "<<b<<endl;

    c = a + b;

    cout<<"THE VALUE OF C IS : "<<c<<endl;
    
    if (count <= total_terms){
        a = b;
        b = c;
        count++;
    }

    cout<<"THE VALUE OF C IS : "<<c<<endl;
    return 0;
}