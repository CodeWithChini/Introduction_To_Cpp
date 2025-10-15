//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream> 
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ans(n);

    ans[0] = 1;

    // prefix => ans
    for(int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Suffix
    int suffix = 1;
    for(int i = n-2; i >= 0; i--)
    {
        suffix *= nums[i + 1];  // ith suffix
        ans[i] *= suffix;
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
