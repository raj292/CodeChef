#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		int flg = 1;

		int arr[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] > k) {
				flg = 0;
			}
		}


		int cw = 0;
		int j = 0;
		int cnt = 0;

		if (flg == 1) {

			while (cw <= k) {

				if (cw + arr[j] <= k) {
					cw += arr[j];
					j++;
					if (j == n) {
						break;
					}
				} else {
					cnt++;
					cw = 0;
				}
			}

			cnt++;
			cout << cnt << endl;
		} else {
			cout << "-1\n";
		}
	}

}
