#include <iostream>
using namespace std;

void reverse(const string& str)
{
    size_t numOfChars = str.size();

    if(numOfChars == 1)
    {
      cout << str << endl;
    }
    else
    {
      cout << str[numOfChars - 1];

      reverse(str.substr(0, numOfChars - 1));
    }
  }

int main()
{
  string str;

  cout << " Please enter a string " << endl;
  getline(cin, str);

  reverse(str);

  return 0;
}
