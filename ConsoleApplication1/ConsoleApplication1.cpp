#include <iostream>
using namespace std;

double S(double radius) {
    double PI = 3.14159265358979323846;
    return PI * radius * radius;
}


double S(double outR, double innerR) {
    if (outR <= innerR) {
        cout << "Внешний радиус должен быть больше внутреннего радиуса!" << endl;
        return 0;
    }
    return S(outR) - S(innerR);
}



int main() {

    setlocale(LC_ALL, "RUS");
    while (true)
    {
        int inp;
        double outR, innerR, defR;
        cout << "1. Найти площадь круга\n";
        cout << "2. Натйи площадь кольца" << endl;
        cin >> inp;
        if (inp == 1) {
            cout << "Введите  радиус круга: ";
            cin >> defR;
            double cirS = S(defR);
            cout << "Площадь круга: " << cirS << endl;
        }
        else if (inp == 2) {
            cout << "Введите внешний радиус кольца: ";
            cin >> outR;
            cout << "Введите внутренний радиус кольца: ";
            cin >> innerR;
            double ringS = S(outR, innerR);
            cout << "Площадь кольца: " << ringS << endl;
        }
        else {
            cout << "Дейсвтие не найдено!";
        }

        string inp1;
        cout << "Хотите посчитать снова? y/n - ";
        cin >> inp1;
        if (inp1 == "y") {
            continue;
        }
        else {
            break;
        }

    }

}

