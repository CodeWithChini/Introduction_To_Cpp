#include<iostream>
using namespace std;

int addNums(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter Number a : ";
    cin >> a;
    cout << "Enter Number b : ";
    cin >> b;

    int sum = addNums(a, b);
    cout << "Sum = " << sum << endl;
}
