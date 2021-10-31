#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int bs(int l, int r, int x){
	
	int mid = l + (r - l) / 2;
	
	if(r>=l){
	
	if(arr[mid] > x)
		return bs(l, mid-1, x);
	
	else if(arr[mid] < x)	
		return bs(mid+1, r, x);
	
	else
		return mid;
	
	}

	return -1;
}

int main (){

	int n,x;
	cin >> n >> x;
	for(int i=1; i<=n; i++)
		cin >> arr[i];

	cout << bs(1,n,x);


	return 0;
}
