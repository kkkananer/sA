#include<iostream>
#define MAX_LEN 100

using namespace std;

int getMaxSum(int* a, int n) {
	int max = 0;
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (temp > 0) {
			temp += a[i];
		}
		else {
			temp = a[i];
		}
		if (max < temp) {
			max = temp;
		}
	}
	return max;
}

int main() {
	int a[MAX_LEN];
	int maxSum;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	maxSum = getMaxSum(a, n);
	cout << maxSum << endl;
