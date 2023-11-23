include <iostream>
using namespace std;

int main() {
    double currentSalary;
    double doublePercentage;
    double bonusPercentage;
    int exceptionalRate;
    int years;

    cout << "Enter the current salary of the employee: ";
    cin >> currentSalary;

    cout << "Enter the yearly increment percentage (e.g., 5): ";
    cin >> doublePercentage;

    cout << "Enter the performance bonus percentage (e.g., 2): ";
    cin >> bonusPercentage;

    cout << "Enter the exceptional rating (1 for exceptional, 0 otherwise): ";
    cin >> exceptionalRate;

    cout << "Enter the number of years to simulate: ";
    cin >> years;

    for (int j = 1; j <= years; j++) {
        double incrementAmount = currentSalary * (doublePercentage / 100);
        currentSalary += incrementAmount;

        if (exceptionalRate == 1) {
            double bonusAmount = currentSalary * (bonusPercentage / 100);
            currentSalary += bonusAmount;
        }

        cout << "Salary after year " << j << ": " << currentSalary << endl;
    }

    return 0;
}