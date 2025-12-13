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
	double tol_x=1e-8;
	double tol_rel=1e-8;
	double tol_f=1e-10;
	int max_iter=100;
	bool verbose=0;
};

double eval_poly(const vector<double>&coef,double x){
	double result=0;
	for(int i=0;i<coef.size();i++){
		result+=coef[i]*pow(x,coef.size()-1-i);
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

template<typename F>
bool bisection(F f, double a, double b, double &root, string& reason, const Params &p){
	double fa=f(a),fb=f(b);
	if(!isfinite(fa) || !isfinite(fb)){
		reason="Non-finite function values at endpoints";
		return false;
	}
	
	if(fa*fb>0){
		reason="No sign change in interval";
		return false;
	}
	
	double prev_c=a;
	for(int iter=1;iter<=p.max_iter;iter++){
		double c=0.5*(a+b);
		
		double fc=f(c);
		if(p.verbose) cout<<"Iter "<<iter<<":a="<<a<<" b="<<b<<" c="<<c<<"f(c)="<<fc<<endl;
		
		if(fabs(fc)<p.tol_f){
			root=c;
			reason="function value close enough to 0";
			return true;
		}
			
		if(fabs(b-a)<p.tol_x){
			root=c;
			reason="Interval width below absolute tolerance";
			return true;
		}
		
		if(fabs(b-a)<p.tol_rel*fabs(c)){
			root=c;
			reason="Interval width below relative tolerance";
			return true;
		}

		if(fabs(c-prev_c)<1e-14){
			root=c;
			reason="Stagnation";
			return true;
		}

		if(fa*fc<0)b=c,fb=fc;
		else a=c,fa=fc;
		
		prev_c=c;
	}
	
	root=0.5*(a+b);
	reason="Limit reached";
	return true;
}

template<typename F>
void find_roots(F f, double start, double end, double step, const Params &p){
	vector<double>found_roots;
	double a=start, fa=f(a);
	int cnt=0;
	
	if(fabs(fa)<p.tol_f){
		found_roots.push_back(a);
		cnt++;
		cout<<"Root found at x = "<<a<<" | function value close enough to 0"<<endl;
	}
	
	for(double b=a+step;b<=end+1e-9;b+=step){
		double fb=f(b);
		
		bool is_duplicate=false;
		for(double r:found_roots){
			if(fabs(b-r)<step*0.5){
				is_duplicate=true;
				break;
			}
		}
		
		if(fabs(fb)<p.tol_f&&!is_duplicate){
			found_roots.push_back(b);
			cnt++;
			cout<<"Root found at x = "<<b<<" | function value close enough to 0"<<endl;
		}
		
		if(!isfinite(fa)||!isfinite(fb)){
			cout<<"Discontinuity detected between "<<a<<" and "<<b<<endl;
		}
		else if(fa*fb<0){
			double root;
			string reason;
			if(bisection(f,a,b,root,reason,p)){
				is_duplicate=false;
				for(double r:found_roots){
					if(fabs(root-r)<step*0.5){
						is_duplicate=true;
						break;
					}
				}
				if(!is_duplicate){
					found_roots.push_back(root);
					cnt++;
					cout<<"Root found at x = "<<root <<" between ["<<a<<", "<<b<<"] | "<< reason<<endl;
				}
			}
		}
		
		fa=fb;
		a=b;
		
		if(cnt>=10)break;
	}
	
	if(cnt==0)cout<<"No roots found in given interval\n";
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
		Params p;
		
		find_roots(f,start,end,step,p);
	}
	
	return 0;
}
