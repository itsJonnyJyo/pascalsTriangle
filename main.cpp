/*
** copyright (c) Jonathan Jensen 2014
** pascal's triangle
*/

#include <string>
#include <iostream>

using namespace std;

int pascal(int row, int column);

int main(){

	int row = 0;
	int column = 0;
	char cont = 'y';
	int num = 0;

	while (cont == 'y' || cont == 'Y'){
		cout << "Welcome to Pascal's Christmas Tree! "
		<< "Just kidding. This is Pascal's Triangle.";
		cout << endl;
		
		cout << "Please enter an integer for n (the number of "
		<< "rows to compute) : ";
		cin >> row;
		cout << endl;
		
		cout << "Please enter an integer for r (the column) "
		<< endl;
		cout << "WARNING: Must be less than or equal to 'n':";
		cin >> column;
		cout << endl;
		cout << endl;

		cout << "n = " << row << endl;
		cout << "r = " << column << endl;
		cout << endl;
		
		for(int i = 0; i < row; i++){
			
			num = 1;

			for(int j = 0; j < (row-i); j++){
				cout << " ";
			}
			for(int k = 0; k <= i; k++){
				cout << " " << num;
				num = num * (i-k)/(k+1);
			}
			cout << endl;
		}
		cout << endl;

		cout << "Solution = " << pascal(row, column) << endl;		
		num = 1;

	cout << "Would you like to continue? (y/n) ";
	cin >> cont;
	cout << endl;
	}
return 0;
}
// recursively computes n choose r
int pascal (int row, int column){
	if (column == 0 || column == row){
		return 1;
	}
	else{
		return pascal (row - 1, column - 1) + 
		pascal (row - 1, column);
	}
}
