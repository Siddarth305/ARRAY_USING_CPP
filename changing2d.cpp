#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int array[rows][cols];

    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    cout << "Original 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed 2D array:" << endl;
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
