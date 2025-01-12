#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int arr[N][N]; // Максимальный размер 100x100
    
    // Чтение матрицы
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }
    
    // Печать элементов, начиная с верхнего правого угла
    // Печатаем диагонали, начиная с первой строки
    for (int col = N - 1; col >= 0; --col) {
        int i = 0, j = col;
        while (j < N && i < N) {
            cout << arr[i][j] << " ";
            ++i;
            ++j;
        }
        cout << endl;
    }

    // Печатаем диагонали, начиная с первого столбца (исключая главную диагональ)
    for (int row = 1; row < N; ++row) {
        int i = row, j = 0;
        while (i < N && j < N) {
            cout << arr[i][j] << " ";
            ++i;
            ++j;
        }
        cout << endl;
    }

    return 0;
}