#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cout<<"Enter num of data points: ";
    int n; cin>>n;

    cout<<"Enter x values:\n";
    vector<double> xs(n);
    for (int i=0; i<n; i++) cin>>xs[i];

    cout<<"Enter y values:\n";
    vector<double> ys(n);
    for (int i=0; i<n; i++) cin>>ys[i];

    cout<<"Enter value to be interpolated:\n";
    double x; cin>>x;


    vector<vector<double>> ddiff(n, vector<double>(n));
    for (int i=0; i<n; i++) ddiff[i][0]=ys[i];
    for (int j=1; j<n; j++){
        for (int i=0; i+j<n; i++){
            ddiff[i][j]=(ddiff[i+1][j-1] - ddiff[i][j-1])/(xs[i+j]-xs[i]);
        }
    }

    double ans=ys[0];
    double prod=1;
    for (int i=1; i<n; i++){
        prod *=(x-xs[i-1]);
        ans +=ddiff[0][i]*prod;
    }

    cout<<"\nDivided Difference Table:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n - i; j++)
        cout<<fixed<<setprecision(6)<<setw(8)<<ddiff[i][j]<<" "; cout<<endl;
    }
    cout<<"\nInterpolated value at x="<<x<<" is "<<ans<<endl;

    cout<<"\nConsidering last point as extra point\n";
    double err=prod*ddiff[0][n-1];
    cout<<"Truncatation error: "<<err<<endl;
    return 0;
}
