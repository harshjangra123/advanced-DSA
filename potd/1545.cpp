#include <bits/stdc++.h>
using namespace std;
string invert(string g)
{
    string ans = "";
    for (int i = 0; i < g.size(); i++)
    {
        if (g[i] == '0')
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    return ans;
}

string helper(int n)
{
    if (n == 1)
    {
        return "0";
    }

    string x = helper(n - 1) + "1";
    string y = invert(helper(n - 1));
    reverse(y.begin(), y.end());

    return x + y;
}

int main()
{

    cout<<helper(4);
}