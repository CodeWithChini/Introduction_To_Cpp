#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

   for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / n;
    cout << "Average of array is: " << average << endl;
    return 0;
}
