#include <iostream>
#include <string>
#include <vector> 
#include <string>

using namespace std;

bool Permutation(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    if(s.length() != t.length())
    {
        return false;
    }
  
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != t[i])
        {
            return false;
        }

    }
    return true;
}

int main()
{
    string s1 = "dog";
    string s2 = "gods";

    cout << Permutation(s1, s2) << endl;

    return 0;

}