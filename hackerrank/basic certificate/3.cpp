#include<iostream>
#include<vector>
using namespace std;

long long sumsDivisibleByK(vector<int> a, int k)
{

    long long int i, j, size, count = 0;
    size = sizeof(a) / sizeof(a[0])-1;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (j > i)
            {
                if ((a[i] + a[j]) % k == 0)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k=5;
    cout<<sumsDivisibleByK(a,k);
    return 0;
}