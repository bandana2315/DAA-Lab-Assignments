#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&, int, int, int);
void sort(vector<int>& arr, int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = l + (r - l) / 2;
        sort(arr, l, mid);
        sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void merge(vector<int>& arr, int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;
    vector<int> t(r - l + 1);
    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
            t[k++] = arr[i++];
        else
            t[k++] = arr[j++];
    }
    while (i <= m)
        t[k++] = arr[i++];
    while (j <= r)
        t[k++] = arr[j++];
    for (i = l, j = 0; i <= r; i++, j++)
    {
        arr[i] = t[j];
    }

}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, 0, n - 1);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
        t--;
    }
}
