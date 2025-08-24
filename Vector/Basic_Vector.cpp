#include<iostream>
#include<vector>
using namespace std;

int main()
{

    // 1st type to define vector
    vector<int> vec(5, 0);

    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // 2nd type to define vector
    vector<char> vec2 = {'a', 'b', 'c', 'd'};

    for(char i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    // 3rd type to define vector
    vector<int> vec3;

    cout << "Size of vec3 is: " << vec3.size() << endl;
    cout << vec3[0] << endl;  //it will give segmentation fault, because there is no element in vec3
}
