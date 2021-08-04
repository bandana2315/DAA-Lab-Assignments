#include<iostream>
#include<cstdlib>
using namespace std;
void count_pair(int ar[], int n, int key) {
    int c = 0;
    bool f = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (abs(ar[i] - ar[j]) == key) {
                c++;
                f = true;
            }
        }
    }
    if (f == true) {
        cout << c << endl;
    }
    else {
        cout << "not found" << endl;
    }
}
int main() {
    int t;
    cin >> t;
    int n, ar[1000];
    int key;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cin >> key;
        count_pair(ar, n, key);

    }
}
