#include<iostream>
using namespace std;
int binarySearch(int ar[], int n, int key, int firstSearch) {
    int s = 0;
    int e = n - 1;
    int result = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (key == ar[mid]) {
            result = mid;

            if (firstSearch==true) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        else if (key < ar[mid]) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    int key;
    int n, ar[1000];
    while (t > 0) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cin >> key;

        int first = binarySearch(ar, n, key, true);
        int last = binarySearch(ar, n, key, false);
        int count = last - first + 1;
        if (first != -1) {
            cout << key << "-" << count << endl;
        }
        else {
            cout << "Key not present" << endl;
        }
        t--;
    }
}
