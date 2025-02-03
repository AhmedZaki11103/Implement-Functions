#include <iostream>
#include <string>
using namespace std;

string reverse_st(string st) // Ahmed => demhA
{
  string result;
  for(int i = st.length() -1; i >= 0; i--)
  { 
    if(st[i] == ' ')
    {continue;}

    result += st[i];
  }

return result;
}


int main()
{
 cout << reverse_st("Ahmed") << endl; //demhA
 cout << reverse_st("Ahmed Zaki") << endl; // ikazd emhA
  return 0;
}