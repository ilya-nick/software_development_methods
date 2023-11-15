#ifndef MRPO_LAB1_3_SEARCHRECORDS_H
#define MRPO_LAB1_3_SEARCHRECORDS_H
#include "Airplane.h"
#include <cstring>
#include <fstream>
void SearchManufacturerAttribute(const char* path, const char* manufacturer) {
    Airplane airplane;
    std::ifstream File(path, std::ios::binary);

    if (!File) {
        std::cerr << "Ошибка: Файл не может быть открыт!" << std::endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (strstr(airplane.manufacturer, manufacturer)) {
            ShowRecord(airplane);
            found = true;
        }
    }

    File.close();

    if (!found) {
        std::cerr << "Данные по производителю '" << manufacturer << "' не найдены." << std::endl;
    }
}

void SearchModelAttribute(const char* path, const char* model) {
    Airplane airplane;
    std::ifstream File(path, std::ios::binary);

    if (!File) {
        std::cerr << "Ошибка: Файл не может быть открыт!" << std::endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (strstr(airplane.model, model)) {
            ShowRecord(airplane);
            found = true;
        }
    }

    File.close();

    if (!found) {
        std::cerr << "Данные по модели '" << model << "' не найдены." << std::endl;
    }
}

void SearchYearAttribute(const char* path, int minYear, int maxYear) {
    Airplane airplane;
    std::ifstream File(path, std::ios::binary);

    if (!File) {
        std::cerr << "Ошибка: Файл не может быть открыт!" << std::endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (airplane.year >= minYear && airplane.year <= maxYear) {
            ShowRecord(airplane);
            found = true;
        }
    }

    File.close();

    if (!found) {
        std::cerr << "Данные по году выпуска " << minYear << "-" << maxYear << " не найдены." << std::endl;
    }
}

void SearchCapacityAttribute(const char* path, int minCapacity, int maxCapacity) {
    Airplane airplane;
    std::ifstream File(path, std::ios::binary);

    if (!File) {
        std::cerr << "Ошибка: Файл не может быть открыт!" << std::endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (airplane.capacity >= minCapacity && airplane.capacity <= maxCapacity) {
            ShowRecord(airplane);
            found = true;
        }
    }

    File.close();

    if (!found) {
        std::cerr << "Данные по вместимости " << minCapacity << "-" << maxCapacity << " не найдены." << std::endl;
    }
}

void SearchRangeAttribute(const char* path, int minRange, int maxRange) {
    Airplane airplane;
    std::ifstream File(path, std::ios::binary);

    if (!File) {
        std::cerr << "Ошибка: Файл не может быть открыт!" << std::endl;
        exit(1);
    }

    bool found = false; // Флаг, указывающий, были ли найдены данные

    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        if (airplane.range >= minRange && airplane.range <= maxRange) {
            ShowRecord(airplane);
            found = true;
        }
    }

    File.close();

    if (!found) {
        std::cerr << "Данные по дальности полета " << minRange << "-" << maxRange << " не найдены." << std::endl;
    }
}

void SearchAttribute(const char* path) {
    int attribute;
    std::cout << "Выберите атрибут для поиска:" << std::endl;
    std::cout << "1 - Производитель (по строке или подстроке)" << std::endl;
    std::cout << "2 - Модель (по строке или подстроке)" << std::endl;
    std::cout << "3 - Год выпуска (введите минимум и максимум)" << std::endl;
    std::cout << "4 - Вместимость (введите минимум и максимум)" << std::endl;
    std::cout << "5 - Дальность полета (введите минимум и максимум)" << std::endl;
    std::cin >> attribute;
    bool found = false;
    switch (attribute) {
        case (1): {
            char manufacturer[50];
            std::cout << "Введите производителя: ";
            std::cin >> manufacturer;
            SearchManufacturerAttribute(path, manufacturer);
            break;
        }
        case (2): {
            char model[50];
            std::cout << "Введите модель: ";
            std::cin >> model;
            SearchModelAttribute(path, model);
            break;
        }
        case (3): {
            int minYear, maxYear;
            std::cout << "Введите минимальный год: ";
            std::cin >> minYear;
            std::cout << "Введите максимальный год: ";
            std::cin >> maxYear;
            SearchYearAttribute(path, minYear, maxYear);
            break;
        }
        case (4): {
            int minCapacity, maxCapacity;
            std::cout << "Введите минимальную вместимость: ";
            std::cin >> minCapacity;
            std::cout << "Введите максимальную вместимость: ";
            std::cin >> maxCapacity;
            SearchCapacityAttribute(path, minCapacity, maxCapacity);
            break;
        }
        case (5): {
            int minRange, maxRange;
            std::cout << "Введите минимальную дальность полета: ";
            std::cin >> minRange;
            std::cout << "Введите максимальную дальность полета: ";
            std::cin >> maxRange;
            SearchRangeAttribute(path, minRange, maxRange);
            break;
        }
    }
}
#endif //MRPO_LAB1_3_SEARCHRECORDS_H
