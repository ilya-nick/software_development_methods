#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct Airplane {
    char manufacturer[50];
    char model[50];
    int year;
    int capacity;
    int range;
};

const char* path = "airplanes.dat";

void ShowRecord(const Airplane& airplane) {
    cout << "Название: " << airplane.manufacturer << endl;
    cout << "Модель: " << airplane.model << endl;
    cout << "Год выпуска: " << airplane.year << endl;
    cout << "Вместимость: " << airplane.capacity << endl;
    cout << "Дальность полета: " << airplane.range << endl;
    cout << "--------------------------" << endl;
}

void AddRecord(const char* path) {
    Airplane airplane;
    ofstream File(path, ios::app | ios::binary);
    if (!File) {
        cerr << "Файл не открывается!!!" << endl;
        exit(1);
    }
    cout << "Введите производителя:" << endl;
    cin >> airplane.manufacturer;
    cout << "Введите модель:" << endl;
    cin >> airplane.model;
    cout << "Введите год выпуска:" << endl;
    cin >> airplane.year;
    cout << "Введите вместимость:" << endl;
    cin >> airplane.capacity;
    cout << "Ошибка: Файл не может быть открыт!" << endl;
    cin >> airplane.range;
    File.write(reinterpret_cast<char*>(&airplane), sizeof(Airplane));
    File.close();
}

void ShowAllRecords(const char* path) {
    Airplane airplane;
    ifstream File(path, ios::binary);
    if (!File) {
        cerr << "Ошибка: Файл не может быть открыт!" << endl;
        exit(1);
    }
    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        ShowRecord(airplane);
    }
    File.close();
}

void SearchManufacturerAttribute(const char* path, const char* manufacturer) {
    Airplane airplane;
    ifstream file(path, ios::binary);

    if (!file) {
        cerr << "Ошибка: Файл не может быть открыт!" << endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (file.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (strstr(airplane.manufacturer, manufacturer)) {
            ShowRecord(airplane);
            found = true;
        }
    }

    file.close();

    if (!found) {
        cerr << "Данные по производителю '" << manufacturer << "' не найдены." << endl;
    }
}

void SearchModelAttribute(const char* path, const char* model) {
    Airplane airplane;
    ifstream file(path, ios::binary);

    if (!file) {
        cerr << "Ошибка: Файл не может быть открыт!" << endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (file.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (strstr(airplane.model, model)) {
            ShowRecord(airplane);
            found = true;
        }
    }

    file.close();

    if (!found) {
        cerr << "Данные по модели '" << model << "' не найдены." << endl;
    }
}

void SearchYearAttribute(const char* path, int minYear, int maxYear) {
    Airplane airplane;
    ifstream file(path, ios::binary);

    if (!file) {
        cerr << "Ошибка: Файл не может быть открыт!" << endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (file.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (airplane.year >= minYear && airplane.year <= maxYear) {
            ShowRecord(airplane);
            found = true;
        }
    }

    file.close();

    if (!found) {
        cerr << "Данные по году выпуска " << minYear << "-" << maxYear << " не найдены." << endl;
    }
}

void SearchCapacityAttribute(const char* path, int minCapacity, int maxCapacity) {
    Airplane airplane;
    ifstream file(path, ios::binary);

    if (!file) {
        cerr << "Ошибка: Файл не может быть открыт!" << endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (file.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (airplane.capacity >= minCapacity && airplane.capacity <= maxCapacity) {
            ShowRecord(airplane);
            found = true;
        }
    }

    file.close();

    if (!found) {
        cerr << "Данные по вместимости " << minCapacity << "-" << maxCapacity << " не найдены." << endl;
    }
}

void SearchRangeAttribute(const char* path, int minRange, int maxRange) {
    Airplane airplane;
    ifstream file(path, ios::binary);

    if (!file) {
        cerr << "Ошибка: Файл не может быть открыт!" << endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (file.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (airplane.range >= minRange && airplane.range <= maxRange) {
            ShowRecord(airplane);
            found = true;
        }
    }

    file.close();

    if (!found) {
        cerr << "Данные по дальности полета " << minRange << "-" << maxRange << " не найдены." << endl;
    }
}

void SearchAttribute(const char* path) {
    int attribute;
    cout << "Выберите атрибут для поиска:" << endl;
    cout << "1 - Название (по строке или подстроке)" << endl;
    cout << "2 - Модель (по строке или подстроке)" << endl;
    cout << "3 - Год выпуска (введите минимум и максимум)" << endl;
    cout << "4 - Вместимость (введите минимум и максимум)" << endl;
    cout << "5 - Дальность полета (введите минимум и максимум)" << endl;
    cin >> attribute;
    bool found = false;
    switch (attribute) {
        case (1): {
            char manufacturer[50];
            cout << "Введите название производителя: ";
            cin >> manufacturer;
            SearchManufacturerAttribute(path, manufacturer);
            break;
        }
        case (2): {
            char model[50];
            cout << "Введите модель: ";
            cin >> model;
            SearchModelAttribute(path, model);
            break;
        }
        case (3): {
            int minYear, maxYear;
            cout << "Введите минимальный год: ";
            cin >> minYear;
            cout << "Введите максимальный год: ";
            cin >> maxYear;
            SearchYearAttribute(path, minYear, maxYear);
            break;
        }
        case (4): {
            int minCapacity, maxCapacity;
            cout << "Введите минимальную вместимость: ";
            cin >> minCapacity;
            cout << "Введите максимальную вместимость: ";
            cin >> maxCapacity;
            SearchCapacityAttribute(path, minCapacity, maxCapacity);
            break;
        }
        case (5): {
            int minRange, maxRange;
            cout << "Введите минимальную дальность полета: ";
            cin >> minRange;
            cout << "Введите максимальную дальность полета: ";
            cin >> maxRange;
            SearchRangeAttribute(path, minRange, maxRange);
            break;
        }
    }
}

int main() {
    int choice;
    system("chcp 65001");
    do {
        cout << "1 - Добавить новую запись о самолете" << endl;
        cout << "2 - Показать все записи о самолетах" << endl;
        cout << "3 - Поиск записей о самолетах" << endl;
        cout << "4 - Выйти из программы" << endl;
        cin >> choice;

        switch (choice) {
            case (1): {
                AddRecord(path);
                break;
            }
            case (2): {
                ShowAllRecords(path);
                break;
            }
            case (3): {
                SearchAttribute(path);
                break;
            }
        }
    } while (choice != 4);

    return 0;
}
