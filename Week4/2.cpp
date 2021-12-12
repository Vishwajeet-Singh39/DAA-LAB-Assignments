#include <iostream>
using namespace std;
int compare = 0;
int swaps = 0;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, temp;
    for (int j = low; j <= high - 1; j++)
    {
        compare++;
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            swaps++;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    swaps++;
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
}
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        quickSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cout << "Comparisions: " << compare << endl;
        cout << "Swaps: " << swaps;
        compare = 0;
        swaps = 0;
    }
}