#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    //increment
    cout << p << endl;
    p++;
    cout << p << endl; // +4

    //decrement
    cout << p << endl;
    p--;
    cout << p << endl; // -4
}
