#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << p << endl;  // address of a
    cout << *p << endl; // value of a
}
