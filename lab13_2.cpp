#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

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

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double A[][N]){
	for(int j=0;j<N;j++){
		cout << "Row "<<j+1<<" : ";
		for(int i=0;i<N;i++){	
		cin>>A[j][i];
		}
	}
}

void findLocalMax(const double y[][N], bool z[][N]){
	for(int a=0;a<N;a++){
		for(int b=0;b<N;b++){
			z[a][b] = 0;
		}
	}

	for(int i=1;i<N-1;i++){
		for(int j=1;j<N-1;j++){
			if(y[i][j]>=y[i-1][j] && y[i][j]>=y[i][j-1] && y[i][j]>=y[i][j+1] && y[i][j]>=y[i+1][j]){
				z[i][j]=true;
			}else z[i][j]=false;
		}
	}
}

void showMatrix(const bool B[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<B[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
}
	
