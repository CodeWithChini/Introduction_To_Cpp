#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < n ; i++)
    {
        int product = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product *= nums[j];
            }
        }
        ans.push_back(product);
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
