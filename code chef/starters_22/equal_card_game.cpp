#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll k;
        cin >> k;
        ll i = 1;

        if (52 % k == 0)
            cout << "0\n";

        else
        {
            while (k * i < 52)
            {
                i++;
            }
            ll remove = 52 - k * (--i);
            cout << remove << endl;
        }
    }
    return 0;
}