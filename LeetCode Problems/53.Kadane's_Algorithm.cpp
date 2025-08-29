#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums)
{
        int currSum = 0, maxSum = INT_MIN;

        for(int i : nums)
        {
            currSum += i;
            maxSum = max(currSum, maxSum);

            //reset currSum if it becomes negative
            if(currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> vec;

    for(int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the element: ";
        cin >> x;
        vec.push_back(x);
    }
    cout << "Maximum Subarray Sum is: " << maxSubArray(vec) << endl;
    return 0;
}
