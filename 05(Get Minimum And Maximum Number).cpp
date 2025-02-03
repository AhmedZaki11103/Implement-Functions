#include <iostream>
#include <vector>
using namespace std;

int GetMinimumNumber (vector <int> vec)
{
  int min = vec.at(0);
  for(int i = 1; i < vec.size(); i ++)
  {
    if(min > vec.at(i))
    {min = vec.at(i);}
  }
  return min;
}

int GetMaximumNumber (vector <int> vec)
{
  int max = vec.at(0);
  for(int i = 1; i < vec.size(); i ++)
  {
    if(max < vec.at(i))
    {max = vec.at(i);}
  }
  return max;
}


int main()
{
 cout << "Minimum Number Is : " << GetMinimumNumber({-50,5,79,200,300,450,6,8,0}) << endl;
 cout << "Maximum Number Is : " << GetMaximumNumber({-50,5,79,200,300,450,6,8,0})<< endl;

  return 0;
}