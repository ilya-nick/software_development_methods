#ifndef SHOWRECORD_H
#define SHOWRECORD_H
#include "Airplane.h"
void ShowRecord(const Airplane& airplane) {
    std::cout << "Название: " << airplane.manufacturer << std::endl;
    std::cout << "Модель: " << airplane.model << std::endl;
    std::cout << "Год выпуска: " << airplane.year << std::endl;
    std::cout << "Вместимость: " << airplane.capacity << std::endl;
    std::cout << "Дальность полета: " << airplane.range << std::endl;
    std::cout << "--------------------------" << std::endl;
}
#endif SHOWRECORD_H
