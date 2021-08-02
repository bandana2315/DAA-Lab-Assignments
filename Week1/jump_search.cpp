#include<bits/stdc++.h>
using namespace std;
int c = 0;
int jump_search(int ar[], int n, int key) {
    int jump = sqrt(n);
    int steps = jump;
    int prev = 0;

    while (ar[int(min(steps, n) - 1)] < key) {
        c++;
        prev = steps;
        steps += jump;

        if (prev >= n)
            return -1;
    }

    while (ar[int(prev)] < key) {
        c++;
        prev += 1;
        if (prev == min(steps, n))
            return -1;
    }

    if (ar[int(prev)] == key)
        c++;
    return prev;

    return -1;
}

int main() {
    int t, n, key;
    cin >> t;
    int ar[1000];

    while (t > 0) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cin >> key;
        int result = jump_search(ar, n, key);
        if (result == -1) {
            cout << " not present " << c << endl;
            c = 0;
        }
        else {
            cout << "  present " << c << endl;
            c = 0;
        }
        t--;
    }
}
