#include <iostream>
#include <vector>
using namespace std;

int zfill(vector<int> nums)
{
 int largest = 0;
 for(int i = 0; i < nums.size();i++)
 {
  if(largest < nums.at(i))
  {largest = nums.at(i);}
 }

 int count = 0;
 while(largest != 0)
 {
  largest /= 10;
  count++;
 }

cout << "befor: \n";
for (int i : nums)
{
  cout << i << endl;
}

cout << "\n========================\n";
cout << "\nAfter: \n";

for(int i = 0; i < nums.size(); i++)
{

  if(nums.at(i) < 10) //10
  {
  for(int j = count -1; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }
  
  else if(nums.at(i) < 100)//100
  {
  for(int j = count -2; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }


  else if(nums.at(i) < 1000)//1000
  {
  for(int j = count -3; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }


  else if(nums.at(i) < 10000)//10000
  {
  for(int j = count -4; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }


  else if(nums.at(i) < 100000)//100000
  {
  for(int j = count -5; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }


  else if(nums.at(i) < 1000000)//1000000
  {
  for(int j = count -6; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }


  else if(nums.at(i) < 10000000)//10000000
  {
  for(int j = count -7; j > 0; j--)
  {cout << 0;}

  cout << nums.at(i) << endl;
  }

}

 return 0;
}

int main()
{
  cout << zfill({1,5,150,7550,40200,350600,9000660});

  return 0;
}