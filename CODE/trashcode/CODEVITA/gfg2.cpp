// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
long long f[12];

// Function for calculating factorial
void fact()
{
	// Factorial of n defined as:
	// n! = n * (n - 1) * ... * 1
	f[0] = f[1] = 1;

	for (int i = 2; i <= 10; i++)
		f[i] = i * 1LL * f[i - 1];
}

// Function to find the number of ways to
// select exactly K even numbers
// from the given array
void solve(int arr[], int n, int k)
{
	fact();

	// Count even numbers
	int even = 0;
	for (int i = 0; i < n; i++) {

		// Check if the current
		// number is even
		if (arr[i] % 2 == 0)
			even++;
	}

	// Check if the even numbers to be
	// choosen is greater than n. Then,
	// there is no way to pick it.
	if (k > even)
		cout << 0 << endl;

	else {
		// The number of ways will be nCk
		cout << f[even] / (f[k] * f[even - k]);
	}
}

// Driver Code
int main()
{
	// Given array arr[]
	int arr[] = {4,5 };
	int n = sizeof arr / sizeof arr[0];

	// Given count of even elements
	int k = 3;

	// Function Call
	solve(arr, n, k);
	return 0;
}

