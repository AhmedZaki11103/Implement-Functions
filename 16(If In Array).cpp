#include <iostream>
#include <vector>
using namespace std;

bool InArray(vector<int> vec, int target)
{
  for(int i = 0; i < vec.size(); i++)
  {
    if(vec.at(i) == target) {return true;}
  }
  return false;
}

int main()
{
  cout << boolalpha; //😮😯
  cout << InArray({10,20,30,40,50,55}, 55) << endl; // 1
  cout << InArray({10,20,30,40,50,55}, 66) << endl; // 0

  return 0;
}