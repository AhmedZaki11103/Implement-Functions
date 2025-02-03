#include <iostream>
using namespace std;

string Clean_String(string st, bool KeepNums = true)
{
  string result;

  for(char c : st)
  {
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '_')
    {result += c;}
 
    else if(KeepNums && (c >= '0' && c <= '9'))
    {result += c;}
  }

  return result;
}



int main()
{

  cout << Clean_String("Ahmed_Zaki_#@!1103")<< endl;        //Ahmed_Zaki_1103
  cout << Clean_String("Ahmed_Zaki#@!1103", false)<< endl; //Ahmed_Zaki

  // cout <<  int('_') << endl; //95
  // cout <<  int('0') << endl; //48
  // cout <<  int('9') << endl; //57
  // cout <<  int('A') << endl; //65
  // cout <<  int('Z') << endl; //90
  // cout <<  int('a') << endl; //97
  // cout <<  int('z') << endl; //122

  return 0;
}