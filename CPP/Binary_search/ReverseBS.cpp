#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int x) {

	int s = 0;
	int e = n - 1;

	while (s <= e) {

		int mid = s + (e - s) / 2;

		if (a[mid] == x) return mid;
		else if (a[mid] > x) s = mid + 1;
		else if (a[mid] < x) e = mid - 1;
	}

	return -1;

}

int main() {
  
	int n;
	cin >> n;
	int a[n];
	int x; cin >> x;
	for (int i = 0; i < n; i++) cin >> a[i]; //reverse sorted array

	cout << binarySearch(a, n, x) << endl;

}
