#include <iostream>
using namespace std;

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
      return true;
}
int main() {
   string str = "raisa";
   if (check_number(str))
      cout<<str<< " is a number"<<endl;
   else
      cout<<str<< " is not a number"<<endl;
      string str1 = "1234";
   if (check_number(str1))
      cout<<str1<< " is a number";
   else
      cout<<str1<< " is not a number";
}

