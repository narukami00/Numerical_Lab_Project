#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("input_Transcendental_regression.txt");   
    ofstream fout("output_Transcendental_regression.txt");

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

    fout << "The x and y values:\n";
    for (int i = 0; i < n; i++) {
        fout << x[i] << " " << y[i] << endl;
    }

    double Sx = 0, Sy = 0, Sxx = 0, Sxy = 0;

    for (int i = 0; i < n; i++) {
        double X = x[i];
        double Y = log(y[i]);

        Sx += X;
        Sy += Y;
        Sxx += X * X;
        Sxy += X * Y;
    }

    double b = (n * Sxy - Sx * Sy) / (n * Sxx - Sx * Sx);
    double A = (Sy - b * Sx) / n;
    double a = exp(A);

    fout << "\nBest Fit Transcendental Curve:\n";
    fout << "y = " << a << " * e^(" << b << "x)\n";

    fin.close();
    fout.close();

    return 0;
}
