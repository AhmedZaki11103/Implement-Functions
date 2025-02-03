#include <iostream>
using namespace std;


string TrimString(string st, string option = "All", char ch =' ')
{
  string result;
  int firstChars = 0;
  int lastChars = 0;

  for(char c : st)
  {
    if(c == ch) {firstChars++;}
    else {break;}
  }

  for(int i = st.length() -1; i >= 0; i--)
  {
    if(st[i] == ch) {lastChars++;}
    else {break;}
  }
  
  
  if(option == "Left")
    {
      for(int i = firstChars; i < st.length(); i++)
      {result += st[i];}
    }

  if(option == "Right")
    {
      for(int i = 0; i <  st.length() - lastChars; i++)
      {result += st[i];}
    }

  if(option == "All")
    {
      for(int i = firstChars; i < st.length() - lastChars; i++)
      {result += st[i];}
    }


  return result;
}




int main()
{
  cout << TrimString("#####Ahmed###", "Left", '#') << endl;
  cout << TrimString("####Ahmed###", "Right", '#') << endl;
  cout << TrimString("###Ah#med###", "All", '#') << endl;
  cout << TrimString("###Ahmed###", "All", '#') << endl;
  return 0;
}

// ###Ahmed### => Ahmed
// ###Ahmed### => Ahmed###
// ###Ahmed### => ###Ahmed
