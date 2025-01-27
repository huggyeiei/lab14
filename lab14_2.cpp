#include <iostream>
using namespace std;

const int N = 5;

void inputMatrix(double matrix[N][N]) {
    for(int a =1; a<=N ;a++){
    cout << "Row "<<a<<": ";}
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
}

void findLocalMax(double A[N][N], bool B[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N-1 || j == 0 || j == N-1) {
                B[i][j] = false;
            } else {
                B[i][j] = (A[i][j] >= A[i-1][j] && A[i][j] >= A[i+1][j] &&
                           A[i][j] >= A[i][j-1] && A[i][j] >= A[i][j+1]);
            }
        }
    }
}

void showMatrix(bool matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << (matrix[i][j] ? 1 : 0) << " ";
        }
        cout << endl;
    }
}


int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 
