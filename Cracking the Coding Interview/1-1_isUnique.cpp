#include <iostream>
#include <string>
#include <vector> 

using namespace std;

bool isUniqueChars(string str) {

    if (str.length() > 128)
    {
        return false;
    }

    vector<bool> char_set (128, false);
     
    for(int i = 0; i < str.length(); i++)
    {
      int val = str[i];
      if(char_set[val])
      {
          return false;
      }
      char_set[val] = true;
    }

    return true;
}
int main() {
    string t1 = "unique"; // should return false
    string t2 = "algorithm";
    string t3 = "sliecaq";

    cout << isUniqueChars(t1) << endl;
    cout << isUniqueChars(t2) << endl;
    cout << isUniqueChars(t3) << endl;
    

    return 0;
}