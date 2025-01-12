#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Количество цветов
    vector<int> colors(n);
    for (int i = 0; i < n; i++) {
        cin >> colors[i]; // Вводим длины участков
    }

    int max_index = 0; // Индекс максимального элемента
    for (int i = 1; i < n; i++) {
        if (colors[i] > colors[max_index]) {
            max_index = i; // Находим индекс максимального элемента
        }
    }

    int count = 1; // Минимум 1 цвет виден
    int end = colors[n - 1]; // Начинаем с последнего элемента

    // Считаем видимые цвета справа налево
    for (int i = n - 2; i >= max_index; i--) {
        if (colors[i] > end) {
            end = colors[i];
            count++;
        }
    }

    cout << count << endl; // Выводим количество видимых цветов
    return 0;
}
