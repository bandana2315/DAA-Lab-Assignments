#include<iostream>
#include<climits>
using namespace std;
void print_array(int ar[], int);
void selection_sort(int ar[], int n)
{
    int comp = 0, swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            comp++;
            if (ar[j] < ar[min_index])
            {
                min_index = j;
            }
        }

        swap(ar[i], ar[min_index]);
        swaps++;

    }

    print_array(ar, n);
    cout << "Comparisons=" << comp << endl;
    cout << "swaps=" << swaps << endl;
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

        selection_sort(ar, n);
    }
}
