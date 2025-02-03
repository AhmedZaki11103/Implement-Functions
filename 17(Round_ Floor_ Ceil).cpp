#include <iostream>
using namespace std;

int round(double num)
{
  int HNum = num;
  if(num - HNum >= 0.5) {return HNum + 1;}
  return HNum;
}
// =======================================

int floor(double num)
{
  int HNum = num;
  return HNum;
}
//========================================

int ceil(double num)
{
  int HNum = num;
  if(num == HNum) {return num;}
  return HNum +1;
}
//========================================

int main()
{
  cout << round(2.5) << endl; // 3
  cout << round(2.6) << endl; // 3
  cout << round(2.45) << endl;// 2

  cout << "==================\n";
  
  cout << floor(2.6) << endl; // 2
  cout << floor(2.5) << endl; // 2
  cout << floor(2.45) << endl;// 2
  
  cout << "==================\n";
  
  cout << ceil(2.6) << endl; // 3
  cout << ceil(2.5) << endl; // 3
  cout << ceil(2.45) << endl;// 3
  cout << ceil(2.00) << endl;// 2

  return 0;
}