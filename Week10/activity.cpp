#include <bits/stdc++.h> 
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
	vector<int>ans; int i, j;
	int c = 1; i = 1;
	ans.push_back(i);
	for (j = 1; j < n; j++) {
		if (s[j] >= f[i]) {
			ans.push_back(j + 1); c++;
			i = j;
		}
	}
	cout << endl << "No. of non-conflicting activities:" << c << endl; 
	cout << "List of selected activities:";
	for (i = 0; i < ans.size(); i++) 
		cout << ans[i] << " ";
}
int main()
{
	int n; cin >> n;
	int s[n], f[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++) 
		cin >> f[i]; 
	printMaxActivities(s, f, n); 
	return 0;
}
