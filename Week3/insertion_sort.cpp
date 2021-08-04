#include<iostream>
using namespace std;
void print_array(int ar[], int);
void insertion_sort(int ar[], int n) {
    int temp, comparisons = 0, shift = 0, j;
    for (int i = 1; i < n; i++) {
        temp = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > temp) {
            comparisons++;
            ar[j + 1] = ar[j];
            shift++;
            j--;
        }
        ar[j + 1] = temp;
        shift++;
    }
    print_array(ar, n);
    cout << "Comparisons=" << comparisons << endl;
    cout << "shifts=" << shift << endl;
}
void print_array(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    int n, ar[1000];
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        insertion_sort(ar, n);
    }
}
