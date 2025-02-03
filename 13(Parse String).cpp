#include <iostream>
using namespace std;


string ParseString(string st)
{
  string result;
  for(int i = 0; i < st.length(); i++)
  {
    if(st[i] == '=') 
    {
      result += ": ";
      continue; 
    }

    else if(st[i] == '&') {st[i] = '\n';}
    
    result += st[i];
  }

  return result;
}


int main()
{
  cout << ParseString("Name=Ahmed&Age=21&country=Egybt") << endl;
  return 0;
}
/*
name=Osama&age=43&country=Egypt

name: Osama
age: 40
country: Egypt
*/
