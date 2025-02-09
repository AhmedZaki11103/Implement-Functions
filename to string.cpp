#include <iostream>
using namespace std;

string ToString(int num)
{
  string st;
  while(num > 0)
  {
    char digit = '0' + num % 10;
    num /= 10;
    st = digit + st;
  }

  return st;
}


int main()
{
  cout << ToString(12351) << endl;
  return 0;
}

// result = result *10 + (c -'0');
/*
Digit | ASCII Value
-------------------
    0 | 48
    1 | 49
    2 | 50
    3 | 51
    4 | 52
    5 | 53
    6 | 54
    7 | 55
    8 | 56
    9 | 57
*/