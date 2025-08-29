#include<iostream>
#include<vector>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target)
 {
        vector<int>arr(2);
        for(int i = 0 ;i < nums.size();i++)
        {
            for(int j = i + 1 ; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    arr[0] = i;
                    arr[1] = j;
                }
            }
        }
        return arr;
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


    int target;
    cout << "Enter the target: ";
    cin >> target;

    
    vector<int> result = twoSum(vec, target);
    cout << "Indices of the two numbers such that they add up to target are: ["
            << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
