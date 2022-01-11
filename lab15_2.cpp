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

void showMatrix(const bool d[][N]){

	for(int x = 0; x < N ; x++){
		for(int y = 0 ; y < N ; y++){

	          cout << d[x][y] << " ";
		}
		cout << "\n";
	}
}

void inputMatrix(double k[][N]){

	  for(int i = 0 ; i < N ; i++){
		  cout << "Row "<<i+1<<": ";
		  for(int j = 0; j < N ; j++){
			  cin >> k[i][j];
		  }
	  }
}

void findLocalMax(const double I[][N], bool O[][N]){

	for(int a = 0 ; a < N ; a++ )
	{
		for(int b = 0 ; b < N ; b++)
		{
                O[a][b] = false;
		}
	}

    for(int a = 1 ; a < N-1 ; a++)
	{
        for(int b = 1 ; b < N-1 ; b++)
		{
            if(I[a][b] >= I[a-1][b] && I[a][b] >= I[a+1][b] && I[a][b] >= I[a][b-1] && I[a][b] >= I[a][b+1])
			O[a][b] = true;
		}
	}
}