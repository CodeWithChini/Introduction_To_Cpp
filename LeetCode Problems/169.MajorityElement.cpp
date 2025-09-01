// Moore's Voting Algorithm

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums)
{
   int freq = 0, ans = 0;

   for(int i = 0; i < nums.size(); i++)
   {
       if(freq == 0)
       {
           ans = nums[i];
       }

       if(nums[i] == ans)
       {
           freq++;
       }
       else
       {
           freq--;
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

    int ans = majorityElement(vec);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
