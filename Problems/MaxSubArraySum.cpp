#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int start = 0, end = 0;

    vector<int> vec;

    for(int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the element: ";
        cin >> x;
        vec.push_back(x);
    }


    int maxSum = INT_MIN;
    for(start = 0; start < n; start++)
    {
        int currentSum = 0;
        for(end = start; end < n; end++)
        {
            currentSum += vec.at(end);
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Maximum Subarray Sum is: " << maxSum << endl;
    return 0;
}
