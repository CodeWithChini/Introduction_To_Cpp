#include<iostream>
using namespace std;

bool primeNum(int n)
{
    bool isprime = true;
    for (int i = 2; i < n / 2; i++)
    {
        if(n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    return isprime;
}

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin >> n;

    if(primeNum(n))
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
    return 0;
}
