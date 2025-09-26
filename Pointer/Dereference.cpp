#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    int **parentPtr = &ptr;

    // case 1:
    cout << *(&a) << endl;  //print value of a
    cout << *(ptr) << endl;  //this also print value of a

    // case 2:
    cout << *(parentPtr) << endl;  //print address stored in ptr
    cout << ptr << endl;  //print address of ptr

    // case 3:  double dereference
     cout << **(parentPtr) << endl; // after 1st dereference pointer point ptr and after 2nd dereference pointer point to a.   so in this case **(parentPtr) print a's value = 10
}
