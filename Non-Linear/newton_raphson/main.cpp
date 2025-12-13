#include<bits/stdc++.h>
using namespace std;

// Input file format:
// The first line contains the number of test cases, t.
// For each test case:
// The first line contains the degree of polynomial, n.
// The next line contains n+1 coefficients (from highest degree to constant).
// The next line contains start, end, step for the interval.

// Output file format:
// The roots found in the given interval.

struct Params{
	double tol_f=1e-4;
	int max_iter=100;
};

double eval_poly(const vector<double>&coef,double x){
	double result=0;
	for(int i=0;i<coef.size();i++){
		result+=coef[i]*pow(x,coef.size()-1-i);
	}
	return result;
}

double eval_derivative(const vector<double>&coef,double x){
	double result=0;
	int n=coef.size()-1;
	for(int i=0;i<n;i++){
		result+=coef[i]*(n-i)*pow(x,n-i-1);
	}
	return result;
}

string poly_string(const vector<double>&coef){
	stringstream ss;
	ss<<fixed<<setprecision(2);
	string s;
	int n=coef.size()-1;
	for(int i=0;i<coef.size();i++){
		int deg=n-i;
		if(fabs(coef[i])<1e-10)continue;
		if(!s.empty()&&coef[i]>0)s+="+";
		if(deg==0){
			ss.str("");ss<<coef[i];s+=ss.str();
		}else if(deg==1){
			if(fabs(coef[i]-1)<1e-10)s+="x";
			else if(fabs(coef[i]+1)<1e-10)s+="-x";
			else{ss.str("");ss<<coef[i];s+=ss.str()+"x";}
		}else{
			if(fabs(coef[i]-1)<1e-10)s+="x^"+to_string(deg);
			else if(fabs(coef[i]+1)<1e-10)s+="-x^"+to_string(deg);
			else{ss.str("");ss<<coef[i];s+=ss.str()+"x^"+to_string(deg);}
		}
	}
	return s.empty()?"0":s;
}

template <typename F, typename DF>
bool newton_raphson(F f, DF df, double x0, double &root, int &iter_count, const Params &p){
	double x=x0;
	for(int i=1;i<=p.max_iter;i++){
		double fx=f(x);
		double dfx=df(x);
		
		if(!isfinite(fx) || !isfinite(dfx) || fabs(dfx)<1e-12) return false;
		
		double x_new=x-fx/dfx;
		
		if(fabs(fx)<p.tol_f){
			root=x_new;
			iter_count=i;
			return true;
		}
			
		x=x_new;
	}
	return false;
}

template<typename F, typename DF>
void find_all_newton(F f, DF df, double start, double end, double step, const Params &p){
	vector<pair<double,int>>roots;
	for(double x=start;x<=end;x+=step){
		double root;
		int iter_count;
		if(newton_raphson(f,df,x,root,iter_count,p)){
		    roots.push_back({root,iter_count});
        }
    }
    sort(roots.begin(), roots.end());
    roots.erase(unique(roots.begin(), roots.end(),[&step](pair<double,int>a,pair<double,int>b){return fabs(a.first-b.first)<step*0.5;}),roots.end());
    
    if(roots.empty())cout<<"No roots found\n";
    else{
        for(int i=0;i<roots.size();i++){
            cout<<"Root "<<i+1<<" = "<<roots[i].first<<" After "<<roots[i].second<<" iterations\n";
        }
    }
    cout<<endl;
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
		vector<double>coef(n+1);
		for(int i=0;i<=n;i++)cin>>coef[i];
		
		cout<<"f(x) = "<<poly_string(coef)<<endl;
		
		double start,end,step;
		cin>>start>>end>>step;
		
		auto f=[&coef](double x){return eval_poly(coef,x);};
		auto df=[&coef](double x){return eval_derivative(coef,x);};
		Params p;
		
		find_all_newton(f,df,start,end,step,p);
	}
	
	return 0;
}
