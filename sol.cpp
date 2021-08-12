#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int r, c;
		cin >> r >> c;
		vector<vector<char>> a(r, vector<char>(c));
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> a[i][j];
			}
		}
		// find the word by ROW
		bool checker = false;
		for (int i = 0; i < r; i++) {
			string by_row = "";
			for (int j = 0; j < c; j++) {
				by_row += string(1, a[i][j]);
			}
			// don't forget to change all the letters in the row to lowercase
			// (case insensitive based on the problem statement)
			for (char& ch : by_row) {
				ch = tolower(ch);
			}
			// find the word in the current row
			if (by_row.find("spoon") != string::npos) {
				checker = true;
				break;
			}
		}
		// find the word by COLUMN
		for (int i = 0; i < c; i++) {
			string by_column = "";
			for (int j = 0; j < r; j++) {
				by_column += string(1, a[j][i]);
			}
			// don't forget to change all the letters in the row to lowercase
			// (case insensitive based on the problem statement)
			for (char& ch : by_column) {
				ch = tolower(ch);
			}
			// find the word in the current column
			if (by_column.find("spoon") != string::npos) {
				checker = true;
				break;
			}
		}
		cout << (checker ? "There is a spoon!" : "There is indeed no spoon!") << '\n';
	}
	return 0;
}
