#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("input_Polynomial_regression.txt");   
    ofstream fout("output_Polynomial_regression.txt");

    if (!fin.is_open() || !fout.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int n;
    fin >> n;

    fout << "The number of data points: " << n << endl;

    vector<double> x(n), y(n);
    
    for (int i = 0; i < n; i++) {
        fin >> x[i] >> y[i];
    }

    fout << "Input data:\n";
    for (int i = 0; i < n; i++) {
        fout << x[i] << " " << y[i] << endl;
    }

    double sx = 0, sx2 = 0, sx3 = 0, sx4 = 0;
    double sy = 0, sxy = 0, sx2y = 0;

    for (int i = 0; i < n; i++) {
        double xi = x[i];
        double yi = y[i];

        sx += xi;
        sx2 += xi * xi;
        sx3 += xi * xi * xi;
        sx4 += xi * xi * xi * xi;

        sy += yi;
        sxy += xi * yi;
        sx2y += xi * xi * yi;
    }

    double D  = n*(sx2*sx4 - sx3*sx3) - sx*(sx*sx4 - sx2*sx3) + sx2*(sx*sx3 - sx2*sx2);
    double D1 = sy*(sx2*sx4 - sx3*sx3) - sx*(sxy*sx4 - sx3*sx2y) + sx2*(sxy*sx3 - sx2*sx2y);
    double D2 = n*(sxy*sx4 - sx3*sx2y) - sy*(sx*sx4 - sx2*sx3) + sx2*(sx*sx2y - sxy*sx2);
    double D3 = n*(sx2*sx2y - sxy*sx3) - sx*(sx*sx2y - sxy*sx2) + sy*(sx*sx3 - sx2*sx2);

    double a = D1 / D;
    double b = D2 / D;
    double c = D3 / D;

    fout << "\nBest Fit Quadratic Curve:\n";
    fout << "y = " << a << " + " << b << "x + " << c << "x^2\n";
    
    fin.close();
    fout.close();

    return 0;
}
