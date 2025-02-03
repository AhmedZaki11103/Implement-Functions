#include <iostream>
using namespace std;

bool FirstCapital(string st)
{
  bool allcaps = true;

  for(int i = 0; i < st.length(); i++)
  {
    if(st[i] == ' ')
    {
      if(!(st[i+1] >= 'A' && st[i+1] <= 'Z'))
      {allcaps = false;}
    }
    if(!(st[0] >= 'A' && st[0] <= 'Z'))
      {allcaps = false;}

    if(!allcaps)
    {
      return false;
    }
  }

  return allcaps;
}

int main()
{
  cout << FirstCapital("Ahmed Mahmoud Zaki AboElenen AlAbbasy") << endl; // 1
  cout << FirstCapital("Ahmed Mahmoud zaki AboElenen AlAbbasy") << endl; // 0
  return 0;
}