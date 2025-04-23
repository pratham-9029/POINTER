#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    int n;

    cout<<"Enter N: ";
    cin >> n;

    ptr = &n;

    cout << "Address of value : " << ptr<<endl;
    cout << "Value of address : " << *ptr<<endl;
    
    return 0;
}