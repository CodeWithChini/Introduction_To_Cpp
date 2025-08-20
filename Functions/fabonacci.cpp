#include<iostream>
using namespace std;

bool fabonacci(int n)
{
    int n1 = 0, n2 = 1, n3;
    while(n1 > n)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    if(n1 == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if(fabonacci(n))
    {
        cout << n << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << n << " is not a Fibonacci number." << endl;
    }
}
