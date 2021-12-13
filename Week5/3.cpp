#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, temp;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
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
    int m, n;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++)
        cin >> arr1[i];
    quickSort(arr1, 0, m - 1);
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    quickSort(arr2, 0, n - 1);
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] > arr2[j])
            j++;
        else if (arr1[i] < arr2[j])
            i++;
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}