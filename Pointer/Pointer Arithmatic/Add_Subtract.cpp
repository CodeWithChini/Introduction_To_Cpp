#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    //add
    cout << p << endl;
    p = p + 2;  // 2int => 8B
    cout << p << endl; // +8

    //subtract
    cout << p << endl;
    p = p - 3;  // 3int => 12B
    cout << p << endl; // -12

    //using in array
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;
}
