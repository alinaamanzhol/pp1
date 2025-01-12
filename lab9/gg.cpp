#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Функция для вычисления GP на основе общего балла
double calculateGP(int totalScore) {
    // Если общий балл меньше 50, то GP равен 0
    if (totalScore < 50) return 0.0;

    // Вычисляем GP на основе формулы
    double gp = 1.0 + (totalScore - 50) / 15.0;

    // Ограничиваем максимальное значение GP до 4.0
    if (gp > 4.0) gp = 4.0;

    return gp;
}

int main() {
    int n;
    cin >> n;

    int totalCredits = 0;   // Общее количество кредитов
    double weightedGP = 0.0; // Суммарный взвешенный GP

    // Ввод данных для каждого предмета
    for (int i = 0; i < n; ++i) {
        int attestation1, attestation2, finalExam, credits;
        cin >> attestation1 >> attestation2 >> finalExam >> credits;

        // Вычисляем общий балл по предмету
        int totalScore = attestation1 + attestation2 + finalExam;

        // Проверка условий, если GP должен быть равен 0
        if (attestation1 + attestation2 < 30 || finalExam < 20) {
            totalScore = 0;
        }

        // Вычисляем GP для этого предмета
        double gp = calculateGP(totalScore);

        // Обновляем взвешенный GP и общее количество кредитов
        weightedGP += gp * credits;
        totalCredits += credits;
    }

    // Вычисляем итоговый GPA
    double finalGPA = totalCredits > 0 ? (weightedGP / totalCredits) : 0.0;

    // Выводим результат с точностью до 6 знаков после запятой
    cout << fixed << setprecision(6) << finalGPA << endl;

    return 0;
}
