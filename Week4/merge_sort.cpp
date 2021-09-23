#include<bits/stdc++.h>
using namespace std;
string display(int arr[], int);
void mergesort(int arr[], int, int);
void mergeArray(int arr[], int, int, int);
int inversion_count(int arr[], int);
int cmp = 0;
string display(int arr[], int size) {
    string res;
    for (int i = 0; i < size; i++)
        res += to_string(arr[i]) + " ";


    return res;
}
int inversion_count(int arr[], int size)
{
    int i, j, inv_count = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                inv_count++;
            }
        }

    }

    return inv_count;

}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        mergeArray(arr, l, m, r);
    }
}
void mergeArray(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }
    i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
        cmp++;

    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
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
        cmp = 0;
        int inv = inversion_count(arr, size);
        mergesort(arr, 0, size - 1);
        string s = display(arr, size);

        res[i] = s + " \ncomparisions=" + to_string(cmp) + "\nInversion =" + to_string(inv);
    }

    for (int m = 0; m < T; m++)
    {

        cout << res[m];
        cout << endl;

    }
}
