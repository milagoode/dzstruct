//#include <iostream>
//#include <string>
//#include <iomanip> //для таблиць(сетв(ширина) для вирівнювання)
//using namespace std;
//
//struct Cars {
//    string brand;
//    string model;
//    short year;
//    float price;
//    bool torg;
//    string engine;
//    string color;
//    short owners;
//};
//
//void fillCar(Cars& car) {
//    cout << "введіть марку автомобіля: " << endl;
//    getline(cin, car.brand);
//    cout << "введіть модель автомобіля: " << endl;
//    getline(cin, car.model);
//    cout << "введіть рік випуску: " << endl;
//    cin >> car.year;
//    cout << "введіть ціну($): " << endl;
//    cin >> car.price;
//    cout << "чи можливий торг (1 - так, 0 - ні): " << endl;
//    cin >> car.torg;
//    cin.ignore();
//    cout << "введіть дані авто (двигун): " << endl;
//    getline(cin, car.engine);
//    cout << "введіть колір: " << endl;
//    getline(cin, car.color);
//    cout << "введіть кількість власників: " << endl;
//    cin >> car.owners;
//    cin.ignore(); 
//}
//
//void displayCars(Cars cars[], short count) {
//    cout << "\n";
//    cout << setw(15) << left << "марка" << " | "
//        << setw(15) << left << "модель" << " | "
//        << setw(10) << left << "рік" << " | "
//        << setw(10) << left << "ціна" << " | "
//        << setw(10) << left << "торг" << " | "
//        << setw(15) << left << "двигун" << " | "
//        << setw(15) << left << "колір" << " | "
//        << setw(10) << left << "власники" << endl;
//
//    cout << string(130, '-') << endl;
//
//    for (short i = 0; i < count; i++) {
//        cout << setw(15) << left << cars[i].brand << " | "
//            << setw(15) << left << cars[i].model << " | "
//            << setw(10) << left << cars[i].year << " | "
//            << setw(10) << left << cars[i].price << " | "
//            << setw(10) << left << (cars[i].torg ? "Так" : "Ні") << " | "
//            << setw(15) << left << cars[i].engine << " | "
//            << setw(15) << left << cars[i].color << " | "
//            << setw(10) << left << cars[i].owners << endl;
//    }
//}
//
//int main() {
//    system("chcp 1251>null");
//    const short maxCars = 3;
//    Cars cars[maxCars];
//    short index = 0;
//    short yn;
//
//    while (true) {
//        Cars& c = cars[index];
//        fillCar(c);
//        index++;
//        cout << "чи хочете додати ще один автомобіль (y=1/n=2)? " << endl;
//        cin >> yn;
//        if (yn == 2) break;
//        cin.ignore();
//    }
//
//    displayCars(cars, index);
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

struct Boiler {
    string brand;
    string color; 
    short power; 
    float volume; 
    float temp;
};

void Info(Boiler& boiler) {
    cout << "інформація про бойлер:\n";
    cout << "фірма: " << boiler.brand << endl;
    cout << "колір: " << boiler.color << endl;
    cout << "потужність: " << boiler.power << " Вт" << endl;
    cout << "об'єм: " << boiler.volume << " л" << endl;
    cout << "температура нагріву: " << boiler.temp << " °C" << endl;
}

int main() {
    system("chcp 1251>null");

    Boiler Boiler;

    cout << "введіть фірму бойлера: ";
    getline(cin, Boiler.brand);
    cout << "введіть колір бойлера: ";
    getline(cin, Boiler.color);
    cout << "введіть потужність бойлера (Вт): ";
    cin >> Boiler.power;
    cout << "введіть об'єм бойлера (л): ";
    cin >> Boiler.volume;
    cout << "введіть температуру нагріву бойлера (°C): ";
    cin >> Boiler.temp;
    Info(Boiler);

    return 0;
}
