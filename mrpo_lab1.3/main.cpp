#include <iostream>
#include "ShowAllRecords.h"
#include "AddRecord.h"
#include "SearchRecords.h"
const char* path = "airplanes3.dat";
int main() {
    int choice;
    system("chcp 65001");
    do {
        std::cout << "1 - Добавить новую запись о самолете" << std::endl;
        std::cout << "2 - Показать все записи о самолетах" << std::endl;
        std::cout << "3 - Поиск записей о самолетах" << std::endl;
        std::cout << "4 - Выйти из программы" << std::endl;
        std::cin >> choice;

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
