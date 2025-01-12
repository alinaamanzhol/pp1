#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double calculateGP(double score) {
    if (score >= 95) return 4.0; // Максимальная оценка
    if (score < 50) return 0.0;  // Если меньше 50, возвращаем 0

    int pointsAbove50 = score - 50; // Количество очков выше 50
    double gp = 1.0 + (pointsAbove50 / 5) * (1.0 / 3); // Увеличение на 1/3 за каждые 5 очков

    return min(gp, 4.0); // Ограничиваем максимумом 4.0
}

int main() {
    int n;
    cin >> n;

    double totalGPA = 0.0; // Общая сумма GP
    int totalCredits = 0;  // Общая сумма кредитов

    for (int i = 0; i < n; i++) {
        double a1, a2, final;
        int credits;
        cin >> a1 >> a2 >> final >> credits;

        double totalScore = a1 + a2 + final;

        if (final < 20 || a1 + a2 < 30) {
            // Условие для GP = 0
            totalCredits += credits; // Кредиты всё равно учитываются
            continue;
        }

        double gp = calculateGP(totalScore); // Расчёт GP для предмета
        totalGPA += gp * credits; // Взвешенная оценка
        totalCredits += credits; // Суммируем кредиты
    }

      
        cout << fixed << setprecision(6) << totalGPA / totalCredits << endl; // Итоговый GPA
        

    return 0;
}