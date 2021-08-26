#include<bits/stdc++.h>
using namespace std;
int c = 0;
int linearSearch(int ar[], int, int, int);
int exponential_search(int ar[], int n, int key) {
    if (ar[0] == key) {
        c++;
        return 0;
    }
    else {
        c++;
        int i = 1;
        while (i < n && ar[i] <= key)
        {
            c++;
            i = i * 2;
            return linearSearch(ar, i / 2, n, key);
        }
    }
    return -1;
}
int linearSearch(int ar[], int index, int n, int key) {

    for (int i = index; i < n; i++) {
        if (ar[i] == key)
            c++;
        return i;
    }
    c++;
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

        if (exponential_search(ar, n, key) > 0) {
            cout << " present " << c << endl;
            c = 0;
        }
        else {
            cout << " not present " << c << endl;
            c = 0;
        }
        t--;
    }
}