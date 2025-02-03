#include <iostream>
using namespace std;


int WordsCount(string st)
{
  int count = 1;

  for(char c : st)
  {
    if(!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
      {count++;}
  }
  return count;
}

int main()
{
  cout << WordsCount("Ahmed Mahmoud Zaki AboElenen AlAbbasy") << endl;
  return 0;
}