#include <iostream>
#include <vector>
using namespace std;

vector<string> FillVector(int nums, string val)
{
  vector<string> vec(nums);
  
  for(int i = 0; i < nums; i++)
  {
    vec.at(i) = val;
  }
 return vec;
}

int main()
{
  vector<string> vec = FillVector(4, "Zaki");
  
  for(string s : vec)
  {
   cout << s << endl;
  }

  return 0;
}