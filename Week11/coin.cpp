#include<bits/stdc++.h>
using namespace std;
int count(int ind, int sum, int s[], int n, vector<vector<int> >& dp)
{
	if (sum == 0) return 1; 
	if (ind >= n || sum < 0) 
		return 0;
	if (dp[ind][sum] != -1) 
		return dp[ind][sum]; 
	int left = count(ind, sum - s[ind], s, n, dp);
	int right = count(ind + 1, sum, s, n, dp); 
	return dp[ind][sum] = left + right;
}
int main()
{
	int n; cin >> n; int s[n];
	for (int i = 0; i < n; i++) 
		cin >> s[i];
	int sum; 
	cin >> sum;
	vector<vector<int> >dp(n, vector<int>(sum + 1, -1)); 
	cout << count(0, sum, s, n, dp);
}

