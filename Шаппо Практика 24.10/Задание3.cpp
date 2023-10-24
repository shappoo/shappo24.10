#include <iostream>
using namespace std;

int main() {
  
    setlocale(0, "");
    char station;

    cout << "Введите букву станции: ";
    cin >> station;

    station = tolower(station);

    switch (station) {
    case 'a':
    cout << "До станции A едет 10 минут" << endl; 
    break;
    case 'b':
    cout << "До станции B едет 15 минут" << endl; 
    break;
    case 'c':
    cout << "До станции C едет 20 минут" << endl; 
    break;
    case 'd':
    cout << "До станции D едет 25 минут" << endl; 
    break;
    case 'e': 
    cout << "До станции E едет 35 минут" << endl; 
    break;

    default: {
        cout << "Неизвестная станция." << endl;
        break;
    }
    }

    return 0;
}