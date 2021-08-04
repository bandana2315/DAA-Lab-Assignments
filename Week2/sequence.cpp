#include<iostream>
using namespace std;
void sequence(int ar[], int n) {
    int sum;
    bool f = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 0; k < n; k++) {
                if (ar[i] + ar[j] == ar[k]) {
                    cout << i + 1 << "," << j + 1 << "," << k + 1 << endl;
                    f = true;
                }
            }
        }
    }
    if (f == false) {
        cout << "no sequence found" << endl;
    }

}
int main() {
    int t;
    cin >> t;
    int n;
    int ar[1000];
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {

            cin >> ar[i];
        }
        sequence(ar, n);

    }
}
