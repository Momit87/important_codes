#include <bits/stdc++.h>
#include <string.h>
#define ll long long int
using namespace std;
int main()
{
    int n, m, i, l;
    cin >> n >> m;
    int a[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (l = 0; l < m; l++)
    {
        int find, f = 0,found;
        cin >> find;
        int left, right, middle;
        left = 0;
        right = n - 1;

        for (; left <= right;)
        {
            middle = (left + right) / 2;
            if (a[middle] == find)
            {
                found=a[middle];
                f = 1;
                break;
            }
            else if (a[middle] > find)
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
            }
        }
        if (f == 1)
        {
            cout << "found and The index is : "<<found << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}