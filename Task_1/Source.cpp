#include<iostream>
#include<windows.h>
#include<string>

int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;

	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!" << std::endl;

	system("pause");

	return 0;
}