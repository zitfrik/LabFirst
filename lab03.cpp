#include<iostream>
#include <locale.h>

using namespace std;
struct House1
{
	int rooms;
	char owner[30];
	float years;

};
#pragma pack(push, 1)
struct House2
{
	int rooms;
	char owner[30];
	float years;

};
#pragma pack(pop)

int main(int argc, char** argv) {
	setlocale(LC_ALL, "russian");
	cout <<"Структура с автоматическим выравниваньем " << sizeof(House1) << endl;
	struct House1 House01 = { 2, "Vova", 42 };
	struct House1* p_House01 = &House01;
	cout << "Размер элементов структуры :" << endl;
	cout << "int: " << sizeof(House01.rooms) << endl;
	cout << "char: " << sizeof(House01.owner) << endl;
	cout << "float: " << sizeof(House01.years) << endl;
	cout << "Указатель на структуру " << p_House01 << endl;
	cout << "Указатель на переменную int " << &p_House01->rooms << endl;
	cout << "Указатель на переменную char " << &p_House01->owner << endl;
	cout << "Указатель на переменную float " << &p_House01->years << endl;
	cout << "Структура с ручным выравниваньем " << sizeof(House2) << endl;
	struct House2 House02 = { 2, "Vova", 42 };
	struct House2* p_House02 = &House02;
	cout << "Размер элементов структуры :" << endl;
	cout << "int: " << sizeof(House01.rooms) << endl;
	cout << "char: " << sizeof(House01.owner) << endl;
	cout << "float: " << sizeof(House01.years) << endl;
	cout << "Указатель на структуру " << p_House02 << endl;
	cout << "Указатель на переменную int " << &p_House02->rooms << endl;
	cout << "Указатель на переменную char " << &p_House02->owner << endl;
	cout << "Указатель на переменную float " << &p_House02->years << endl;
