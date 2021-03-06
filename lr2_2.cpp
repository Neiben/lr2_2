// lr2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "student.h"
#include <iostream>
#include <string>
#include "faculty.h"
#include "stud_fclt.h"
using namespace std;
int main()
{
	string NPS;
	cout << "enter student : " << endl;
	getline(cin,NPS);

	float karma;
	cout << "enter karma value " << endl;
	cin >> karma;

	float succes;
	cout << "enter success value " << endl;
	cin >> succes;

	student std1(NPS, karma, succes);

	std1.print();

	std1.expel();

	string name;
	cout << "enter name of your faculty : " << endl;
	cin >> name;

	float loyalty;
	cout << "choose loyalty" << endl;
	cin >> loyalty;

	faculty fc1(name, loyalty);

	fc1.print();

	stud_fclt sf1(name, loyalty, NPS, karma, succes);

	sf1.print();

	sf1.expel();
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
