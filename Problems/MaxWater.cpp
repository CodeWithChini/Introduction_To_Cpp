#include<iostream>
using namespace std;

int maxWater(int height[], int n)
{
    int maxWater = 0; //ans

    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1; j<n ; j++)
        {
            int ht = min(height[i], height[j]);
            int width = j - i;
            int area = ht * width;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    int height[n];
    cout<<"Enter the heights: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << "for line " << i << ": ";
        cin>>height[i];
    }
    cout<<"The maximum water that can be contained is: "<<maxWater(height, n);
    return 0;
}
