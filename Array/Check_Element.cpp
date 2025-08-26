#include <iostream>
using namespace std;

bool containsElement(int array[], int size, int target)
{
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return true;  // Element found
        }
    }
    return false;  // Element not found
}

int main()
{
    const int size = 5;
    int arr[size], i, target;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    if (containsElement(arr, size, target))
    {
        cout << "Element " << target << " is found in the array." << std::endl;
    }
    else
    {
        cout << "Element " << target << " is not found in the array." << std::endl;
    }

    return 0;
}
