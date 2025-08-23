#include<iostream>
using namespace std;

void changeArray(int arr[], int x)
{
    cout << "In changeArray function" << endl;
     for(int i = 0; i <= x; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{

    int n[] = {1, 2, 3, 4};
    changeArray(n, 4);

    cout << "In main function" << endl;

    for(int i = 0; i < 4; i++)  // 2 4 6 8
    {
        cout << n[i] << " ";
    }
    cout << endl;
}
