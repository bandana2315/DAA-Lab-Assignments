#include <bits/stdc++.h>
using namespace std;
void find_pair(vector<int>& ar, int n, int key) {
    sort(ar.begin(), ar.end());
    int left = 0;
    int right = n - 1;
    int flag = 0;

    while (left <= right) {
        if (ar[left] + ar[right] == key) {
            flag = 1;
            cout << ar[left] << " " << ar[right] << ",";
            left++;
            right--;
        }
        else if (ar[left] + ar[right] > key) {
            right--;
        }
        else if (ar[left] + ar[right] < key) {
            left++;
        }

    }
    if (flag == 0)
        cout << "NO Such Pair Exist" << endl;
    else {
        cout << endl;
    }

}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        int key;
        cin >> key;
        find_pair(ar, n, key);
    }
    return 0;
}
