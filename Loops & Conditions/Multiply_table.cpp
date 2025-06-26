#include<iostream>
using namespace std;

int main()
{
    int n,tab;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i < 11; i++)
    {
        tab = n * i;
        cout << n << " " << "*" << " " << i << " " << "=" << " " << tab << endl;
    }

}
