#include <iostream>

using namespace std;

int main() {

    setlocale(0, "");
    int a, b;

    cout << "Введите два однозначных числа: ";
    cin >> a >> b;

    int correct = a * b;

    cout << "Какое число получится, если умножить " << a << " на " << b << "? ";

    int user_answer;
    cin >> user_answer;

    if (user_answer == correct) {
        cout << "Правильно! Ответ: " << correct << endl;
    }
    else {
        cout << "Неправильно! Правильный ответ: " << correct << endl;
    }

    return 0;
}