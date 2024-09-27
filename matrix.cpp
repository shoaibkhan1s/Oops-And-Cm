#include <iostream>
using namespace std;

class Matrix {
public:
    int a[10][10], rows, cols;

    void input() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;
        cout << "Enter elements of the matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    void multiply(Matrix& m, Matrix& result) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result.a[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        result.rows = rows;
        result.cols = m.cols;
    }
};

int main() {
    Matrix mat1, mat2, result;
    mat1.input();
    
    cout << "Enter second matrix:\n";
    mat2.input();

    mat1.multiply(mat2, result);

    cout << "Result of matrix multiplication:\n";
    result.display();

    return 0;
}
