# Numerical Methods Lab Project

**Course:** CSE 2208 - Numerical Methods Lab  
**Contributors:** 2207006, 2207027, 2207030

---

## About This Project

This repository contains comprehensive implementations of fundamental numerical methods used in computational mathematics and engineering. The project covers various numerical techniques for solving linear and non-linear equations, interpolation, differentiation, integration, curve fitting, and ordinary differential equations.

Each method includes:
- Detailed theoretical explanation
- Complete C++ implementation
- Sample input/output for testing
- Time complexity analysis

The implementations are designed to be educational, well-documented, and ready to use for solving real-world computational problems. All methods have been tested with multiple test cases to ensure accuracy and reliability.

---

## Table of Contents

## 1. [Solution of Linear Equations](#solution-of-linear-equations)
- [Gauss Elimination](#gauss-elimination)
  - [Theory](#gauss-elimination-theory)
  - [Code](#gauss-elimination-implementation)
  - [Input](#gauss-elimination-sample-input)
  - [Output](#gauss-elimination-sample-output)

- [Gauss Jordan Elimination](#gauss-jordan-elimination)
  - [Theory](#gauss-jordan-elimination-theory)
  - [Code](#gauss-jordan-elimination-implementation)
  - [Input](#gauss-jordan-elimination-sample-input)
  - [Output](#gauss-jordan-elimination-sample-output)

- [LU Decomposition](#lu-decomposition)
  - [Theory](#lu-decomposition-theory)
  - [Code](#lu-decomposition-implementation)
  - [Input](#lu-decomposition-sample-input)
  - [Output](#lu-decomposition-sample-output)

- [Matrix Inversion](#matrix-inversion)
  - [Theory](#matrix-inversion-theory)
  - [Code](#matrix-inversion-implementation)
  - [Input](#matrix-inversion-sample-input)
  - [Output](#matrix-inversion-sample-output)

---

## 2. [Solution of Non-Linear Equations](#solution-of-non-linear-equations)
- [Bisection Method](#bisection-method)
  - [Theory](#bisection-method-theory)
  - [Code](#bisection-method-implementation)
  - [Input](#bisection-method-sample-input)
  - [Output](#bisection-method-sample-output)

- [False Position Method](#false-position-method)
  - [Theory](#false-position-method-theory)
  - [Code](#false-position-method-implementation)
  - [Input](#false-position-method-sample-input)
  - [Output](#false-position-method-sample-output)

- [Newton Raphson Method](#newton-raphson-method)
  - [Theory](#newton-raphson-method-theory)
  - [Code](#newton-raphson-method-implementation)
  - [Input](#newton-raphson-method-sample-input)
  - [Output](#newton-raphson-method-sample-output)

- [Secant Method](#secant-method)
  - [Theory](#secant-method-theory)
  - [Code](#secant-method-implementation)
  - [Input](#secant-method-sample-input)
  - [Output](#secant-method-sample-output)

---

## 3. [Interpolation and Approximation](#interpolation-and-approximation)
- [Newton's Forward Interpolation](#newtons-forward-interpolation)
  - [Theory](#newtons-forward-interpolation-theory)
  - [Code](#newtons-forward-interpolation-implementation)
  - [Input](#newtons-forward-interpolation-sample-input)
  - [Output](#newtons-forward-interpolation-sample-output)

- [Newton's Backward Interpolation](#newtons-backward-interpolation)
  - [Theory](#newtons-backward-interpolation-theory)
  - [Code](#newtons-backward-interpolation-implementation)
  - [Input](#newtons-backward-interpolation-sample-input)
  - [Output](#newtons-backward-interpolation-sample-output)

- [Newton's Divided Difference Interpolation](#newtons-divided-difference-interpolation)
  - [Theory](#newtons-divided-difference-interpolation-theory)
  - [Code](#newtons-divided-difference-interpolation-implementation)
  - [Input](#newtons-divided-difference-interpolation-sample-input)
  - [Output](#newtons-divided-difference-interpolation-sample-output)

---

## 4. [Numerical Differentiation](#numerical-differentiation)
- [Differentiation Using Forward Interpolation](#differentiation-using-forward-interpolation)
  - [Theory](#differentiation-using-forward-interpolation-theory)
  - [Code](#differentiation-using-forward-interpolation-implementation)
  - [Input](#differentiation-using-forward-interpolation-sample-input)
  - [Output](#differentiation-using-forward-interpolation-sample-output)

- [Differentiation Using Backward Interpolation](#differentiation-using-backward-interpolation)
  - [Theory](#differentiation-using-backward-interpolation-theory)
  - [Code](#differentiation-using-backward-interpolation-implementation)
  - [Input](#differentiation-using-backward-interpolation-sample-input)
  - [Output](#differentiation-using-backward-interpolation-sample-output)

---

## 5. [Numerical Integration](#numerical-integration)
- [Simpson's One-Third Rule](#simpsons-one-third-rule)
  - [Theory](#simpsons-one-third-rule-theory)
  - [Code](#simpsons-one-third-rule-implementation)
  - [Input](#simpsons-one-third-rule-sample-input)
  - [Output](#simpsons-one-third-rule-sample-output)

- [Simpson's Three-Eighth Rule](#simpsons-three-eighth-rule)
  - [Theory](#simpsons-three-eighth-rule-theory)
  - [Code](#simpsons-three-eighth-rule-implementation)
  - [Input](#simpsons-three-eighth-rule-sample-input)
  - [Output](#simpsons-three-eighth-rule-sample-output)

---

## 6. [Curve Fitting](#curve-fitting)
- [Linear Regression](#linear-regression)
  - [Theory](#linear-regression-theory)
  - [Code](#linear-regression-implementation)
  - [Input](#linear-regression-sample-input)
  - [Output](#linear-regression-sample-output)

- [Polynomial Regression](#polynomial-regression)
  - [Theory](#polynomial-regression-theory)
  - [Code](#polynomial-regression-implementation)
  - [Input](#polynomial-regression-sample-input)
  - [Output](#polynomial-regression-sample-output)

- [Transcendental Regression](#transcendental-regression)
  - [Theory](#transcendental-regression-theory)
  - [Code](#transcendental-regression-implementation)
  - [Input](#transcendental-regression-sample-input)
  - [Output](#transcendental-regression-sample-output)

---

## 7. [Ordinary Differential Equation](#ordinary-differential-equation)
- [Runge-Kutta Method](#runge-kutta-method)
  - [Theory](#runge-kutta-method-theory)
  - [Code](#runge-kutta-method-implementation)
  - [Input](#runge-kutta-method-sample-input)
  - [Output](#runge-kutta-method-sample-output)

---

## Project Structure

```
Project/
├── Curve Fitting/
|   ├── linear_regression/
|   │   ├── Theory.txt
|   │   ├── linear_regression.cpp
|   │   ├── input_linear_regression.txt
|   │   └── output_linear_regression.txt
|   ├── Polynomial_regression/
|   │   ├── Theory.txt
|   │   ├── Polynomial_regression.cpp
|   │   ├── input_Polynomial_regression.txt
|   │   └── output_Polynomial_regression.txt
|   └── Transcendental_regression/
|       ├── Theory.txt
|       ├── Transcendental_regression.cpp
|       ├── input_Transcendental_regression.txt
|       └── output_Transcendental_regression.txt  
├── Interpolation and Approximation/
│   ├── Newton's Backward Interpolation/
│   │   ├── theory.txt
│   │   ├── newtons_backward_interpolation.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   ├── Newton's Divided Difference Interpolation/
│   │   ├── theory.txt
│   │   ├── newtons_divided_difference_interpolation.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   └── Newton's Forward Interpolation/
│       ├── theory.txt
│       ├── newtons_forward_interpolation.cpp
│       ├── input.txt
│       └── output.txt
├── Linear/
│   ├── gauss_elimination/
│   │   ├── theory.txt
│   │   ├── main.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   ├── gauss_jordan_elimination/
│   │   ├── theory.txt
│   │   ├── main.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   ├── lu_decomposition/
│   │   ├── theory.txt
│   │   ├── main.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   └── matrix_inversion/
│       ├── theory.txt
│       ├── main.cpp
│       ├── input.txt
│       └── output.txt
├── Non-Linear/
│   ├── bisection/
│   │   ├── theory.txt
│   │   ├── main.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   ├── false_position/
│   │   ├── theory.txt
│   │   ├── main.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   ├── newton_raphson/
│   │   ├── theory.txt
│   │   ├── main.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   └── secant/
│       ├── theory.txt
│       ├── main.cpp
│       ├── input.txt
│       └── output.txt
├── Numerical Differentiation/
│   ├── Differentiation Using Backward Interpolation/
│   │   ├── theory.txt
│   │   ├── newtons_backward_differentiation.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   └── Differentiation Using Forward Interpolation/
│       ├── theory.txt
│       ├── newtons_forward_differentiation.cpp
│       ├── input.txt
│       └── output.txt
├── Numerical Integration/
│   ├── simpson's one third rule/
│   │   ├── theory.txt
│   │   ├── simpson's one third rule.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   └── simpson's three eight rule/
│       ├── theory.txt
│       ├── simpson's three eight rule.cpp
│       ├── input.txt
│       └── output.txt
└── Ordinary Differential Equation/
    └── RK_Method/
         ├── Theory.txt
         ├── RK_Method.cpp
         ├── input_RK_Method.txt
         └── output_RK_Method.txt
```

---

## Solution of Linear Equations

---

### Gauss Elimination

<a id="gauss-elimination-theory"></a>

#### Theory

GAUSS ELIMINATION METHOD
========================

OVERVIEW:
---------
Gauss Elimination is a systematic method for solving systems of linear equations. It transforms the coefficient matrix into an upper triangular form through elementary row operations, after which back substitution is used to find the solution.

MATHEMATICAL FOUNDATION:
------------------------
For a system of linear equations Ax = b, where:
- A is an n×n coefficient matrix
- x is the vector of unknowns
- b is the constant vector

The method converts the augmented matrix [A|b] into upper triangular form.

ALGORITHM STEPS:
----------------
1. Forward Elimination:
   - For each column k from 1 to n-1:
     - Select pivot element a[k][k]
     - For each row i below row k:
       - Calculate multiplier: m = a[i][k] / a[k][k]
       - Update row i: a[i][j] = a[i][j] - m * a[k][j] for all j

2. Back Substitution:
   - Calculate x[n] = b[n] / a[n][n]
   - For i = n-1 down to 1:
     - x[i] = (b[i] - sum(a[i][j] * x[j])) / a[i][i]

TIME COMPLEXITY:
----------------
O(n^3) for forward elimination + O(n^2) for back substitution = O(n^3)

ADVANTAGES:
-----------
- Straightforward implementation
- Directly solves the system
- No iteration required

DISADVANTAGES:
--------------
- Susceptible to round-off errors
- Fails if pivot element is zero
- Not suitable for large sparse matrices

<a id="gauss-elimination-implementation"></a>

#### Implementation

```cpp
#include<bits/stdc++.h>
using namespace std;

// Input file format:
// The first line contains the number of test cases, t.
// For each test case:
// The first line contains the size of the matrix, n.
// The next n lines contain the augmented matrix [A|b].
// Each row of the matrix should have n+1 elements.

// Output file format:
// The solution of the system of linear equations.

void gauss_elimination(vector<vector<double>>&a,int n,int test_case){
	cout<<"Test Case "<<test_case<<":"<<endl;

	for(int i=0;i<n;i++){
		int max_row=i;
		for(int k=i+1;k<n;k++){
			if(fabs(a[k][i])>fabs(a[max_row][i])){
				max_row=k;
			}
		}
		swap(a[i],a[max_row]);

		if(fabs(a[i][i])<1e-10){
			continue;
		}

		for(int k=i+1;k<n;k++){
			double fact=a[k][i]/a[i][i];
			for(int j=i;j<=n;j++){
				a[k][j]-=fact*a[i][j];
			}
		}
	}

	int rank_a=0,rank_ab=0;
	for(int i=0;i<n;i++){
		bool all_zero_a=true;
		bool all_zero_ab=true;
		for(int j=0;j<n;j++){
			if(fabs(a[i][j])>1e-10){
				all_zero_a=false;
				all_zero_ab=false;
				break;
			}
		}
		if(!all_zero_a)rank_a++;
		if(all_zero_a && fabs(a[i][n])>1e-10)all_zero_ab=false;
		if(!all_zero_ab)rank_ab++;
	}

	if(rank_a<rank_ab){
		cout<<"No solution"<<endl<<endl;
		return;
	}
	if(rank_a<n){
		cout<<"Infinite solutions"<<endl<<endl;
		return;
	}

	vector<double>x(n);
	for(int i=n-1;i>=0;i--){
		x[i]=a[i][n];
		for(int j=i+1;j<n;j++){
			x[i]-=a[i][j]*x[j];
		}
		x[i]/=a[i][i];
	}
	cout<<"Solution : "<<endl;
	for(int i=0;i<n;i++)cout<<"x"<<i+1<<" = "<<x[i]<<endl;
	cout<<endl;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin>>t;

	for(int tc=1;tc<=t;tc++){
		int n;
		cin>>n;

		vector<vector<double>>a(n,vector<double>(n+1));
		for(int i=0;i<n;i++){
			for(int j=0;j<=n;j++){
				cin>>a[i][j];
			}
		}

		gauss_elimination(a,n,tc);
	}

	return 0;
}
```

<a id="gauss-elimination-sample-input"></a>

#### Sample Input

```
4
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
2
1 2 3
2 4 7
3
1 2 3 6
2 4 6 12
3 6 9 18
3
1 2 3 6
2 4 6 12
1 2 3 8
```

<a id="gauss-elimination-sample-output"></a>

#### Sample Output

```
Test Case 1:
Solution :
x1 = 2
x2 = 3
x3 = -1

Test Case 2:
No solution

Test Case 3:
Infinite solutions

Test Case 4:
No solution

```

[Back to Top](#numerical-methods-lab-project)

---

### Gauss Jordan Elimination

<a id="gauss-jordan-elimination-theory"></a>

#### Theory

GAUSS-JORDAN ELIMINATION METHOD
================================

OVERVIEW:
---------
Gauss-Jordan Elimination is an extension of Gauss Elimination that transforms the coefficient matrix into a diagonal form (reduced row echelon form). Unlike Gauss Elimination, it eliminates both above and below the pivot element, eliminating the need for back substitution.

MATHEMATICAL FOUNDATION:
------------------------
For a system Ax = b, the method transforms the augmented matrix [A|b] into the form [I|x], where I is the identity matrix and x is the solution vector.

ALGORITHM STEPS:
----------------
1. Forward Elimination (Similar to Gauss):
   - Transform matrix to upper triangular form
   - For each pivot position (k,k):
     - Make the pivot element 1 by dividing the entire row
     - Eliminate all elements below the pivot

2. Backward Elimination:
   - Starting from the last row, moving upward:
   - Eliminate all elements above each pivot
   - Result: Diagonal matrix with 1's on diagonal

3. Solution:
   - Solution is directly available in the augmented column
   - No back substitution needed

PIVOT NORMALIZATION:
--------------------
For each pivot row k:
- Divide entire row by a[k][k]
- This makes the diagonal element equal to 1

TIME COMPLEXITY:
----------------
O(n^3) - slightly more operations than Gauss Elimination due to backward elimination

ADVANTAGES:
-----------
- No back substitution required
- Solution obtained directly
- Can compute matrix inverse simultaneously
- Better for finding matrix inverse

DISADVANTAGES:
--------------
- More computational steps than Gauss Elimination
- Still susceptible to round-off errors
- Requires non-zero pivot elements

<a id="gauss-jordan-elimination-implementation"></a>

#### Implementation

```cpp
#include<bits/stdc++.h>
using namespace std;

// Input file format:
// The first line contains the number of test cases, t.
// For each test case:
// The first line contains the size of the matrix, n.
// The next n lines contain the augmented matrix [A|b].
// Each row of the matrix should have n+1 elements.

// Output file format:
// The solution of the system of linear equations.

void gauss_jordan_elimination(vector<vector<double>>&a,int n,int test_case){
	cout<<"Test Case "<<test_case<<":"<<endl;

	for(int i=0;i<n;i++){
		int max_row=i;
		for(int k=i+1;k<n;k++){
			if(fabs(a[k][i])>fabs(a[max_row][i])){
				max_row=k;
			}
		}
		swap(a[i],a[max_row]);

		if(fabs(a[i][i])<1e-10){
			continue;
		}

		double diag=a[i][i];
		for(int k=0;k<=n;k++)a[i][k]/=diag;

		for(int k=0;k<n;k++){
			if(k!=i){
				double fact=a[k][i];
				for(int j=i;j<=n;j++){
					a[k][j]-=fact*a[i][j];
				}
			}
		}
	}

	int rank_a=0,rank_ab=0;
	for(int i=0;i<n;i++){
		bool all_zero_a=true;
		bool all_zero_ab=true;
		for(int j=0;j<n;j++){
			if(fabs(a[i][j])>1e-10){
				all_zero_a=false;
				all_zero_ab=false;
				break;
			}
		}
		if(!all_zero_a)rank_a++;
		if(all_zero_a && fabs(a[i][n])>1e-10)all_zero_ab=false;
		if(!all_zero_ab)rank_ab++;
	}

	if(rank_a<rank_ab){
		cout<<"No solution"<<endl<<endl;
		return;
	}
	if(rank_a<n){
		cout<<"Infinite solutions"<<endl<<endl;
		return;
	}

	cout<<"Solution : "<<endl;
	for(int i=0;i<n;i++)cout<<"x"<<i+1<<" = "<<a[i][n]<<endl;
	cout<<endl;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin>>t;

	for(int tc=1;tc<=t;tc++){
		int n;
		cin>>n;

		vector<vector<double>>a(n,vector<double>(n+1));
		for(int i=0;i<n;i++){
			for(int j=0;j<=n;j++){
				cin>>a[i][j];
			}
		}

		gauss_jordan_elimination(a,n,tc);
	}

	return 0;
}
```

<a id="gauss-jordan-elimination-sample-input"></a>

#### Sample Input

```
4
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
2
1 2 3
2 4 7
3
1 2 3 6
2 4 6 12
3 6 9 18
3
1 2 3 6
2 4 6 12
1 2 3 8
```

<a id="gauss-jordan-elimination-sample-output"></a>

#### Sample Output

```
Test Case 1:
Solution :
x1 = 2
x2 = 3
x3 = -1

Test Case 2:
No solution

Test Case 3:
Infinite solutions

Test Case 4:
No solution

```

[Back to Top](#numerical-methods-lab-project)

---

### LU Decomposition

<a id="lu-decomposition-theory"></a>

#### Theory

LU DECOMPOSITION METHOD
=======================

OVERVIEW:
---------
LU Decomposition factors a square matrix A into the product of a lower triangular matrix L and an upper triangular matrix U, such that A = LU. This decomposition is particularly useful for solving multiple systems with the same coefficient matrix.

MATHEMATICAL FOUNDATION:
------------------------
For matrix A:
A = LU

Where:
- L is a lower triangular matrix (elements above diagonal are 0)
- U is an upper triangular matrix (elements below diagonal are 0)

To solve Ax = b:
1. Decompose: A = LU
2. Solve Ly = b (forward substitution)
3. Solve Ux = y (back substitution)

DOOLITTLE'S METHOD:
-------------------
This is the most common LU decomposition where:
- L has 1's on the diagonal
- U has the actual pivot values on diagonal

Algorithm:
For k = 1 to n:
  For j = k to n:
    u[k][j] = a[k][j] - sum(l[k][p] * u[p][j]) for p = 1 to k-1

  For i = k+1 to n:
    l[i][k] = (a[i][k] - sum(l[i][p] * u[p][k])) / u[k][k] for p = 1 to k-1

CROUT'S METHOD:
---------------
Alternative where:
- U has 1's on the diagonal
- L has the actual pivot values on diagonal

FORWARD SUBSTITUTION (Ly = b):
-------------------------------
For i = 1 to n:
  y[i] = (b[i] - sum(l[i][j] * y[j])) / l[i][i] for j = 1 to i-1

BACK SUBSTITUTION (Ux = y):
----------------------------
For i = n down to 1:
  x[i] = (y[i] - sum(u[i][j] * x[j])) / u[i][i] for j = i+1 to n

TIME COMPLEXITY:
----------------
- Decomposition: O(n^3)
- Each solve: O(n^2)
- Efficient for multiple right-hand sides

ADVANTAGES:
-----------
- Efficient for multiple systems with same A
- Decomposition done once, reused multiple times
- Can compute determinant easily: det(A) = product of U diagonal elements
- Numerically stable with partial pivoting

DISADVANTAGES:
--------------
- Requires additional storage for L and U
- Not all matrices have LU decomposition
- May need pivoting for numerical stability

<a id="lu-decomposition-implementation"></a>

#### Implementation

```cpp
#include<bits/stdc++.h>
using namespace std;

// Input file format:
// The first line contains the number of test cases, t.
// For each test case:
// The first line contains the size of the matrix, n.
// The next n lines contain the augmented matrix [A|b].
// Each row of the matrix should have n+1 elements.

// Output file format:
// The solution of the system of linear equations.
// Each line will be in the format: x<i> = <value>

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;cin>>t;

	for(int tc=1;tc<=t;tc++){
		cout<<"Test Case "<<tc<<":"<<endl;

		int n;cin>>n;
		vector<vector<double>>A(n,vector<double>(n)),L(n,vector<double>(n,0.0)),U(n,vector<double>(n,0.0));
		vector<double>b(n),x(n),y(n);
		for(int i=0;i<n;i++)
			for(int j=0;j<=n;j++)
				(j==n)?cin>>b[i]:cin>>A[i][j];

		int rank_a=0;
		for(int i=0;i<n;i++){
			for(int k=i;k<n;k++){
				double sum=0.0;
				for(int j=0;j<i;j++){
					sum+=L[i][j]*U[j][k];
				}U[i][k]=A[i][k]-sum;
			}

			if(fabs(U[i][i])<1e-10){
				break;
			}
			rank_a++;

			for(int k=i;k<n;k++){
				double sum=0.0;
				for(int j=0;j<i;j++){
					sum+=L[k][j]*U[j][i];
				}L[k][i]=(A[k][i]-sum)/U[i][i];
			}
		}

		if(rank_a<n){
			vector<vector<double>>aug(n,vector<double>(n+1));
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)aug[i][j]=A[i][j];
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

			int rank_ab=0;
			for(int i=0;i<n;i++){
				bool all_zero=true;
				for(int j=0;j<n;j++){
					if(fabs(aug[i][j])>1e-10){
						all_zero=false;
						break;
					}
				}
				if(!all_zero)rank_ab++;
				else if(fabs(aug[i][n])>1e-10){
					rank_ab++;
					cout<<"No solution"<<endl<<endl;
					goto next_test;
				}
			}

			if(rank_a<n){
				cout<<"Infinite solutions"<<endl<<endl;
				goto next_test;
			}
		}

		for(int i=0;i<n;i++){
			double sum=0.0;
			for(int j=0;j<i;j++){
				sum+=L[i][j]*y[j];
			}y[i]=b[i]-sum;
		}

		for(int i=n-1;i>=0;i--){
			double sum=0.0;
			for(int j=i+1;j<n;j++){
				sum+=U[i][j]*x[j];
			}x[i]=(y[i]-sum)/U[i][i];
		}

		cout<<"Solution : "<<endl;
		for(int i=0;i<n;i++)cout<<"x"<<i+1<<" = "<<x[i]<<endl;
		cout<<endl;

		next_test:;
	}
}
```

<a id="lu-decomposition-sample-input"></a>

#### Sample Input

```
4
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
2
1 2 3
2 4 7
3
1 2 3 6
2 4 6 12
3 6 9 18
3
1 2 3 6
2 4 6 12
1 2 3 8
```

<a id="lu-decomposition-sample-output"></a>

#### Sample Output

```
Test Case 1:
Solution :
x1 = 2
x2 = 3
x3 = -1

Test Case 2:
No solution

Test Case 3:
Infinite solutions

Test Case 4:
No solution

```

[Back to Top](#numerical-methods-lab-project)

---

### Matrix Inversion

<a id="matrix-inversion-theory"></a>

#### Theory

MATRIX INVERSION METHOD
=======================

OVERVIEW:
---------
Matrix inversion finds the inverse of a square matrix A, denoted as A^(-1), such that A * A^(-1) = I, where I is the identity matrix. For solving Ax = b, if A^(-1) exists, then x = A^(-1) * b.

MATHEMATICAL FOUNDATION:
------------------------
For an n×n matrix A, the inverse A^(-1) exists if and only if:
- det(A) ≠ 0 (A is non-singular)
- A is a square matrix
- A has full rank

Property: A * A^(-1) = A^(-1) * A = I

GAUSS-JORDAN METHOD FOR INVERSION:
-----------------------------------
The most common method uses Gauss-Jordan elimination on [A|I]:

1. Form augmented matrix [A|I] where I is the identity matrix
2. Apply row operations to transform A to I
3. The result is [I|A^(-1)]

Algorithm Steps:
For each column k from 1 to n:
  a. Make diagonal element 1 (divide row k by a[k][k])
  b. Eliminate all other elements in column k
  c. Apply same operations to the right side (identity part)

COFACTOR METHOD:
----------------
Alternative approach:
A^(-1) = (1/det(A)) * adj(A)

Where:
- adj(A) is the adjugate (transpose of cofactor matrix)
- Cofactor C[i][j] = (-1)^(i+j) * M[i][j]
- M[i][j] is the minor (determinant of submatrix)

VERIFICATION:
-------------
After finding A^(-1):
- Multiply A * A^(-1)
- Result should be identity matrix I
- Check if diagonal elements = 1, off-diagonal = 0

TIME COMPLEXITY:
----------------
- Gauss-Jordan method: O(n^3)
- Cofactor method: O(n^4) - less efficient

NUMERICAL CONSIDERATIONS:
--------------------------
- Avoid division by very small numbers
- Use partial pivoting for stability
- Check condition number of matrix
- Ill-conditioned matrices have unstable inverses

ADVANTAGES:
-----------
- Direct method for solving Ax = b
- Useful when solving multiple systems
- Gives complete inverse matrix

DISADVANTAGES:
--------------
- Computationally expensive (O(n^3))
- Numerically unstable for ill-conditioned matrices
- Not recommended for sparse matrices
- Unnecessary for solving single linear system

SPECIAL CASES:
--------------
1. Diagonal Matrix: Inverse has reciprocals on diagonal
2. Orthogonal Matrix: A^(-1) = A^T
3. Symmetric Matrix: Inverse is also symmetric
4. Singular Matrix: No inverse exists

CONDITION NUMBER:
-----------------
Measures sensitivity to errors:
cond(A) = ||A|| * ||A^(-1)||

- cond(A) ≈ 1: Well-conditioned (stable)
- cond(A) >> 1: Ill-conditioned (unstable)

<a id="matrix-inversion-implementation"></a>

#### Implementation

```cpp
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
```

<a id="matrix-inversion-sample-input"></a>

#### Sample Input

```
4
3
2 1 -1
-3 -1 2
-2 1 2
8 -11 -3
2
1 2
2 4
3 7
3
1 2 3
2 4 6
3 6 9
6 12 18
3
1 2 3
2 4 6
1 2 3
6 12 8
```

<a id="matrix-inversion-sample-output"></a>

#### Sample Output

```
Test Case 1:
Solution :
x1 = 2
x2 = 3
x3 = -1

Test Case 2:
No solution

Test Case 3:
Infinite solutions

Test Case 4:
No solution

```

[Back to Top](#numerical-methods-lab-project)

---

## Solution of Non-Linear Equations

---

### Bisection Method

<a id="bisection-method-theory"></a>

#### Theory

BISECTION METHOD
================

OVERVIEW:
---------
The Bisection Method is a root-finding algorithm that repeatedly divides an interval in half and selects the subinterval where the root must lie. It is based on the Intermediate Value Theorem and is one of the simplest and most reliable bracketing methods.

MATHEMATICAL FOUNDATION:
------------------------
Intermediate Value Theorem:
If f(x) is continuous on [a,b] and f(a) * f(b) < 0, then there exists at least one root c in (a,b) such that f(c) = 0.

ALGORITHM STEPS:
----------------
1. Initialization:
   - Choose initial interval [a, b] such that f(a) * f(b) < 0
   - Set tolerance ε and maximum iterations

2. Iteration:
   - Calculate midpoint: c = (a + b) / 2
   - Evaluate f(c)

3. Update Interval:
   - If |f(c)| < ε or |b - a| < ε: c is the root (stop)
   - If f(a) * f(c) < 0: root lies in [a, c], set b = c
   - If f(c) * f(b) < 0: root lies in [c, b], set a = c

4. Repeat step 2-3 until convergence

CONVERGENCE:
------------
- Always converges if initial conditions are satisfied
- Linear convergence rate
- Error reduces by half in each iteration
- After n iterations: |error| ≤ (b - a) / 2^n

NUMBER OF ITERATIONS:
---------------------
n ≥ log₂((b - a) / ε)

Where:
- (b - a) is initial interval width
- ε is desired accuracy

STOPPING CRITERIA:
------------------
1. |f(c)| < tolerance
2. |b - a| < tolerance
3. Maximum iterations reached

TIME COMPLEXITY:
----------------
O(log n) where n depends on desired accuracy

ADVANTAGES:
-----------
- Always converges if initial bracket is valid
- Simple to implement and understand
- Guaranteed to find a root
- Does not require derivative calculation
- Robust and reliable

DISADVANTAGES:
--------------
- Slow convergence (linear rate)
- Requires initial interval where f(a) * f(b) < 0
- Cannot find roots where function touches x-axis (even multiplicity)
- Finds only one root even if multiple exist
- Not efficient for finding all roots

SPECIAL CASES:
--------------
1. If f(a) = 0: a is the root
2. If f(b) = 0: b is the root
3. If f(a) * f(b) > 0: method fails (no guarantee of root)
4. Multiple roots in interval: finds only one

<a id="bisection-method-implementation"></a>

#### Implementation

```cpp
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

```

<a id="bisection-method-sample-input"></a>

#### Sample Input

```
3
3
1 -2 -4 5
-3.0 3.0 0.1
2
1 -5 6
0 5 0.1
4
1 0 -5 0 4
-3 3 0.1
```

<a id="bisection-method-sample-output"></a>

#### Sample Output

```
Test Case 1:
f(x) = x^3-2.00x^2-4.00x+5.00
Root found at x = -1.79129 between [-1.8, -1.7] | Interval width below relative tolerance
Root found at x = 1 | function value close enough to 0
Root found at x = 2.79129 between [2.7, 2.8] | Interval width below relative tolerance

Test Case 2:
f(x) = x^2-5.00x+6.00
Root found at x = 2 | function value close enough to 0
Root found at x = 3 | function value close enough to 0

Test Case 3:
f(x) = x^4-5.00x^2+4.00
Root found at x = -2 | function value close enough to 0
Root found at x = -1 | function value close enough to 0
Root found at x = 1 | function value close enough to 0
Root found at x = 2 | function value close enough to 0

```

[Back to Top](#numerical-methods-lab-project)

---

### False Position Method

<a id="false-position-method-theory"></a>

#### Theory

FALSE POSITION METHOD (REGULA FALSI)
=====================================

OVERVIEW:
---------
The False Position Method, also known as Regula Falsi, is a root-finding algorithm that combines features of the Bisection Method and the Secant Method. It uses linear interpolation to find the root, providing faster convergence than bisection while maintaining the bracketing property.

MATHEMATICAL FOUNDATION:
------------------------
The method finds the root by drawing a straight line between points (a, f(a)) and (b, f(b)), and determining where this line crosses the x-axis.

Formula for new approximation:
c = b - (f(b) * (b - a)) / (f(b) - f(a))

Or equivalently:
c = (a*f(b) - b*f(a)) / (f(b) - f(a))

ALGORITHM STEPS:
----------------
1. Initialization:
   - Choose interval [a, b] such that f(a) * f(b) < 0
   - Set tolerance ε and maximum iterations

2. Calculate Intersection Point:
   - c = b - (f(b) * (b - a)) / (f(b) - f(a))
   - Evaluate f(c)

3. Update Interval:
   - If |f(c)| < ε: c is the root (stop)
   - If f(a) * f(c) < 0: root in [a, c], set b = c
   - If f(c) * f(b) < 0: root in [c, b], set a = c

4. Repeat until convergence

CONVERGENCE:
------------
- Superlinear convergence (faster than bisection)
- Convergence rate: approximately 1.618 (golden ratio)
- Always converges if f(a) * f(b) < 0
- May converge slowly if one endpoint remains fixed

MODIFIED FALSE POSITION:
------------------------
To prevent one endpoint from remaining fixed:
- Illinois Method
- Anderson-Bjork Method
- Pegasus Method

These modify f(a) or f(b) when the same endpoint is retained multiple times.

STOPPING CRITERIA:
------------------
1. |f(c)| < tolerance
2. |c_new - c_old| < tolerance
3. |f(c)| / |f(a)| or |f(c)| / |f(b)| < tolerance
4. Maximum iterations reached

TIME COMPLEXITY:
----------------
O(n) where n is number of iterations (fewer than bisection)

ADVANTAGES:
-----------
- Faster convergence than Bisection Method
- Maintains bracketing (always converges)
- Does not require derivative
- More efficient use of function evaluations
- Geometrically intuitive

DISADVANTAGES:
--------------
- May converge slowly if function is highly curved
- One endpoint may remain fixed for many iterations
- Slower than Newton-Raphson and Secant methods
- Cannot find roots of even multiplicity
- Requires initial bracket

SPECIAL CONSIDERATIONS:
-----------------------
1. Function must be continuous
2. Initial bracket must contain root
3. Works best when function is nearly linear
4. Performance degrades for highly nonlinear functions

<a id="false-position-method-implementation"></a>

#### Implementation

```cpp
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
bool false_position(F f, double a, double b, double &root, string& reason, const Params &p){
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
		double c=(a*fb-b*fa)/(fb-fa);

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
			if(false_position(f,a,b,root,reason,p)){
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

```

<a id="false-position-method-sample-input"></a>

#### Sample Input

```
3
3
1 -2 -4 5
-3.0 3.0 0.1
2
1 -5 6
0 5 0.1
4
1 0 -5 0 4
-3 3 0.1
```

<a id="false-position-method-sample-output"></a>

#### Sample Output

```
Test Case 1:
f(x) = x^3-2.00x^2-4.00x+5.00
Root found at x = -1.79129 between [-1.8, -1.7] | function value close enough to 0
Root found at x = 1 | function value close enough to 0
Root found at x = 2.79129 between [2.7, 2.8] | function value close enough to 0

Test Case 2:
f(x) = x^2-5.00x+6.00
Root found at x = 2 | function value close enough to 0
Root found at x = 3 | function value close enough to 0

Test Case 3:
f(x) = x^4-5.00x^2+4.00
Root found at x = -2 | function value close enough to 0
Root found at x = -1 | function value close enough to 0
Root found at x = 1 | function value close enough to 0
Root found at x = 2 | function value close enough to 0

```

[Back to Top](#numerical-methods-lab-project)

---

### Newton Raphson Method

<a id="newton-raphson-method-theory"></a>

#### Theory

NEWTON-RAPHSON METHOD
=====================

OVERVIEW:
---------
The Newton-Raphson Method is an iterative numerical technique for finding roots of a real-valued function. It uses the tangent line at the current approximation to find a better approximation. It is one of the fastest converging root-finding methods when properly initialized.

MATHEMATICAL FOUNDATION:
------------------------
Using Taylor series expansion of f(x) around point x₀:
f(x) ≈ f(x₀) + f'(x₀)(x - x₀)

Setting f(x) = 0 and solving for x:
x = x₀ - f(x₀) / f'(x₀)

ITERATION FORMULA:
------------------
x_{n+1} = x_n - f(x_n) / f'(x_n)

Where:
- x_n is the current approximation
- f(x_n) is the function value at x_n
- f'(x_n) is the derivative at x_n
- x_{n+1} is the next approximation

ALGORITHM STEPS:
----------------
1. Start with initial guess x₀
2. Compute f(x_n) and f'(x_n)
3. Calculate next approximation: x_{n+1} = x_n - f(x_n) / f'(x_n)
4. Check stopping criteria
5. If not converged, set x_n = x_{n+1} and repeat from step 2

CONVERGENCE:
------------
- Quadratic convergence near the root
- Number of correct digits approximately doubles each iteration
- Convergence condition: |f'(x)| should not be too small
- Requires good initial guess

Convergence Rate:
|e_{n+1}| ≈ C|e_n|²

Where e_n is the error at iteration n

STOPPING CRITERIA:
------------------
1. |f(x_n)| < tolerance
2. |x_{n+1} - x_n| < tolerance
3. |x_{n+1} - x_n| / |x_n| < relative tolerance
4. Maximum iterations reached

DERIVATIVE CALCULATION:
-----------------------
Analytical: f'(x) computed symbolically
Numerical: f'(x) ≈ (f(x + h) - f(x)) / h (finite difference)

TIME COMPLEXITY:
----------------
O(n) iterations, typically 4-6 iterations for good convergence

ADVANTAGES:
-----------
- Fastest convergence (quadratic) among simple methods
- Requires few iterations
- Highly efficient near the root
- Can be extended to systems of equations
- Widely applicable

DISADVANTAGES:
--------------
- Requires derivative calculation
- May fail if f'(x) = 0 or very small
- Sensitive to initial guess
- May diverge or oscillate
- Cannot guarantee convergence
- May overshoot and diverge for poor initial guess

FAILURE CASES:
--------------
1. f'(x_n) = 0: Division by zero
2. Stationary points: Method gets stuck
3. Local extrema: May jump to wrong region
4. Oscillation: Between two points
5. Divergence: Moving away from root

INITIAL GUESS SELECTION:
------------------------
- Plot the function to identify approximate location
- Use bisection for few iterations first
- Domain knowledge of the problem
- Multiple starting points for comparison

<a id="newton-raphson-method-implementation"></a>

#### Implementation

```cpp
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

```

<a id="newton-raphson-method-sample-input"></a>

#### Sample Input

```
3
3
1 -2 -4 5
-3.0 3.0 0.1
2
1 -5 6
0 5 0.1
4
1 0 -5 0 4
-3 3 0.1
```

<a id="newton-raphson-method-sample-output"></a>

#### Sample Output

```
Test Case 1:
f(x) = x^3-2.00x^2-4.00x+5.00
Root 1 = -1.79129 After 5 iterations
Root 2 = 1 After 3 iterations
Root 3 = 2.79129 After 3 iterations

Test Case 2:
f(x) = x^2-5.00x+6.00
Root 1 = 2 After 3 iterations
Root 2 = 3 After 1 iterations

Test Case 3:
f(x) = x^4-5.00x^2+4.00
Root 1 = -2 After 5 iterations
Root 2 = -1 After 1 iterations
Root 3 = 1 After 4 iterations
Root 4 = 2 After 1 iterations

```

[Back to Top](#numerical-methods-lab-project)

---

### Secant Method

<a id="secant-method-theory"></a>

#### Theory

SECANT METHOD
=============

OVERVIEW:
---------
The Secant Method is a root-finding algorithm that uses a succession of roots of secant lines to approximate the root of a function. It is similar to Newton-Raphson but approximates the derivative using finite differences, eliminating the need for explicit derivative calculation.

MATHEMATICAL FOUNDATION:
------------------------
Instead of using the derivative f'(x_n) as in Newton-Raphson, the Secant Method approximates it using:

f'(x_n) ≈ (f(x_n) - f(x_{n-1})) / (x_n - x_{n-1})

ITERATION FORMULA:
------------------
x_{n+1} = x_n - f(x_n) * (x_n - x_{n-1}) / (f(x_n) - f(x_{n-1}))

Or equivalently:
x_{n+1} = (x_{n-1} * f(x_n) - x_n * f(x_{n-1})) / (f(x_n) - f(x_{n-1}))

ALGORITHM STEPS:
----------------
1. Start with two initial guesses x₀ and x₁
2. Compute f(x₀) and f(x₁)
3. Calculate next approximation using formula above
4. Update: x_{n-1} = x_n, x_n = x_{n+1}
5. Check convergence criteria
6. Repeat from step 3 until convergence

CONVERGENCE:
------------
- Superlinear convergence
- Convergence order: α ≈ 1.618 (golden ratio)
- Faster than linear, slower than quadratic
- Requires two initial guesses
- More sensitive to initial values than bisection

Error relation:
|e_{n+1}| ≈ C|e_n|^α where α = (1 + √5)/2 ≈ 1.618

STOPPING CRITERIA:
------------------
1. |f(x_n)| < tolerance
2. |x_{n+1} - x_n| < tolerance
3. |x_{n+1} - x_n| / |x_n| < relative tolerance
4. |f(x_n) - f(x_{n-1})| < tolerance
5. Maximum iterations reached

TIME COMPLEXITY:
----------------
O(n) where n is number of iterations (typically fewer than bisection)

ADVANTAGES:
-----------
- Does not require derivative calculation
- Faster convergence than bisection and false position
- Only requires function evaluations
- Simpler than Newton-Raphson (no derivative needed)
- Good compromise between speed and simplicity
- One function evaluation per iteration

DISADVANTAGES:
--------------
- Requires two initial guesses
- May fail if f(x_n) ≈ f(x_{n-1})
- Does not bracket the root (may diverge)
- Less reliable than bracketing methods
- May converge slowly if initial guesses are poor
- Can fail near local extrema

COMPARISON WITH OTHER METHODS:
-------------------------------
vs Newton-Raphson:
- Slightly slower convergence
- No derivative needed
- One function evaluation vs derivative + function

vs False Position:
- Faster convergence
- Does not maintain bracket
- Less reliable

vs Bisection:
- Much faster convergence
- No bracketing guarantee
- Less robust

FAILURE CASES:
--------------
1. f(x_n) = f(x_{n-1}): Division by zero
2. Poor initial guesses: Divergence
3. Near inflection points: Slow convergence
4. Multiple roots: May miss or oscillate

GEOMETRIC INTERPRETATION:
-------------------------
- Draw secant line through (x_{n-1}, f(x_{n-1})) and (x_n, f(x_n))
- Find x-intercept of this secant line
- This intercept becomes x_{n+1}
- Unlike tangent in Newton's method

INITIAL GUESS SELECTION:
------------------------
- Choose x₀ and x₁ close to expected root
- Can use one iteration of bisection
- Should be on opposite sides of root ideally
- Closer guesses generally converge faster

MODIFIED SECANT METHOD:
-----------------------
Uses single initial guess with perturbation:
x_{n+1} = x_n - f(x_n) * δ * x_n / (f(x_n + δ * x_n) - f(x_n))

Where δ is a small perturbation (e.g., 10^-4)

PRACTICAL CONSIDERATIONS:
-------------------------
1. Monitor for division by near-zero values
2. Implement maximum iteration limit
3. Check for oscillation between two values
4. Consider switching to bisection if diverging
5. Use multiple starting points for reliability

<a id="secant-method-implementation"></a>

#### Implementation

```cpp
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
bool secant(F f, double x0, double x1, double &root, int &iter_count, const Params &p){
	double f0=f(x0),f1=f(x1);
	for(int i=1;i<=p.max_iter;i++){
		double x2=x1-f1*(x1-x0)/(f1-f0);
		double f2=f(x2);

		if(fabs(f2)<p.tol_f){
			root=x2;
			iter_count=i;
			return true;
		}

		x0=x1;
		f0=f1;
		x1=x2;
		f1=f2;
	}
	return false;
}

template <typename F>
void find_all_secant(F f, double start, double end, double step, const Params &p){
	vector<pair<double,int>>roots;
	for(double x=start;x<=end;x+=step){
		double y=x+step;
		double root;
		int iter_count;
		if(secant(f,x,y,root,iter_count,p)){
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
		Params p;

		find_all_secant(f,start,end,step,p);
	}

	return 0;
}

```

<a id="secant-method-sample-input"></a>

#### Sample Input

```
3
3
1 -2 -4 5
-3.0 3.0 0.1
2
1 -5 6
0 5 0.1
4
1 0 -5 0 4
-3 3 0.1
```

<a id="secant-method-sample-output"></a>

#### Sample Output

```
Test Case 1:
f(x) = x^3-2.00x^2-4.00x+5.00
Root 1 = -1.7913 After 4 iterations
Root 2 = 0.999988 After 4 iterations
Root 3 = 2.79128 After 2 iterations

Test Case 2:
f(x) = x^2-5.00x+6.00
Root 1 = 1.99992 After 5 iterations
Root 2 = 2.99991 After 3 iterations

Test Case 3:
f(x) = x^4-5.00x^2+4.00
Root 1 = -2 After 6 iterations
Root 2 = -1.00001 After 3 iterations
Root 3 = 0.999999 After 4 iterations
Root 4 = 2 After 6 iterations

```

[Back to Top](#numerical-methods-lab-project)

---

## Interpolation and Approximation

---

### Newton's Forward Interpolation

<a id="newtons-forward-interpolation-theory"></a>

#### Theory

NEWTON'S FORWARD INTERPOLATION METHOD
=====================================

OVERVIEW:
---------
Newton's Forward Interpolation is a numerical method used to approximate the value of a function for a given x, using a set of equally spaced data points. It is particularly useful when the point of interpolation lies near the beginning of the data set.

MATHEMATICAL FOUNDATION:
------------------------
Given a set of n values (x0, y0), (x1, y1), ..., (xn-1, yn-1) where the x values are equally spaced with interval h.
u = (x - x0) / h

The forward interpolation formula is:
y(x) = y0 + u*Δy0 + (u(u-1)/2!)*Δ^2y0 + (u(u-1)(u-2)/3!)*Δ^3y0 + ...

ALGORITHM STEPS:
----------------
1. Input the number of data points n.
2. Input the x and y values.
3. Construct the Forward Difference Table.
4. Calculate u = (x - x0)/h.
5. Apply Newton's Forward Interpolation formula to calculate the approximate value of y at x.

TIME COMPLEXITY:
----------------
- Construction of Difference Table: O(n^2)
- Evaluation of Formula: O(n)
- Overall: O(n^2)

ADVANTAGES:
-----------
- Efficient for calculating function values near the start of the table.
- Simple calculation once the difference table is built.

DISADVANTAGES:
--------------
- Requires x values to be equally spaced.

<a id="newtons-forward-interpolation-implementation"></a>

#### Implementation

```cpp
#include<bits/stdc++.h>
using namespace std;

double fact(int n) {
    double f = 1.0;
    for (int i=2; i<=n; i++) f *= i;
    return f;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cout<<"Enter num of data points: ";
    int n; cin>>n;

    cout<<"Enter x values (ascending, equally spaced): ";
    vector<double> xs(n);
    for (int i=0; i<n; i++) cin>>xs[i];

    cout<<"Enter y values: ";
    vector<double> ys(n);
    for (int i=0; i<n; i++) cin>>ys[i];


    cout<<"Enter value to be interpolated: ";
    double x; cin >> x;

    //forward difference table
    vector<vector<double>> diff(n, vector<double>(n));
    for (int i=0; i<n; i++) diff[i][0] = ys[i];
    for (int j = 1; j < n; ++j) {
        for (int i=0; i+j<n; i++) {
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
        }
    }

    double h=xs[1]-xs[0];
    double u=(x-xs[0])/h;

    //Forward interpolation
    double ans=diff[0][0];
    double u_prod = 1.0;
    for (int k=1; k<n; ++k){
        u_prod *= (u-(k-1));
        ans += (u_prod/fact(k))*diff[0][k];
    }

    

    // Output
    cout<<fixed<<setprecision(2);
    cout<<"\nForward Difference Table:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            cout<<setw(12) << diff[i][j] << ' ';
        }
        cout<<'\n';
    }

    cout<<"\nInterpolated value at x = " << x << " f(x) = " << ans << "\n";
    return 0;
}
```

<a id="newtons-forward-interpolation-sample-input"></a>

#### Sample Input

```
4
3 5 7 9
180 150 120 90
4
```

<a id="newtons-forward-interpolation-sample-output"></a>

#### Sample Output

```
Enter num of data points: Enter x values (ascending, equally spaced): Enter y values: Enter value to be interpolated: 
Forward Difference Table:
      180.00       -30.00         0.00         0.00 
      150.00       -30.00         0.00 
      120.00       -30.00 
       90.00 

Interpolated value at x = 4.00 f(x) = 165.00
```

[Back to Top](#numerical-methods-lab-project)

---

### Newton's Backward Interpolation

<a id="newtons-backward-interpolation-theory"></a>

#### Theory

﻿NEWTON'S BACKWARD INTERPOLATION METHOD
======================================

OVERVIEW:
---------
Newton's Backward Interpolation is used to approximate the value of a function for a given x, using a set of equally spaced data points. It is useful when the point of interpolation lies near the end of the data set.

MATHEMATICAL FOUNDATION:
------------------------
Given a set of n values (x0, y0), (x1, y1), ..., (xn, yn) where the x values are equally spaced with interval h.
v = (x - xn)/h

The interpolation formula is:
y(x) = yn + v*Δyn + (v(v+1)/2!)*Δ^2yn + (v(v+1)(v+2)/3!)*Δ^3yn + ...

ALGORITHM STEPS:
----------------
1. Input the number of data points n.
2. Input the x and y values.
3. Construct the Backward Difference Table.
4. Calculate v = (x - xn)/h.
5. Apply Newton's Backward Interpolation formula to calculate the approximate value of y at x.

TIME COMPLEXITY:
----------------
- Construction of Difference Table: O(n^2)
- Evaluation of Formula: O(n)
- Overall: O(n^2)

ADVANTAGES:
-----------
- Efficient for calculating function values near the end of the table.
- Simple calculation once the difference table is built.

DISADVANTAGES:
--------------
- Requires x values to be equally spaced.
- Not suitable for interpolation near the beginning of the table (use Newton's Forward Interpolation instead).

<a id="newtons-backward-interpolation-implementation"></a>

#### Implementation

```cpp
#include<bits/stdc++.h>
using namespace std;

double fact(int n){
    double f = 1.0;
    for (int i=2; i<=n; i++) f*=i;
    return f;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout<<"Enter num of data points: ";
    int n; cin>>n;

    cout<<"Enter x values: ";
    vector<double> xs(n);
    for (int i=0; i<n; i++) cin>>xs[i];

    cout<<"Enter y values: ";
    vector<double> ys(n);
    for (int i=0; i<n; i++) cin>>ys[i];

    cout<<"Enter value to be interpolated: ";
    double x; cin>>x;

    //Backward difference table
    vector<vector<double>> diff(n, vector<double>(n, 0.0));
    for (int i=0; i<n; i++) diff[i][0]=ys[i];
    for (int j=1; j<n; j++){
        for (int i=n-1; i>0; i--){
            diff[i][j] = diff[i][j-1] - diff[i-1][j-1];
        }
    }

    double h=xs[1]-xs[0];
    double v=(x-xs[n-1])/h;

    //backward interpolation
    double ans=diff[n-1][0];
    double v_prod=1;
    for (int k=1; k<n; k++){
        v_prod *= (v+(k-1));
        ans += (v_prod/fact(k))*diff[n-1][k];
    }

    cout<<fixed<<setprecision(2);
    cout<<"\nBackward Difference Table:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<setw(5)<<diff[i][j]<<" ";
        }
        cout<<'\n';
    }

    cout<<"\nInterpolated value at x = "<<x<<" is f(x) = "<<ans<<"\n";
    return 0;
}

```

<a id="newtons-backward-interpolation-sample-input"></a>

#### Sample Input

```
5
24 28 32 36 40
28.06 30.19 32.75 34.94 40
33

```

<a id="newtons-backward-interpolation-sample-output"></a>

#### Sample Output

```
Enter num of data points: Enter x values: Enter y values: Enter value to be interpolated:
Backward Difference Table:
28.06  0.00  0.00  0.00  0.00
30.19  2.13  2.13  2.13  2.13
32.75  2.56  0.43 -1.70 -3.83
34.94  2.19 -0.37 -0.80  0.90
40.00  5.06  2.87  3.24  4.04

Interpolated value at x = 33.00 is f(x) = 33.27

```

[Back to Top](#numerical-methods-lab-project)

---

### Newton's Divided Difference Interpolation

<a id="newtons-divided-difference-interpolation-theory"></a>

#### Theory

NEWTON'S DIVIDED DIFFERENCE INTERPOLATION METHOD
==============================================

OVERVIEW:
---------
Newton's Divided Difference Interpolation is a numerical method used to approximate the value of a function for a given x, using a set of data points. A key advantage of this method is that it does not require the data points to be equally spaced, making it more versatile than Newton's Forward and Backward interpolation methods.

MATHEMATICAL FOUNDATION:
------------------------
Given a set of n+1 values (x0, y0), (x1, y1), ..., (xn, yn).

The interpolation polynomial P(x) is given by:
P(x) = f[x0] + (x - x0)f[x0, x1] + (x - x0)(x - x1)f[x0, x1, x2] + ...

Where f[] denotes the divided difference:
- 0th order: f[xi] = yi
- 1st order: f[xi, xi+1] = (f[xi+1] - f[xi]) / (xi+1 - xi)
- 2nd order: f[xi, xi+1, xi+2] = (f[xi+1, xi+2] - f[xi, xi+1]) / (xi+2 - xi)

ALGORITHM STEPS:
----------------
1. Input the number of data points n.
2. Input the x and y values. Note that x values do not need to be equally spaced.
3. Construct the Divided Difference Table:
   - Calculate 1st order differences for all adjacent pairs.
   - Calculate 2nd order differences using 1st order differences.
   - Continue until the n-th order difference is found.
4. Apply the interpolation formula.

TIME COMPLEXITY:
----------------
- Construction of Difference Table: O(n^2)
- Evaluation of Formula: O(n)
- Overall: O(n^2)

ADVANTAGES:
-----------
- Applicable to both equally and unequally spaced intervals.
- Truncation error can be calculated with an extra point.

DISADVANTAGES:
--------------
- More arithmetic operations involved in calculating the divided differences compared to simple forward/backward differences.

<a id="newtons-divided-difference-interpolation-implementation"></a>

#### Implementation

```cpp
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

```

<a id="newtons-divided-difference-interpolation-sample-input"></a>

#### Sample Input

```
4
1 4 6 5
0 1.386294 1.79175 1.609438
2

```

<a id="newtons-divided-difference-interpolation-sample-output"></a>

#### Sample Output

```
Enter num of data points: Enter x values:
Enter y values:
Enter value to be interpolated:

Divided Difference Table:
0.000000 0.462098 -0.051874 0.007864
1.386294 0.202728 -0.020416
1.791750 0.182312
1.609438

Interpolated value at x=2.000000 is 0.628762

Considering last point as extra point
Truncatation error: 0.062916

```

[Back to Top](#numerical-methods-lab-project)

---

## Numerical Differentiation

---

### Differentiation Using Forward Interpolation

<a id="differentiation-using-forward-interpolation-theory"></a>

#### Theory

NEWTON'S FORWARD DIFFERENCE FORMULA FOR DIFFERENTIATION
=======================================================

OVERVIEW:
---------
Newton's Forward Difference Formula is used to approximate the derivative of a function given a set of tabulated data points. It is particularly useful when the point of interest is near the beginning of the dataset and the intervals between x values are equal.

MATHEMATICAL FOUNDATION:
------------------------
Given a set of values (x0, y0), (x1, y1), ..., (xn, yn) where x values are equally spaced with step size h.
Let x be the point where the derivative is to be found.
let u = (x-x0)/h.

First Derivative f'(x):
f'(x) = (1/h) * [Δy0 + ((2u-1)/2)*Δ²y0 + ((3u²-6u+2)/6)*Δ³y0 + ...]

Second Derivative f''(x):
f''(x) = (1/h²) * [Δ²y0 + (u-1)*Δ³y0 + ...]

ALGORITHM STEPS:
----------------
1. Input Parameters:
   - Number of data points (n)
   - Arrays of x and y values
   - Target value x where derivative is required

2. Generate Forward Difference Table.

3. Calculation:
   - Calculate step size h = x[1] - x[0]
   - Calculate u = (x - x[0]) / h
   - Apply the derived formulas for f'(x) and f''(x) using the first row of the difference table.

4. Output:
   - Display the difference table.
   - Display the calculated first and second derivatives.

TIME COMPLEXITY:
----------------
O(n^2) to construct the difference table.
O(n) to calculate the derivative value.

ADVANTAGES:
-----------
- Simple to implement for equally spaced data.
- Accurate for points near the beginning of the table.

DISADVANTAGES:
--------------
- Requires equally spaced intervals.
- Accuracy decreases as the point moves away from the beginning of the table.

<a id="differentiation-using-forward-interpolation-implementation"></a>

#### Implementation

```cpp
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
```

<a id="differentiation-using-forward-interpolation-sample-input"></a>

#### Sample Input

```
5
1 2 3 4 5
1 8 27 64 125
1.5
```

<a id="differentiation-using-forward-interpolation-sample-output"></a>

#### Sample Output

```
Num of data points:
Enter x values:
Enter y values:
Enter the targeted value:
Forward difference table:
    1     7    12     6     0
    8    19    18     6     0
   27    37    24     0     0
   64    61     0     0     0
  125     0     0     0     0
f'(x) = 6.75
f''(x) = 9

```

[Back to Top](#numerical-methods-lab-project)

---

### Differentiation Using Backward Interpolation

<a id="differentiation-using-backward-interpolation-theory"></a>

#### Theory

NEWTON'S BACKWARD DIFFERENCE FORMULA FOR DIFFERENTIATION
========================================================

OVERVIEW:
---------
Newton's Backward Difference Formula is used to approximate the derivative of a function given a set of tabulated data points. It is particularly useful when the point of interest is near the end of the dataset and the intervals between x values are equal.

MATHEMATICAL FOUNDATION:
------------------------
Given a set of values (x0, y0), (x1, y1), ..., (xn, yn) where x values are equally spaced with step size h.
Let x be the point where the derivative is to be found.
let v = (x - xn)/h.

First Derivative f'(x):
f'(x) = (1/h) * [∇yn + ((2v+1)/2)*∇²yn + ((3v²+6v+2)/6)*∇³yn + ...]

Second Derivative f''(x):
f''(x) = (1/h²) * [∇²yn + (v+1)*∇³yn + ...]

ALGORITHM STEPS:
----------------
1. Input Parameters:
   - Number of data points (n)
   - Arrays of x and y values
   - Target value x where derivative is required

2. Construct Backward Difference Table.

3. Calculation:
   - Calculate step size h = x[1] - x[0]
   - Calculate v = (x - x[n-1])/h
   - Apply the derived formulas for f'(x) and f''(x).

4. Output:
   - Display the difference table.
   - Display the calculated first and second derivatives.

TIME COMPLEXITY:
----------------
O(n^2) to construct the difference table.
O(n) to calculate the derivative value.

ADVANTAGES:
-----------
- Simple to implement for equally spaced data.
- Accurate for points near the end of the table.

DISADVANTAGES:
--------------
- Requires equally spaced intervals.
- Accuracy decreases as the point moves away from the end of the table.

<a id="differentiation-using-backward-interpolation-implementation"></a>

#### Implementation

```cpp
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
        for(int i=n-1; i>=j; i--) diff[i][j] = diff[i][j-1] - diff[i-1][j-1];
    }

    cout<<"Backward difference table:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<setw(5)<<diff[i][j]<<" "; cout<<endl;
    }

    double h=xs[1]-xs[0];
    double u=(x-xs[n-1])/h;

    double fp = diff[n-1][1] + (2*u+1)/fact(2)*diff[n-1][2] + (3*u*u + 6*u + 2)/fact(3)*diff[n-1][3];
    fp /= h;
    double fpp = diff[n-1][2] + (u+1)*diff[n-1][3];
    fpp /= h*h;
    cout<<"f'(x) = "<<fp<<endl;
    cout<<"f''(x) = "<<fpp<<endl;

}
```

<a id="differentiation-using-backward-interpolation-sample-input"></a>

#### Sample Input

```
5
1 2 3 4 5
1 8 27 64 125
5
```

<a id="differentiation-using-backward-interpolation-sample-output"></a>

#### Sample Output

```
Num of data points:
Enter x values:
Enter y values:
Enter the targeted value:
Backward difference table:
    1     0     0     0     0
    8     7     0     0     0
   27    19    12     0     0
   64    37    18     6     0
  125    61    24     6     0
f'(x) = 75
f''(x) = 30

```

[Back to Top](#numerical-methods-lab-project)

---

## Numerical Integration

---

### Simpson's One-Third Rule

<a id="simpsons-one-third-rule-theory"></a>

#### Theory

SIMPSON'S 1/3 RULE
==================

OVERVIEW:
---------
Simpson's 1/3 Rule is a numerical method for approximating definite integrals. It works  by approximating the integrand with a second-order polynomial passing through three consecutive points.

MATHEMATICAL FOUNDATION:
------------------------
To integrate a function f(x) over [a, b]:
- Divide the interval into 'n' equal subintervals (n must be even).
- Step size h = (b - a)/n.

The approximation formula is:
Integral = (h/3) * [ (y0 + yn) + 4*(y1 + y3 + ...) + 2*(y2 + y4 + ...)]

ALGORITHM STEPS:
----------------
1. Input Parameters:
   - Function coefficients (for polynomial)
   - Limits of integration: lower (a) and upper (b)
   - Number of intervals (n) [Must be even]

2. Initialization:
   - Calculate step size: h = (b - a)/n
   - Initialize sum = f(a) + f(b)

3. Accumulation Loop:
   - For i from 1 to n-1:
     - Calculate x = a + i*h
     - If i is even: Add 2*f(x) to sum
     - If i is odd:  Add 4*f(x) to sum

4. Final Calculation:
   - Result = (h/3)*sum

TIME COMPLEXITY:
----------------
O(n) where n is the number of subintervals.

ADVANTAGES:
-----------
- More accurate than the Trapezoidal Rule for the same number of intervals.
- Gives exact results for polynomials of degree 3 or less.

DISADVANTAGES:
--------------
- The number of subintervals 'n' must be even.

<a id="simpsons-one-third-rule-implementation"></a>

#### Implementation

```cpp
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
        if((int)i%2==0) sum += 2*fun(a+i*h, crr);
        else sum += 4*fun(a+i*h, crr);
    }
    return (h*sum)/3.0;
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
```

<a id="simpsons-one-third-rule-sample-input"></a>

#### Sample Input

```
3
2 0 -3 1
3
1
10

```

<a id="simpsons-one-third-rule-sample-output"></a>

#### Sample Output

```
Degree of the function:
Coefficients of the function:
Upper limit:
Lower limit:
Number of intervals:
The polynomial:
f(x) = 2x^3 + 2x^3 + 0x^2 + -3x^1 + 1x^0
Definite integral of the polynomial = 30

```

[Back to Top](#numerical-methods-lab-project)

---

### Simpson's Three-Eighth Rule

<a id="simpsons-three-eighth-rule-theory"></a>

#### Theory

SIMPSON'S 3/8 RULE
==================

OVERVIEW:
---------
Simpson's 3/8 Rule is similar to Simpson's 1/3 Rule but is based on approximating the integrand with a third-order polynomial (cubic) passing through four consecutive points.

MATHEMATICAL FOUNDATION:
------------------------
To integrate a function f(x) over [a, b]:
- Divide the interval into 'n' equal subintervals.
- IMPORTANT: 'n' must be a multiple of 3.
- Step size h = (b - a)/n.

The approximation formula is:
Integral = (3h/8) * [(y0 + yn) + 3*(y1 + y2 + y4 + y5 + ...) + 2*(y3 + y6 + ...)]

ALGORITHM STEPS:
----------------
1. Input Parameters:
   - Function coefficients (for polynomial)
   - Limits of integration: lower (a) and upper (b)
   - Number of intervals (n) [Must be a multiple of 3]

2. Initialization:
   - Calculate step size: h = (b - a)/n
   - Initialize sum = f(a) + f(b)

3. Accumulation Loop:
   - For i from 1 to n-1:
     - Calculate x = a + i*h
     - If i is divisible by 3: Add 2*f(x) to sum
     - Else: Add 3*f(x) to sum

4. Final Calculation:
   - Result = (3*h/8)*sum

TIME COMPLEXITY:
----------------
O(n) where n is the number of subintervals.

ADVANTAGES:
-----------
- Generally more accurate than the Trapezoidal Rule.
- Gives exact results for polynomials of degree 3 or less.
- Can be used when the number of subintervals is a multiple of 3.

DISADVANTAGES:
--------------
- The number of subintervals 'n' must be a multiple of 3.
- Slightly more complex computation than the 1/3 rule.

<a id="simpsons-three-eighth-rule-implementation"></a>

#### Implementation

```cpp
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
```

<a id="simpsons-three-eighth-rule-sample-input"></a>

#### Sample Input

```
3
1 0 1 1
3
0
6
```

<a id="simpsons-three-eighth-rule-sample-output"></a>

#### Sample Output

```
Degree of the function:
Coefficients of the function:
Upper limit:
Lower limit:
Number of intervals:
The polynomial:
f(x) = 1x^3 + 1x^3 + 0x^2 + 1x^1 + 1x^0
Definite integral of the polynomial = 27.75

```

[Back to Top](#numerical-methods-lab-project)

---

## Curve Fitting

---

### Linear Regression

<a id="linear-regression-theory"></a>

#### Theory

LINEAR REGRESSION
Linear Regression is a statistical and numerical technique used to model the relationship between two variables by fitting a straight line through a set of observed data points. The objective is to determine the best-fit line that minimizes the difference between actual and predicted values.

In this project, Simple Linear Regression is implemented using the Least Squares Method, where the relationship between an independent variable (x) and a dependent variable (y) is approximated by a straight line.
The general form of the regression equation is:
y = a + bx
where
a = intercept
b = slope of the line

Least Squares Principle:
The best-fit line is obtained by minimizing the sum of squared errors between the observed values and the predicted values.

Error for each data point:
ei = yi − (a + bxi)

FORMULAS :
Let n be the number of data points.
Slope (b) = (nΣxy − ΣxΣy) / (nΣx² − (Σx)²)
Intercept (a) = (Σy − bΣx) / n

ALGORITHM STEPS:
1.Read number of data points (n)
2.Read n pairs of x and y values from input file
3.Store x and y values in dynamic arrays (vectors)
4.Calculate Σx, Σy, Σxy, and Σx²
5.Compute slope (b) using least squares formula
6.Compute intercept (a)
7.Display input data points
8.Print the best-fit linear equation

FILE HANDLING:
Input file: input_linear_regression.txt
Output file: output_linear_regression.txt

CONVERGENCE:
Produces a unique best-fit line if data variance exists
Accuracy improves with more data points
Sensitive to outliers in data

STOPPING CONDITION:
Single computation (non-iterative method)
Terminates after calculating regression coefficients

TIME COMPLEXITY:
O(n), where n is the number of data points

ADVANTAGES:
Simple and efficient implementation
Works well for linear relationships
Requires only basic arithmetic operations
No need for iterative approximation
Suitable for real-world data analysis

DISADVANTAGES:
Assumes linear relationship between variables
Sensitive to outliers
Cannot model non-linear patterns
Accuracy depends on quality of input data

<a id="linear-regression-implementation"></a>

#### Implementation

```cpp
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

```

<a id="linear-regression-sample-input"></a>

#### Sample Input

```
5
1 2
2 3
3 5
4 4
5 6

```

<a id="linear-regression-sample-output"></a>

#### Sample Output

```
The number of data points: 5
The x and y values:
1 2
2 3
3 5
4 4
5 6

Best Fit Line: y = 1.3 + 0.9x

```

[Back to Top](#numerical-methods-lab-project)

---

### Polynomial Regression

<a id="polynomial-regression-theory"></a>

#### Theory

POLYNOMIAL REGRESSION
Polynomial Regression is an extension of linear regression used to model the relationship between an independent variable (x) and a dependent variable (y) when the relationship is non-linear. Instead of fitting a straight line, polynomial regression fits a curve by using polynomial terms of x.It is commonly used when data shows curvature and cannot be accurately represented by a straight line.The general form of a polynomial regression equation is:
y = a₀ + a₁x + a₂x² + a₃x³ + … + aₙxⁿ
where
a₀, a₁, a₂, …, aₙ are regression coefficients
n is the degree of the polynomial

MATHEMATICAL FOUNDATION:
Polynomial regression is based on the Least Squares Method, where the sum of squared differences between observed and predicted values is minimized.
Error for each data point:
ei = yi − ŷi

ALGORITHM STEPS:
1.Read number of data points (n)
2.Read degree of polynomial (d)
3.Read n pairs of x and y values
4.Generate polynomial terms: x, x², x³, …, xᵈ
5.Construct normal equations using least squares method
6.Form matrix equations AX = B
7.Solve the system using Gaussian elimination or matrix inversion
8.Obtain coefficients a₀, a₁, a₂, …, aₙ
9.Display polynomial regression equation

CONVERGENCE:
Produces a unique solution if matrix is non-singular
Accuracy increases with appropriate degree selection
Overfitting may occur for very high-degree polynomials

STOPPING CONDITION:
Single computation method
Terminates after solving the system of equations

ADVANTAGES:
Can model non-linear relationships
Flexible curve fitting
Simple extension of linear regression
Widely used in data analysis and prediction
Does not require non-linear optimization

DISADVANTAGES:
Sensitive to outliers
Overfitting for high-degree polynomials
Poor extrapolation outside data range
Increased computational complexity
Requires careful degree selection

<a id="polynomial-regression-implementation"></a>

#### Implementation

```cpp
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

```

<a id="polynomial-regression-sample-input"></a>

#### Sample Input

```
5
1 2
2 3
3 5
4 4
5 6

```

<a id="polynomial-regression-sample-output"></a>

#### Sample Output

```
The number of data points: 5
Input data:
1 2
2 3
3 5
4 4
5 6

Best Fit Quadratic Curve:
y = 0.8 + 1.32857x + -0.0714286x^2

```

[Back to Top](#numerical-methods-lab-project)

---

### Transcendental Regression

<a id="transcendental-regression-theory"></a>

#### Theory

TRANSCENDENTAL REGRESSION
Transcendental Regression is a curve-fitting technique used when the relationship between the independent variable (x) and dependent variable (y) involves transcendental functions such as exponential, logarithmic, or power functions. These functions cannot be represented by simple polynomials.This regression method is widely used in scientific and engineering problems where growth, decay, or scaling behavior is observed.

MATHEMATICAL FOUNDATION:
Transcendental regression is based on the Least Squares Method, similar to linear and polynomial regression.Many transcendental models are transformed into linear form using logarithmic transformations so that linear regression techniques can be applied.

Error for each data point:
ei = yi − ŷi

ALGORITHM STEPS:
1.Read number of data points (n)
2.Read n pairs of x and y values
3.Choose appropriate transcendental model (exponential, logarithmic, or power)
4.Apply logarithmic transformation to convert the model into linear form
5.Compute required summations for least squares
6.Solve for regression coefficients
7.Convert coefficients back to original model form
8.Display the final transcendental regression equation

CONVERGENCE:
Produces a unique solution if data satisfies model assumptions
Accuracy depends on correct model selection
Sensitive to noisy data after transformation

STOPPING CONDITION:
Single computation (non-iterative)
Terminates after coefficient estimation

ADVANTAGES:
Models exponential and logarithmic behavior effectively
Suitable for growth and decay phenomena
Simple implementation using transformations
Extends applicability beyond polynomial models

DISADVANTAGES:
Requires correct model assumption
Logarithmic transformation not possible for non-positive values
Sensitive to outliers
Limited to specific functional forms

<a id="transcendental-regression-implementation"></a>

#### Implementation

```cpp
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

```

<a id="transcendental-regression-sample-input"></a>

#### Sample Input

```
5
1 2.718
2 7.389
3 20.085
4 54.598
5 148.413

```

<a id="transcendental-regression-sample-output"></a>

#### Sample Output

```
The number of data points: 5
The x and y values:
1 2.718
2 7.389
3 20.085
4 54.598
5 148.413

Best Fit Transcendental Curve:
y = 0.999909 * e^(1.00002x)

```

[Back to Top](#numerical-methods-lab-project)

---

## Ordinary Differential Equation

---

### Runge-Kutta Method

<a id="runge-kutta-method-theory"></a>

#### Theory

RUNGE-KUTTA METHOD
The Runge–Kutta (RK) Method is a numerical technique used to obtain approximate solutions of ordinary differential equations (ODEs) with given initial conditions. It is widely used because it provides high accuracy without requiring higher-order derivatives.The RK method improves upon Euler’s method by using weighted averages of slopes at different points within each step.

MATHEMATICAL FOUNDATION:
The exact solution of a differential equation is often difficult or impossible to find analytically. The Runge–Kutta method approximates the solution by expanding the Taylor series and carefully selecting intermediate slopes to achieve higher accuracy.

FOURTH-ORDER RUNGE–KUTTA FORMULA:
Let step size = h
k₁ = h f(xₙ, yₙ)
k₂ = h f(xₙ + h/2, yₙ + k₁/2)
k₃ = h f(xₙ + h/2, yₙ + k₂/2)
k₄ = h f(xₙ + h, yₙ + k₃)

Next value:
yₙ₊₁ = yₙ + (1/6)(k₁ + 2k₂ + 2k₃ + k₄)

ALGORITHM STEPS:
1.Initial values x₀, y₀
2.Step size h
3.Final value of x
4.Set x = x₀, y = y₀
5.Compute k₁, k₂, k₃, k₄ using RK formulas
6.Update y using weighted average
7.Update x = x + h
8.Continue until desired x is reached
9.Display approximate solution at each step or final value

STOPPING CRITERIA:
x reaches final value
Required number of steps completed

ADVANTAGES:
High accuracy without complex derivatives
Easy to implement
Stable for many practical problems
Widely used in scientific and engineering applications

DISADVANTAGES:
Requires multiple function evaluations per step
Fixed step size may not adapt well to stiff equations
More computation than Euler’s method

<a id="runge-kutta-method-implementation"></a>

#### Implementation

```cpp
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

```

<a id="runge-kutta-method-sample-input"></a>

#### Sample Input

```
0 1 0.1 3

```

<a id="runge-kutta-method-sample-output"></a>

#### Sample Output

```
x0, y0, h, N : 0, 1, 0.1, 3
x1=0.1     y1=1.11689
x2=0.2     y2=1.27739
x3=0.3     y3=1.50412

```

[Back to Top](#numerical-methods-lab-project)

---

## Contributors

- 2207006
- 2207027
- 2207030


---

**Department of Computer Science and Engineering**

**Khulna University of Engineering & Technology (KUET)**
