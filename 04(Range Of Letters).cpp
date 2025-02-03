#include <iostream>
using namespace std;

void  RangeOfLetters(char begin = 'A', char end = 'Z')
{
  // int range = int(end) - int(begin);
  // cout << range;

  for( int i = begin; i <= end; i++)
  {
    cout << char(i) << " | " << i << endl;
  }
}

int main()
{
  RangeOfLetters();
  return 0;
}