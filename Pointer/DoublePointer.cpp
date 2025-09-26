#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **ptr = &p;

    cout << &p << endl; // address of p
    cout << ptr <<endl; // address of p
}
