#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int freq[26];
        for (int i = 0; i < 26; i++)
            freq[i] = 0;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i] - 97]++;
        }
        int max = 1;
        int j = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > max)
            {
                flag = 1;
                max = freq[i];
                j = i;
            }
        }
        if (flag == 0)
            cout << "No duplicates present" << endl;
        else
        {
            cout << char(j + 97) << "-" << max << endl;
        }
    }

    return 0;
}
