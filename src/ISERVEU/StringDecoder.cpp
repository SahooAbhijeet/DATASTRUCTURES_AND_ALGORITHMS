#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decoder(string s)
    {
        int count = 0;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    res += (char)(64 + count);
                    count = 0;
                }
            }
            if (count > 0)
            {
                res += (char)(64 + count);
            }
        }
        return res;
    }
};

int main()
{
    Solution obj;
    cout << obj.decoder("111000111");
}