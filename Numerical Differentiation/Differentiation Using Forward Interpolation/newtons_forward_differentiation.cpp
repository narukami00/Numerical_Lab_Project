#include<bits/stdc++.h>
using namespace std;

double fact(int n){
    double res=1;
    for(int i=2; i<=n; i++) res*=i;
    return res;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout<<"Num of data points:\n";
    int n; cin>>n;

    cout<<"Enter x values:\n";
    vector<double> xs(n);
    for(int i=0; i<n; i++) cin>>xs[i];

    cout<<"Enter y values:\n";
    vector<double> ys(n);
    for(int i=0; i<n; i++) cin>>ys[i];

    cout<<"Enter the targeted value:\n";
    double x; cin>>x;

    vector<vector<double>> diff(n, vector<double>(n));
    for(int i=0; i<n; i++) diff[i][0] = ys[i];

    for(int j=1; j<n; j++){
        for(int i=0; i+j<n; i++) diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
    }

    cout<<"Forward difference table:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<setw(5)<<diff[i][j]<<" "; cout<<endl;
    }


    double h=xs[1]-xs[0];
    double u=(x-xs[0])/h;

    double fp = diff[0][1] + (2*u-1)/fact(2)*diff[0][2] + (3*u*u - 6*u + 2)/fact(3)*diff[0][3];
    fp /= h;
    double fpp = diff[0][2] + (u-1)*diff[0][3];
    fpp /= h*h;
    cout<<"f'(x) = "<<fp<<endl;
    cout<<"f''(x) = "<<fpp<<endl;


}