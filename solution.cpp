#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                c += min(c0, c1 + h);
            }
            else
            {
                c += min(c0 + h, c1);
            }
        }
        cout << c << endl;
    }
 
    return 0;
}
