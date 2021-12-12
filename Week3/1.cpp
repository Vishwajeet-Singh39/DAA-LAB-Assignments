#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, shift = 0, comp = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int v, j;
        for (int i = 1; i < n; i++)
        {
            v = arr[i];
            j = i;
            while (arr[j - 1] > v && j >= 1)
            {
                shift++;
                comp++;
                arr[j] = arr[j - 1];
                j--;
            }
            shift++;
            arr[j] = v;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cout << "comparisions = " << comp << endl;
        cout << "shifts = " << shift << endl;
    }
    return 0;
}
