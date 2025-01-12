#include <iostream>
#include <algorithm>  // Для std::sort
using namespace std;

int main() {
    int size;;
    cin >> size;
    int arr[size];
    int arr2[size];

    int temp[size]; // Временный массив для сортировки
    int count = 0; // Количество элементов, отличных от -1

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    
    }

    // Сохранение всех элементов, не равных -1
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            temp[count++] = arr[i];
        }
    }

    // Сортируем временный массив с использованием std::sort
    sort(temp, temp + count);

    // Копируем отсортированные элементы обратно в arr2, пропуская -1
    int index = 0; // Индекс для отсортированных элементов
    for (int i = 0; i < size; i++) {
        if (arr[i] == -1) {
            arr2[i] = -1; // Оставляем -1 на месте
        } else {
            arr2[i] = temp[index++]; // Вставляем отсортированные элементы
        }
    }

    // Вывод результата
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}