#ifndef ADDRECORD_H
#define ADDRECORD_H
#include <fstream>
void AddRecord(const char* path) {
    Airplane airplane;
    std::ofstream File(path, std::ios::app | std::ios::binary);
    if (!File) {
        std::cerr << "Файл не открывается!!!" << std::endl;
        exit(1);
    }
    std::cout << "Введите производителя:" << std::endl;
    std::cin >> airplane.manufacturer;
    std::cout << "Введите модель:" << std::endl;
    std::cin >> airplane.model;
    std::cout << "Введите год выпуска:" << std::endl;
    std::cin >> airplane.year;
    std::cout << "Введите вместимость:" << std::endl;
    std::cin >> airplane.capacity;
    std::cout << "Введите дальность полёта:" << std::endl;
    std::cin >> airplane.range;
    File.write(reinterpret_cast<char*>(&airplane), sizeof(Airplane));
    File.close();
}
#endif ADDRECORD_H
