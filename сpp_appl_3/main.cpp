#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int firstValue, secondValue;
    int* ptr1, * ptr2;

    std::cout << "������ ����� �����: ";
    std::cin >> firstValue;

    std::cout << "������ ����� �����: ";
    std::cin >> secondValue;

    ptr1 = &firstValue;
    ptr2 = &secondValue;

    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    std::cout << "ϳ��� ����� ������ �������:" << std::endl;
    std::cout << "����� �����: " << firstValue << std::endl;
    std::cout << "����� �����: " << secondValue << std::endl;

    return 0;
}
