#include <iostream>
using namespace std;


string GenerateCharacters( string st ,bool caps = true, bool laws = false, bool nums = false, bool AtDot = false)
{
  string result;

  for(int i = 0; i < st.size(); i++)
  {
    if(st[i] >= 'A' && st[i] <= 'Z' && caps)
      {result += st[i];}

    if(st[i] >= 'a' && st[i] <= 'z' && laws) 
      {result += st[i];}

    if(st[i] >= '0' && st[i] <= '9' && nums) 
      {result += st[i];}

    if((st[i] == '@' || st[i] <= '.') && AtDot) 
      {result += st[i];}
  }

  return result;
}


int main()
{
  cout << GenerateCharacters("AhmedZaki11103@gmail.com") << endl; 
  cout << GenerateCharacters("AhmedZaki11103@gmail.com", true, true) << endl; 
  cout << GenerateCharacters("AhmedZaki11103@gmail.com", true, true, true) << endl; 
  cout << GenerateCharacters("AhmedZaki11103@gmail.com", true, true, true, true) << endl; 
  return 0;
}