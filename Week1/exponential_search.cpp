#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void exponential(vector<int>, int, int);
void linear(vector<int>arr, int i, int n, int num, int c)
{
    bool flag = false;
    for (; i < n; i++)
    {
        c++;
        if (arr[i] == num)
        {
            cout << "Present" << c << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "Not Present" << c << endl;
}
void exponential(vector<int>arr, int n, int num)
{
    int c = 0;
    if (arr[0] == num)
    {
        c++;
        cout << "Present" << c;
        return;
    }
    c++;

    int i = 1;
    while (i < n && arr[i] <= num)
    {
        c++;
        i *= 2;
    }
    linear(arr, int(i / 2), n, num, c);
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
        int num;
        cin >> num;
        exponential(arr, n, num);
        t--;
    }
}
