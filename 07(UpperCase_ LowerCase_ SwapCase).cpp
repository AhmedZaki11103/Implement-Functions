#include <iostream>
using namespace std;

string UpperCase(string st)
{
  string result;
  for(int i = 0; i < st.length(); i++)
  {
    if(st[i] >= 'a' && st[i] <= 'z')
      {st[i] -= 32;}

      result += char(st[i]);
  }
  return result;
}
//================================================
string LowerCase(string st)
{
  string result;
for(int i = 0; i < st.length(); i++)
  {
    if(st[i] >= 'A' && st[i] <= 'Z')
      {st[i] += 32;}

      result += char(st[i]);
  }
  return result;
}
//================================================
string SwapCase(string st)
{
  string result;

  for(int i = 0; i < st.length(); i++)
  {
  if(st[i] >= 'A' && st[i] <= 'Z') {st[i] += 32;}
      
  else if(st[i] >= 'a' && st[i] <= 'z') {st[i] -= 32;}
  
  result += char(st[i]);
  }

  return result;
}
//================================================
int main()
{
  cout << UpperCase("ahmed zaki99") << endl;   // AHMED ZAKI99
  cout << LowerCase("ZAKI@11103") << endl;     // zaki@11103
  cout << SwapCase("AHMEDzaki@11103") << endl; // ahmedZAKI@11103


  return 0;
}