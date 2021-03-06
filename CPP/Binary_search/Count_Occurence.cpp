#include<bits/stdc++.h>
using namespace std;

// count of element in sorted array = simply first occ - last occ index + 1

int BS_1st(int a[], int n, int x) {

	int s = 0;
	int e = n - 1;
	int res = -1;

	while (s <= e) { 

		int mid = s + (e - s) / 2;

		if (a[mid] == x) { // first occurance
			res = mid;
			e = mid - 1;
		}
		else if (a[mid] > x) e = mid - 1;
		else if (a[mid] < x) s = mid + 1;

	}
	return res;
}

int BS_last(int a[], int n, int x) {

	int s = 0;
	int e = n - 1;
	int res = -1;

	while (s <= e) {

		int mid = s + (e - s) / 2;

		if (a[mid] == x) { // last occurance
			res = mid;
			s = mid + 1;
		}
		else if (a[mid] > x) e = mid - 1;
		else if (a[mid] < x) s = mid + 1;

	}
	return res;
}


int main() {

	int n;
	cin >> n;
	int a[n];
	int x; cin >> x;
	for (int i = 0; i < n; i++) cin >> a[i];

	if ((BS_last(a, n, x) - BS_1st(a, n, x) + 1) == 1) cout << "-1" << endl;
	else cout << (BS_last(a, n, x) - BS_1st(a, n, x) + 1) << endl;

}
