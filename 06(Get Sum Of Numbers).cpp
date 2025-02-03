#include <iostream>
#include <vector>
using namespace std;

int GetSumOfNumbers(vector <int> nums, char op = '+')
{
  int result = nums[0];
  
  for(int i = 1; i < nums.size(); i++)
  {
    if(op == '+') // [+]
    {result += nums[i];}

    else if(op == '-') // [-] 
    {result -= nums[i];}

    else if(op == '*') // [*]
    {result *= nums[i];}

    else if(op == '/') // [/]
    {result /= nums[i];}
  }


 return result;
}

int main()
{
  cout << GetSumOfNumbers({10,20,30,40}) << endl;       // 100
  cout << GetSumOfNumbers({10,20,30,40}, '+') << endl;  // 100
  cout << GetSumOfNumbers({50,20,10}, '-') << endl;     // 20
  cout << GetSumOfNumbers({10,20,10}, '*') << endl;     // 2000
  cout << GetSumOfNumbers({3000,100}, '/') << endl;     // 30

  return 0;
}
