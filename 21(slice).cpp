#include <iostream>
using namespace std;


string slice(string st, int start, int end, int step = 1, bool rev = false)
{
  string result;
  if (rev)
  {
    for(int i = end; i >= start; i -= step) {result += st[i];}
    return result;
  }

  for(int i = start; i < end; i += step) 
  {
    result+= st[i];
  }
  return result;
}


int main()
{
  cout << slice("Ahmed Mahmoud Zaki", 0, 5) << endl;  // Ahmed
  cout << slice("Ahmed Mahmoud Zaki", 7, 12, 1, true) << endl;  // duomha
  cout << slice("Ahmed Mahmoud Zaki", 0, 8, 2) << endl; // AmdMh // 0 2 4 6 8
  cout << slice("Ahmed Mahmoud Zaki", 0, 8, 2, true) << endl; // hMdmA // 8 6 4 2 0
  return 0;
}