#include <iostream>
#include <vector>
using namespace std;

vector <string> ReplaceSt(vector <string> sts, string old, string ne, int count = 1)
{
  for(int i = 0; i < sts.size(); i++)
  {
    if (sts.at(i) == old && count > 0)
       {sts.at(i) = ne; count--;} 
  }
  return sts;
}


int main()
{

  vector <string> names = {"Zaki", "Ahmed", "mahmoud", "Zaki"};
  names = ReplaceSt(names, "Zaki", "GG", 1);
  
  for(string name : names)
  {
    cout << name << endl;
  }
  return 0;
}