// Pattern 11
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include <iostream>
using namespace std;

int main()
{
    int rows = 5, count = 0, count1 = 0, k = 0;

    for (int i = 1; i <= rows; ++i)
    {
        for (int space = 1; space <= rows - i; ++space)
        {
            cout << "  ";
            ++count;
        }

        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                cout << i + k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i + k - 2 * count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
    return 0;
}
