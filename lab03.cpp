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
struct House3
{
	int rooms;
	char owner[30];
	float years;

};
#pragma pack(0)

int main(int argc, char** argv) {
	setlocale(LC_ALL, "russian");
	cout << "Структура с автоматическим выравниваньем " << sizeof(House1) << endl;
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
	cout << "Структура с выравниваньем " << sizeof(House2) << endl;
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
	cout << "Структура без выравнивания " << sizeof(House3) << endl;
	struct House3 House03 = { 2, "Vova", 42 };
	struct House3* p_House03 = &House03;
	cout << "Размер элементов структуры :" << endl;
	cout << "int: " << sizeof(House01.rooms) << endl;
	cout << "char: " << sizeof(House01.owner) << endl;
	cout << "float: " << sizeof(House01.years) << endl;
	cout << "Указатель на структуру " << p_House03 << endl;
	cout << "Указатель на переменную int " << &p_House03->rooms << endl;
	cout << "Указатель на переменную char " << &p_House03->owner << endl;
	cout << "Указатель на переменную float " << &p_House03->years << endl;
}
