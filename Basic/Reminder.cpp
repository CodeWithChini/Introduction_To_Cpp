#include<iostream>
using namespace std;

int main()
{
    int divisior , dividant , reminder , quotient ;

    cout << "Enter divisior : ";
    cin >> divisior;

    cout << "Enter dividant : ";
    cin >> dividant;

    quotient = dividant / divisior;
    reminder = dividant % divisior;

    cout << "Quotient = " << quotient << endl;
    cout << "reminder = " <<reminder;
}
