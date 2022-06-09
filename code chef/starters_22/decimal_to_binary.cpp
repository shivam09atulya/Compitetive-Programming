#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> bin;
    int dec;
    cin >> dec;

    int quo = 1, i = 0;
    while (quo != 0)
    {
        bin.push_back(dec % 2);
        dec = dec / 2;
        quo = dec;
    }

    int size = sizeof(bin) / sizeof(bin[0]);
    reverse(bin.begin(), bin.end());

    for (int j = 0; j < bin.size(); j++)
        cout << " " << bin[j];
    cout << endl;
    return 0;
}