#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> vec;

    for(int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        vec.push_back(x);
    }

    int ans = 0;

    for(int val : vec)
    {
        ans ^= val;
    }

    cout << "Single number is: " << ans << endl;
    return 0;
}
