#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x, y;
		cin >> n >> x >> y;
		// view the image in this repository for better understanding
		// Akash can move freely in the diagonals and go to the center if the sum
		// of x and y has the same parity with the sum of the center cells
		// otherwise, Akash needs to move horizontally/vertically to match the parity
		int center = n + 1;
		cout << ((x + y) % 2 == center % 2 ? 0 : 1) << '\n';
	}
	return 0;
}