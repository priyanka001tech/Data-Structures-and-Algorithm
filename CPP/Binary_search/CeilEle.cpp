#include<bits/stdc++.h>
using namespace std;

// find ceil of an element in a sorted array
// ceil of x = smallest element greater than x

int BinarySearch(int a[], int x, int s, int e) {

	int res = -1;
	while (s <= e) {

		int mid =  s + (e - s) / 2;

		if (a[mid] == x) return a[mid];

		if (a[mid] < x) {
			s = mid + 1;
		}

		else if (a[mid] > x) {
			res = a[mid];
			e = mid - 1;
		}

	}
	return res;
}

int main() {

	int n, x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	cout << BinarySearch(arr, x, 0, n - 1) << endl;

}
