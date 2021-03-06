#include<bits/stdc++.h>
using namespace std;

// Kth largest elements
priority_queue<int, vector<int>, greater<int>> heap; //min heap

void solve(int a[], int n, int k) {
	
	for (int i = 0; i < n; i++) {
		heap.push(a[i]);
		if (heap.size() > k) heap.pop();

	}
  
	while (heap.size() > 0) {
		cout << heap.top() << " ";
		heap.pop();
	}
  
}


int main() {
  
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	Solve(a, n, k);
}
