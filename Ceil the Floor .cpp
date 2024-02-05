//TC = O(2(log(base(2))N)

int findFloor(vector<int> &a, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (a[mid] <= x) {
			ans = a[mid];
			//look for smaller index on the left
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}
	}
	return ans;
}

int findCeil(vector<int> &a, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (a[mid] >= x) {
			ans = a[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int f = findFloor(a, n, x);
	int c = findCeil(a, n, x);
	return make_pair(f, c);
}


// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
// 	// Write your code here.
// }
