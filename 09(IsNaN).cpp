#include <iostream>
using namespace std;

bool IsNaN(string st)
{
  bool test;

  for (char c : st)
  {
    if(c >= '0' && c <= '9') {test = false;}
    
    else {test = true; break;}
  }

  return test;
}

int main()
{
  cout << IsNaN("12354") << endl;
  cout << IsNaN("1235AS4") << endl;
  cout << IsNaN("1235 4") << endl;

  return 0;
}