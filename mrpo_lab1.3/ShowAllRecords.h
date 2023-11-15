#ifndef SHOWALLRECORDS_H
#define SHOWALLRECORDS_H
#include "ShowRecord.h"
#include "Airplane.h"
#include <fstream>
void ShowAllRecords(const char* path) {
    Airplane airplane;
    std::ifstream File(path, std::ios::binary);
    if (!File) {
        std :: cerr << "Ошибка: Файл не может быть открыт!" << std :: endl;
        exit(1);
    }
    while (File.read(reinterpret_cast<char*>(&airplane), sizeof(Airplane))) {
        ShowRecord(airplane);
    }
    File.close();
}
#endif //SHOWALLRECORDS_H
