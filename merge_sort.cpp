#include <bits/stdc++.h>
using namespace std;

int arr[500005];

void merge(int l, int m, int r){

	int n1 = m -l +1;
	
	int n2 = r -m;
	
	int left[500005], right[500005];

	
	for(int i=0; i<n1; i++)
		
		left[i] = arr[l+i];

	
	for(int i=0; i<n2; i++)
		
		right[i] = arr[m+1+i];

	
	int i=0, j=0, k=l;
	
	
	while(i<n1 && j<n2){
		
		if(left[i]<=right[j]){
		
			arr[k]=left[i];
		
			i++;
		}
		
		else{
		
			arr[k]=right[j];
		
			j++;
		}
		
		k++;
	}

	while(i<n1){

		arr[k]=left[i];
		
		i++;
		
		k++;
	}

	while(j<n2){

		arr[k]=right[j];
		
		j++;
		
		k++;
	}



}

void merge_sort(int l, int r){

	int m = l + (r - l) / 2;

	if(l < r){
		 
		 merge_sort(l, m);
		 
		 merge_sort(m+1, r);
		
		 merge(l, m, r);
	}


}




int main (){

	int n;
	
	cin >> n;

	for(int i=0; i<n; i++)
		cin >> arr[i];

	merge_sort(0, n-1);

	for(int i=0; i<n; i++)
		cout << arr[i] << "\n";




 	return 0;
 }












