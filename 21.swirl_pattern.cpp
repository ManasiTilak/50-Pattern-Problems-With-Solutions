#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];

    int num = 1;
    int startRow = 0, endRow = n - 1, startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
        for (int i = startRow; i <= endRow; ++i) {
            matrix[i][startCol] = num++;
        }
        ++startCol;

        for (int i = startCol; i <= endCol; ++i) {
            matrix[endRow][i] = num++;
        }
        --endRow;

        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; --i) {
                matrix[i][endCol] = num++;
            }
            --endCol;
        }

        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; --i) {
                matrix[startRow][i] = num++;
            }
            ++startRow;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
