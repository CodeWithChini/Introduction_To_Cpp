#include<iostream>
using namespace std;

void FahrenhitToCelsius(int s, int e, int w)
{
    int start = s;
    while(start <= e)
    {
        int c = (start - 32) * 5 / 9;
        cout << start << " " << c << endl;
        start += w;
    }
}

int main()
{
    int start, end, step;
    cin >> start >> end >> step;

    FahrenhitToCelsius(start, end, step);
}
