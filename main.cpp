// The first column is AZN, the second amount is USD, the thrid amount is EUR. The program calculates the total amount in AZN.
//
#include <iostream>
using namespace std;
#include <vector>
int main()
{
	int a, b=3;
	cout << "Enter a number of customers :" << endl;
	cin >> a;
	vector<vector<double>>massiv(a, vector<double>(b));
	for (int i = 0;i < a;i++) {
		for (int k = 0;k < b;k++) {
			cout << "Enter a amount" << endl;
			cin >> massiv[i][k];
		}
	}
	long double sum = 0;
	int row = 0, column = 0;
	while (row < a) {
		while (column < b) {
			if (column == 0) {
				sum += massiv[row][column];
			}
			else if (column == 1) {
				sum += massiv[row][column] * 1.7;
			}
			else {
				sum += massiv[row][column] * 1.85;
			}
			column++;
		}
		row++;
		column = 0;
	}
	int x;
	cout << "\nChoose one 1 or 2" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cout << "Total amount in AZN:" << sum << endl;
		break;
	case 2:
		if (sum > 50000) {
			cout << "The bank is stable" << endl;
		}
		else {
			cout << "Warning! Central Bank reactivation risk!" << endl;
		}
		break;
	default:
		cout << "Invalid choice please select 1 or 2" << endl;
	}
	return 0;
}
