#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N, X;
        cin >> N >> X;

        ll A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];

        sort(A, A + N, greater<int>());
        int sum = 0, count = 0;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            count++;
            if (sum >= X)
                break;
        }
        if (count > 0 && sum >= X)
            cout << count << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}
