#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<bool> rowFlag(n, false);
    vector<bool> colFlag(m, false);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                rowFlag[i] = true;
                colFlag[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (rowFlag[i]) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        if (colFlag[j]) {
            for (int i = 0; i < n; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the elements of the matrix row-wise:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix);

    cout << "Modified matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(n + m)

