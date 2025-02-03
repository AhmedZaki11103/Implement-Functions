#include <iostream>
using namespace std;

string repeat (string st, int num = 2, string sep = "", bool end_sep = true)
{
  for(;num > 0; num--)
  {
    cout << st /*<< endl*/;
    if(num > 1)
    {cout << sep;}
  }
  if(end_sep)
  {cout << sep;}

  return st;
}

int main ()
{
  repeat("Ahmed Zaki", 3, "||", false);
  return 0;
}