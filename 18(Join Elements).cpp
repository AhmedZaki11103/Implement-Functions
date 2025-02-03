#include <iostream>
#include <vector>
using namespace std;

string Join(vector <string> names, string sep = " ")
{
  string result;

  for(int i = 0; i < names.size(); i++)
  {
    result = result + names.at(i);

    if(i < names.size() - 1)
    {
     result += sep;
    }
  }

  return result;
}

int main()
{
  cout << Join({"Ahmed", "Zaki", "AboElenen"}) << endl;
  cout << Join({"Ahmed", "Zaki", "AboElenen"} , ", ") << endl;
  cout << Join({"Ahmed", "Zaki", "AboElenen"} , " @ ") << endl;
  return 0;
}