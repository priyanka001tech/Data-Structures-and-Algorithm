#include<bits/stdc++.h>
using namespace std;

// Number of times a sorted array is rotated = index of minimum/a[0] element

int CountRotations(int a[], int n) {

	int s = 0;
	int e = n - 1;

	while (s <= e) {

		int mid = s + (e - s) / 2;
		int next = (mid + 1) % n;
		int prev = (mid - 1 + n) % n;

		if ((a[mid] <= a[next]) && (a[mid] <= a[prev])) {
			return mid;
		}

		else if (a[mid] > a[mid + 1]) s = mid + 1;
		else if (a[mid] < a[mid + 1]) e = mid - 1;
    
	}
}


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i]; // rotated sorted array

	cout << CountRotations(a, n) << endl;
}
