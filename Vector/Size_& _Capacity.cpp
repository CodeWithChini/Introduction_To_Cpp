#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Displaying size and capacity
    cout << "Size: " << vec.size() << endl;         // Number of elements
    cout << "Capacity: " << vec.capacity() << endl; // Allocated storage

    // Adding more elements to see capacity change
    vec.push_back(40);
    vec.push_back(50);

    cout << "After adding more elements:" << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    return 0;
}
