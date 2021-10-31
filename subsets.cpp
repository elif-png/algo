#include <bits/stdc++.h>
using namespace std;
	
	int n;
	vector<int>c;
	vector<vector<int>>all_subsets;

	void subsets(int i){
		for(int j=i; j<=n; j++){
			c.push_back(j);
			subsets(j+1);
			c.pop_back();
		}
	}

	int main(){

		cin >> n;

		subsets(1);
		

		return 0;
	}
