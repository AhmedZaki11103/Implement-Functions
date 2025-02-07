#include <iostream>
#include <vector>
using namespace std;

vector<int> CreateRange(int begin, int end, bool IncludEnd = true)
{
  int nums = end - begin;
  if(IncludEnd){nums++;}
  
  vector<int> vec(nums);
  
  for(int i = 0; i < nums; i++)
  {
    vec.at(i) = begin;
    begin++;
  }
 return vec;
}

int main()
{
  vector<int> vec = CreateRange(3,10);        // 3 => 10
  vector<int> vec2 = CreateRange(3,10,false); // 3 => 9
  
  for(int s : vec)
  {cout << s << endl;}
   
  cout << "=========\n";

  for(int s : vec2)
  {cout << s << endl;}


  return 0;
}