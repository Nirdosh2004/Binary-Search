#include<bits/stdc++.h>
//TC = O(2logn)
int first(vector<int>& arr , int &n , int &x){
	int low = 0 , high = arr.size()-1;
	int first = 0;
	while( low <= high){
		int mid = low  +(high - low)/2;
		if(arr[mid]==x){
			first = mid;
			high = mid - 1;
		}
		else if(arr[mid] < x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return first;
}

int last(vector<int>& arr , int n , int &x){
	int low = 0 , high = arr.size()-1;
	int lasT = -1;
	while(low <= high){
		int mid = low + (high - low)/2;
		if(arr[mid]==x){
			lasT = mid;
			low = mid + 1;
		}
		else if(arr[mid] > x){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return lasT;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int fi = first(arr, n , x);
	if(fi==-1)return 0;
	int la = last(arr,n,x);
	int ans = la - fi + 1;
	return ans;
}
