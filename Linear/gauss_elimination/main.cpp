#include<bits/stdc++.h>
using namespace std;

// Input file format:
// The first line contains the number of test cases, t.
// For each test case:
// The first line contains the size of the matrix, n.
// The next n lines contain the augmented matrix [A|b].
// Each row of the matrix should have n+1 elements.

// Output file format:
// The solution of the system of linear equations.

void gauss_elimination(vector<vector<double>>&a,int n,int test_case){
	cout<<"Test Case "<<test_case<<":"<<endl;
	
	for(int i=0;i<n;i++){
		int max_row=i;
		for(int k=i+1;k<n;k++){
			if(fabs(a[k][i])>fabs(a[max_row][i])){
				max_row=k;
			}
		}
		swap(a[i],a[max_row]);
		
		if(fabs(a[i][i])<1e-10){
			continue;
		}
		
		for(int k=i+1;k<n;k++){
			double fact=a[k][i]/a[i][i];
			for(int j=i;j<=n;j++){
				a[k][j]-=fact*a[i][j];
			}
		}
	}
	
	int rank_a=0,rank_ab=0;
	for(int i=0;i<n;i++){
		bool all_zero_a=true;
		bool all_zero_ab=true;
		for(int j=0;j<n;j++){
			if(fabs(a[i][j])>1e-10){
				all_zero_a=false;
				all_zero_ab=false;
				break;
			}
		}
		if(!all_zero_a)rank_a++;
		if(all_zero_a && fabs(a[i][n])>1e-10)all_zero_ab=false;
		if(!all_zero_ab)rank_ab++;
	}
	
	if(rank_a<rank_ab){
		cout<<"No solution"<<endl<<endl;
		return;
	}
	if(rank_a<n){
		cout<<"Infinite solutions"<<endl<<endl;
		return;
	}
	
	vector<double>x(n);
	for(int i=n-1;i>=0;i--){
		x[i]=a[i][n];
		for(int j=i+1;j<n;j++){
			x[i]-=a[i][j]*x[j];
		}
		x[i]/=a[i][i];
	}
	cout<<"Solution : "<<endl;
	for(int i=0;i<n;i++)cout<<"x"<<i+1<<" = "<<x[i]<<endl;
	cout<<endl;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin>>t;
	
	for(int tc=1;tc<=t;tc++){
		int n;
		cin>>n;

		vector<vector<double>>a(n,vector<double>(n+1));
		for(int i=0;i<n;i++){
			for(int j=0;j<=n;j++){
				cin>>a[i][j];
			}
		}

		gauss_elimination(a,n,tc);
	}

	return 0;
}