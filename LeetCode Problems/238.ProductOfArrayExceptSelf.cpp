//Time Complexity: O(n)
//Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ans(n);
    vector<int> prefix(n);
    vector<int> suffix(n);

    // Initialize prefix array
    prefix[0] = 1;
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // Initialize suffix array
    suffix[n-1] = 1;
    for(int i = n-2; i >= 0; i--)
    {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // Calculate answer array
    for(int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> nums(n);

    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"for element "<<i<<": ";
        cin>>nums[i];
    }

    vector<int> result = productExceptSelf(nums);
    cout<<"The product of array except self is: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
