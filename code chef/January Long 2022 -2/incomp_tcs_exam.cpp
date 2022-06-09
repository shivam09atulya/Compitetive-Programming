//find out why the output is sigerterm and not as expected

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll drag[3], sloth[3], sumd = 0, sums = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> drag[i];
            sumd += drag[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cin >> sloth[i];
            sums += sloth[i];
        }

        if (sumd > sums)
            cout << "Dragon \n";

        else if (sums > sumd)
            cout << "Sloth \n";

        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (drag[i] > sloth[i])
                {
                    cout << "Dragon\n";
                    break;
                }

                else if (sloth[i] > drag[i])
                {
                    cout << "Sloth\n";
                    break;
                }
            }
            if (drag[2] == sloth[2])
                cout << "Tie\n";
        }
    }

    return 0;
}
// hello