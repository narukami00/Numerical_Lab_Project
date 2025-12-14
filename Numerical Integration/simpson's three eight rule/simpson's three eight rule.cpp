#include<bits/stdc++.h>
using namespace std;

double fun(double x, vector<double> crr){
    double res=0; int n=crr.size();
    for(int i=0; i<n; i++){
        res += crr[i]*pow(x, n-1-i);
    }
    return res;
}

double simpson(double a, double b, double h, vector<double> crr){
    double sum=fun(a, crr)+fun(b, crr);
    for(double i=1; a+i*h<b; i++){
        if((int)i%3==0) sum += 2*fun(a+i*h, crr);
        else sum += 3*fun(a+i*h, crr);
    }
    return (3.0*h*sum)/8.0;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout<<"Degree of the function:\n";
    int d; cin>>d;
    cout<<"Coefficients of the function:\n";
    vector<double> crr(d+1); for(auto &i: crr) cin>>i;

    cout<<"Upper limit:\n";
    double ul; cin>>ul;

    cout<<"Lower limit:\n";
    double ll; cin>>ll;

    cout<<"Number of intervals:\n";
    double n; cin>>n;

    double h = (ul-ll)/n;
    double ans = simpson(ll, ul, h, crr);

    //output
    cout<<"The polynomial:\nf(x) = "<<crr[0]<<"x^"<<d;
    for(int i=0; i<=d; i++) cout<<" + "<<crr[i]<<"x^"<<d-i;
    cout<<endl;

    cout<<"Definite integral of the polynomial = "<<ans<<endl;
    return 0;
}