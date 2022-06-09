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
        while (1)
        {
            ll prod = pow(2, i);
            if (k / prod == 1 && k % prod == 0)
            {
                cout << i << "\n";
                break;
            }

            else if (prod > k)
            {
                cout << "0\n";
                break;
            }

            i++;
        }
    }
    return 0;
}