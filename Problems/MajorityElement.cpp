#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int n = nums.size();

    //sorting the array
    sort(nums.begin(), nums.end());

    //freq count
    int freq = 1, ans = nums[0];

    for(int i = 1; i < n; i++)
    {
        if(nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if(freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
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

    int result = majorityElement(vec);
    cout << "The majority element is: " << result << endl;
    return 0;
}
