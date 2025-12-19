#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("input_linear_regression.txt");   
    ofstream fout("output_linear_regression.txt");

    if (!fin.is_open() || !fout.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int n;
    fin >> n;

    fout << "The number of data points: "<< n<< endl;

    vector<double> x(n), y(n);

    for (int i = 0; i < n; i++) {
        fin >> x[i] >> y[i];
    }

    fout << "The x and y values: "<< endl;
    for (int i = 0; i < n; i++) {
        fout << x[i] << " "<< y[i]<<endl;
    }
   
    double sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;

    for (int i = 0; i < n; i++) {
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    double b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    double a = (sumy - b * sumx) / n;

    fout << "\nBest Fit Line: y = " << a << " + " << b << "x\n";

    fin.close();
    fout.close();

    return 0;
}
