#include<bits/stdc++.h>
using namespace std;

double RK_method(function<double(double,double)>&f,
                double x0, double y0, double h)
{
    double k1 = h*f(x0, y0);
    double k2 = h*f(x0 + h/2.0, y0 +k1/2.0);
    double k3 = h*f(x0 + h/2.0, y0 +k2/2.0);
    double k4 = h*f(x0 + h, y0 + k3);

    return y0 + (1/6.0)*(k1 + 2*k2 + 2*k3 + k4);
}

int main()
{
    ifstream fin("input_RK_Method.txt");   
    ofstream fout("output_RK_Method.txt");

    if (!fin.is_open() || !fout.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    function<double(double,double)> f;
    f = [](double x, double y){return x*y + y*y;};

    double x0, y0, h;
    int N;

    fin >> x0 >>y0 >>h >>N;
    fout << "x0, y0, h, N : "<<x0<<", "<<y0<<", "<<h<<", "<<N<<" "<<endl;
    cout << fixed << setprecision(4);

    for (int i = 1; i <= N; i++)
    {

        y0 = RK_method(f, x0, y0, h);
        x0 += h;
        fout << "x"<<i<< "=" <<x0 << "     y"<<i<< "="<<y0 <<"\n";
    }

    fin.close();
    fout.close();

    return 0;
}
