#include <iostream>
using namespace std;


string GetSubString(string st, int start, int end, bool countSpace = true)
{
  string result;

  for(int i = start; i <= end; i++)
  {
    if(st[i] == ' ' && countSpace) {end++;}
    result += st[i];
  }

  return result;
}



int main()
{
  cout << GetSubString("Ahmed Mahmoud Zaki", 0, 12) << endl;

  return 0;
}