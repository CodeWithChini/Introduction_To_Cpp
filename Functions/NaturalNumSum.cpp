#include<iostream>
using namespace std;

int NAturalNumSum(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int a;
    cout << "Enter Number a : ";
    cin >> a;

    int sum = NAturalNumSum(a);
    cout << "Sum = " << sum << endl;
}
