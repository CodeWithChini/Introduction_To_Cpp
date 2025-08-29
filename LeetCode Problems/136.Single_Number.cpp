#include<iostream>
#include<vector>
using namespace std;

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

    int ans = 0;
    for(int val : vec)
    {
        ans ^= val;  //XOR operation
    }

    cout << "Single Number is: " << ans << endl;
    return 0;
}
