#include <iostream>
using namespace std;



bool StartWith(string st, string prefix, bool sensitive = true)
{
  if(st.length() < prefix.length()){return false;}

  for(int i = 0; i < prefix.length();i++)
  {

    if(prefix[i] != st[i] && prefix[i] != st[i+32] && prefix[i+32] != st[i])
    {return false;}

    else if (!sensitive && prefix[i] != st[i]){return false;}
  }
  return true;
}


int main()
{
  cout << boolalpha;
  cout << StartWith("Ahmed Mahmoud Zaki", "Ahmed") << endl;        // true
  cout << StartWith("Ahmed Mahmoud Zaki", "ahmed") << endl;        // false
  cout << StartWith("Ahmed Mahmoud Zaki", "AhmEd") << endl;        // false
  cout << StartWith("Ahmed Mahmoud Zaki", "ahmed", false) << endl; // false
  cout << StartWith("AhMed Mahmoud Zaki", "AHmeD", true) << endl;  // false
  cout << StartWith("AhM", "AHmeD", true) << endl;  // false
  return 0;
}