#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    cout << "Size = " << vec.size() << endl;  //this function returns the size of vector

    vec.push_back(7);  //this function adds an element at the end of vector
    vec.push_back(8);
    cout << "push Size = " << vec.size() << endl;

    vec.pop_back();  //this function removes the last element of vector
    cout << "pop Size = " << vec.size() << endl;

    cout << "Front value = " << vec.front() << endl;  //this function returns the first element of vector
    cout << "back value = " << vec.back() << endl;   //this function returns the last element of vector

    cout << vec.at(2) << endl;  //this function returns the element at the given index

    for(int i : vec)
    {
        cout << i << " ";
    }
}
