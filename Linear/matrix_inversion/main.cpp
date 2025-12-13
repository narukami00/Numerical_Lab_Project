#include<bits/stdc++.h>
using namespace std;

// Input file format:
// The first line contains the number of test cases, t.
// For each test case:
// The first line contains the size of the matrix, n.
// The next n lines contain the matrix A.
// The next line contains the vector b.

// Output file format:
// The solution of the system of linear equations.

void cofact(vector<vector<double>>&mat,vector<vector<double>>&temp, int p, int q, int n){
	int i=0,j=0;
	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++){
			if(row!=p && col!=q){
				temp[i][j++]=mat[row][col];
				if(j==n-1){
					j=0;
					i++;
				}
			}
		}
	}
}

double deter(vector<vector<double>>&mat, int n){
	if(n==1)return mat[0][0];
	double det=0;
	vector<vector<double>>temp(n,vector<double>(n));
	int sign=1;
	for(int i=0;i<n;i++){
		cofact(mat,temp,0,i,n);
		det+=sign*mat[0][i]*deter(temp,n-1);
		sign=-sign;
	}
	return det;
}

vector<vector<double>>adj(vector<vector<double>>&mat){
	int n=mat.size();
	vector<vector<double>>adjj(n,vector<double>(n,0));
	
	if(n==1){
		adjj[0][0]=1;
		return adjj;
	}
	
	int sign;
	vector<vector<double>>temp(n,vector<double>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cofact(mat,temp,i,j,n);
			sign=((i+j)%2==0)?1:-1;
			adjj[j][i]=sign*deter(temp,n-1);
		}
	}
	return adjj;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin>>t;
	
	for(int tc=1;tc<=t;tc++){
		cout<<"Test Case "<<tc<<":"<<endl;
		
		int n;
		cin>>n;
		
		vector<vector<double>>mat(n,vector<double>(n));
		vector<double>b(n);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>mat[i][j];
			}
		}
		
		for(int i=0;i<n;i++)cin>>b[i];
		
		double det=deter(mat,n);
		
		if(fabs(det)<1e-10){
			vector<vector<double>>aug(n,vector<double>(n+1));
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)aug[i][j]=mat[i][j];
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
			
			int rank_a=0,rank_ab=0;
			for(int i=0;i<n;i++){
				bool all_zero_a=true;
				bool all_zero_ab=true;
				for(int j=0;j<n;j++){
					if(fabs(aug[i][j])>1e-10){
						all_zero_a=false;
						all_zero_ab=false;
						break;
					}
				}
				if(!all_zero_a)rank_a++;
				if(all_zero_a && fabs(aug[i][n])>1e-10)all_zero_ab=false;
				if(!all_zero_ab)rank_ab++;
			}
			
			if(rank_a<rank_ab){
				cout<<"No solution"<<endl<<endl;
			}else{
				cout<<"Infinite solutions"<<endl<<endl;
			}
			continue;
		}
		
		vector<vector<double>>adj_mat=adj(mat);
		vector<vector<double>>inv_mat(n,vector<double>(n,0));
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				inv_mat[i][j]=adj_mat[i][j]/det;
			}
		}
		
		vector<double>x(n,0);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			x[i]+=inv_mat[i][j]*b[j];
			}
		}
		
		cout<<"Solution : "<<endl;
		for(int i=0;i<n;i++)cout<<"x"<<i+1<<" = "<<x[i]<<endl;
		cout<<endl;
	}
}