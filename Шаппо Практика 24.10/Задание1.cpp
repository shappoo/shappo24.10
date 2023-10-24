#include <iostream>
using namespace std;
 
int main() {

    setlocale(0, "");
    int num;
    cout << "Введите количество посетителей спортзала: ";
    cin >> num;

    if (num <= 0) {
        cout << "Введено некорректное количество посетителей." << endl;
        return 0;
    }

    int maxAge = 0;
    int minAge = 100;
    int totalAge = 0;

    for (int i = 0; i < num; i++) {
        int age;
        cout << "Введите возраст посетителя " << (i + 1) << ": ";
        cin >> age;

        if (age > maxAge) {
            maxAge = age;
        }
        if (age < minAge) {
            minAge = age;
        }
        totalAge += age;
    }

    double averageAge = static_cast<double>(totalAge) / num;

    cout << "Самый старший посетитель имеет возраст: " << maxAge << endl;
    cout << "Самый молодой посетитель имеет возраст: " << minAge << endl;
    cout << "Средний возраст посетителей: " << averageAge << endl;

    return 0;
}