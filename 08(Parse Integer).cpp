#include <iostream>
using namespace std;

int prase_int(string st)
{
  int result = 0;
  for( char i : st)
  {
    if(i >= '0' && i <= '9') {result = result * 10 +(i - '0') ;}
  }

  return result;
}

int main()
{
  cout << "prase int: " << prase_int("123Ahme46d") << endl;
  return 0;
}