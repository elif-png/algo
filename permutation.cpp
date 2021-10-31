#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>all_permutations;
vector <int>c;
	int n;

bool is_added[100];

void permutation(){
  
		for(int j=0; j<c.size(); j++)
		 	cout << c[j] << " ";
		 	cout << "\n";
			return;
		}

		for(int j=1; j<=n; j++){ 
			
			if(is_added[j]==false){
				c.push_back(j);
				is_added[j]=true;
			
				permutation();

				c.pop_back();
				is_added[j]=false;
			}
		}
}


int main(){

	cin >> n;

	permutation();


	return 0;
}
