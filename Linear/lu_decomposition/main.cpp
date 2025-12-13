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
// Each line will be in the format: x<i> = <value>

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;cin>>t;
	
	for(int tc=1;tc<=t;tc++){
		cout<<"Test Case "<<tc<<":"<<endl;
		
		int n;cin>>n;
		vector<vector<double>>A(n,vector<double>(n)),L(n,vector<double>(n,0.0)),U(n,vector<double>(n,0.0));
		vector<double>b(n),x(n),y(n);
		for(int i=0;i<n;i++)
			for(int j=0;j<=n;j++)
				(j==n)?cin>>b[i]:cin>>A[i][j];
		
		int rank_a=0;
		for(int i=0;i<n;i++){
			for(int k=i;k<n;k++){
				double sum=0.0;
				for(int j=0;j<i;j++){
					sum+=L[i][j]*U[j][k];
				}U[i][k]=A[i][k]-sum;
			}
			
			if(fabs(U[i][i])<1e-10){
				break;
			}
			rank_a++;
			
			for(int k=i;k<n;k++){
				double sum=0.0;
				for(int j=0;j<i;j++){
					sum+=L[k][j]*U[j][i];
				}L[k][i]=(A[k][i]-sum)/U[i][i];
			}
		}
		
		if(rank_a<n){
			vector<vector<double>>aug(n,vector<double>(n+1));
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)aug[i][j]=A[i][j];
				aug[i][n]=b[i];
			}
			
			for(int i=0;i<n;i++){
				int max_row=i;
				for(int k=i+1;k<n;k++){
					if(fabs(aug[k][i])>fabs(aug[max_row][i])){
						max_row=k;
					}
				}
				swap(aug[i],aug[max_row]);
				
				if(fabs(aug[i][i])<1e-10)continue;
				
				for(int k=i+1;k<n;k++){
					double fact=aug[k][i]/aug[i][i];
					for(int j=i;j<=n;j++){
						aug[k][j]-=fact*aug[i][j];
					}
				}
			}
			
			int rank_ab=0;
			for(int i=0;i<n;i++){
				bool all_zero=true;
				for(int j=0;j<n;j++){
					if(fabs(aug[i][j])>1e-10){
						all_zero=false;
						break;
					}
				}
				if(!all_zero)rank_ab++;
				else if(fabs(aug[i][n])>1e-10){
					rank_ab++;
					cout<<"No solution"<<endl<<endl;
					goto next_test;
				}
			}
			
			if(rank_a<n){
				cout<<"Infinite solutions"<<endl<<endl;
				goto next_test;
			}
		}
		
		for(int i=0;i<n;i++){
			double sum=0.0;
			for(int j=0;j<i;j++){
				sum+=L[i][j]*y[j];
			}y[i]=b[i]-sum;
		}
		
		for(int i=n-1;i>=0;i--){
			double sum=0.0;
			for(int j=i+1;j<n;j++){
				sum+=U[i][j]*x[j];
			}x[i]=(y[i]-sum)/U[i][i];
		}
		
		cout<<"Solution : "<<endl;	
		for(int i=0;i<n;i++)cout<<"x"<<i+1<<" = "<<x[i]<<endl;
		cout<<endl;
		
		next_test:;
	}
}