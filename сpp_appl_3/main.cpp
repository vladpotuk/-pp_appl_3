#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int firstValue, secondValue;
    int* ptr1, * ptr2;

    std::cout << "¬вед≥ть перше число: ";
    std::cin >> firstValue;

    std::cout << "¬вед≥ть друге число: ";
    std::cin >> secondValue;

    ptr1 = &firstValue;
    ptr2 = &secondValue;

    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    std::cout << "ѕ≥сл€ обм≥ну м≥сц€ми значень:" << std::endl;
    std::cout << "ѕерше число: " << firstValue << std::endl;
    std::cout << "ƒруге число: " << secondValue << std::endl;

    return 0;
}
