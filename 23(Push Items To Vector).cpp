#include <iostream>
#include <vector>
using namespace std;

vector <string> PushItem(vector <string> v, string val)
{
  vector <string> vec(v.size()+1);

  // vec = v; // كنت بحاول أحط عناصر الفيكور بتاع ال main  في الفيكتور ده 🤣🤣

  for(int i = 0; i < v.size(); i++)
  {vec.at(i) = v.at(i);}

  vec.at(v.size()) = val;

  return vec;
}



int main()
{
  vector <string> namse = {"Ahmed", "Zaki", "Ibrahem"};
  namse = PushItem(namse, "Mostafa");
  

  for(string s : namse)
  {cout << s << endl;}

  return 0;
}