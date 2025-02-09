#include <iostream>
using namespace std;

string ToString(int num)
{
  string st;
  while(num > 0)
  {
    char digit = '0' + num % 10;
    num /= 10;
    st = digit + st;
  }

  return st;
}

string MoneyFormat(int num)
{
  string result;
  string st = ToString(num); 
  int count = 0;
  for(int i = st.length() - 1; i >= 0 ; i--)
  { 
    result = st[i] + result;
    count++;
    if(count % 3 == 0 && i != 0)
    {
      result = "," + result ;
    }
   
  }

  return result;
}

int main()
{
  cout << MoneyFormat(10) << endl;
  cout << MoneyFormat(100) << endl;
  cout << MoneyFormat(1000) << endl;
  cout << MoneyFormat(10000) << endl;
  cout << MoneyFormat(100000) << endl;
  cout << MoneyFormat(1000000) << endl;
  cout << MoneyFormat(10000000) << endl;
  cout << MoneyFormat(100000000) << endl;
  return 0;
}





// cout << "st = " << st << endl;
  // cout << "num = " << num << endl;
  // for()