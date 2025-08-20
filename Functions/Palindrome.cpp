#include<iostream>
using namespace std;

bool palindrome(int n)
{
    int temp = n, revnum = 0;
    while(temp != 0)
    {
        int lastDigit = temp % 10;
        temp = temp / 10;
        revnum = revnum * 10 + lastDigit;
    }
    if(revnum == n)
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

    cout << "Enter a Number : ";
    cin >> n;

    bool pali = palindrome(n);
    if(pali == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

}
