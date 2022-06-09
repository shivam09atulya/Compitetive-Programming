
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> addOne(vector<int> digits)
{

    long long int size;
    size = sizeof(digits) / sizeof(digits[0]);
    long long int a[size], i = size, sum = 0;

    while (i--)
    {
        sum += a[i] * abs(pow(10, i - size));
    }

    sum = sum + 1;
}


int main()
{
    vector <int > digits={1,2,9};
    // addOne(digits);

    int array[6];
    int number = 123456;
    for (int i = 5; i >= 0; i--)
    {
        array[i] = number % 10;
        number /= 10;
    }
    return 0;
}