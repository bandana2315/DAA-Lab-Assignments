#include<iostream>
#include<climits>
using namespace std;
int Partition(int ar[], int, int);
int Partition(int ar[], int lb, int ub) {
    int pivot = ar[lb];
    int start = lb;
    int end = ub;
    while (start < end) {
        while (ar[start] <= pivot) {
            start++;
        }
        while (ar[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(ar[start], ar[end]);
        }
    }
    swap(ar[lb], ar[end]);
    return end;
}
void quick_sort(int ar[], int lb, int ub) {
    if (lb < ub) {
        int  loc = Partition(ar, lb, ub);
        quick_sort(ar, lb, loc - 1);
        quick_sort(ar, loc + 1, ub);
    }
}
int main() {
    int t;
    cin >> t;
    int n, ar[1000];
    bool f = false;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        quick_sort(ar, 0, n - 1);
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (ar[j] == ar[i]) {
                    f = true;
                    break;

                }
            }

        }
        if (f == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        t--;
    }
}
