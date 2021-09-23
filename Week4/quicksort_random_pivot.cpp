#include<bits/stdc++.h>
using namespace std;
void quicksort(int arr[], int, int);
int partition(int arr[], int, int);
string display(int arr[], int);
int cmp = 0, swp = 0, j;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
string display(int arr[], int size) {
    string res;
    for (int i = 0; i < size; i++)
        res += to_string(arr[i]) + " ";


    return res;
}
void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = partition(arr, l, r);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, r);
    }
}
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (j = l; j <= r - 1; j++)
    {
        cmp++;
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swp++;
        }
    }
    swap(&arr[i + 1], &arr[r]);
    swp++;
    return (i + 1);
}
int main()
{
    int T, i, j;
    cin >> T;
    string res[T];
    for (i = 0; i < T; i++)
    {
        int size;
        cin >> size;
        int arr[size];
        for (j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        cmp = 0, swp = 0;
        quicksort(arr, 0, size - 1);
        string s = display(arr, size);

        res[i] = s + " \ncomparisions=" + to_string(cmp) + "\nSwaps =" + to_string(swp);
    }

    for (int m = 0; m < T; m++)
    {

        cout << res[m];
        cout << endl;

    }
}