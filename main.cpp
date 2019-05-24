#pragma once
#include "Mammal.h"
#include "Human.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Fish.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("Human.txt");
	ifstream fin1("Dog.txt");
	ifstream fin2("Cat.txt");
	ifstream fin3("Fish.txt");
	ofstream fout("Result.txt");

	Mammal* D = new Dog;
	Mammal* H = new Human;
	Mammal* C = new Cat;
	Mammal* F = new Fish;
	
	char menu_choice;
	char submenu_choice;
	bool exit = true;
	int id = 0;

	do
	{
		system("cls");
		cout << "Choose:" << endl;
		cout << "1. Human." << endl;
		cout << "2. Dog." << endl;
		cout << "3. Cat." << endl;
		cout << "4. Fish." << endl;
		cout << "5. Exit." << endl;
		cout << ">";
		cin >> id;
		switch (id)
		{
		case 1:
			/*case '1':
				system("cls");
				cout << "1. Read information from the file." << endl;
				cout << "2. Insert your own information." << endl;
				cout << "3. Print information on the screen." << endl;
				cout << "4. Print information in the result file." << endl;
				cout << ">";
				cin >> submenu_choice;
				switch (submenu_choice) {
				case '1':

				}
			case '2':
				system("cls");
				cout << "1. Read information from the file." << endl;
				cout << "2. Insert own information." << endl;
				cout << "3. Print information on the screen." << endl;
				cout << "4. Print information in the result file." << endl;
				cout << ">";
				cin >> submenu_choice;
			case '3':
				system("cls");
				cout << "1. Read information from the file." << endl;
				cout << "2. Insert own information." << endl;
				cout << "3. Print information on the screen." << endl;
				cout << "4. Print information in the result file." << endl;
				cout << ">";
				cin >> submenu_choice;
			case '4':
				system("cls");
				cout << "1. Read information from the file." << endl;
				cout << "2. Insert own information." << endl;
				cout << "3. Print information on the screen." << endl;
				cout << "4. Print information in the result file." << endl;
				cout << ">";
				cin >> submenu_choice;
			}*/
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				H->enterf(fin);
				system("Pause");
				break;
			case '2':
				H->enter();
				system("Pause");
				break;
			case '3':
				H->print();
				system("Pause");
				break;
			case '4':
				H->fprint(fout);
				system("Pause");
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				D->enterf(fin);
				system("Pause");
			case '2':
				D->enter();
				system("Pause");
				break;
			case '3':
				D->print();
				system("Pause");
				break;
			case '4':
				D->fprint(fout);
				system("Pause");
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				C->enterf(fin);
				system("Pause");
				break;
			case '2':
				C->enter();
				system("Pause");
				break;
			case '3':
				C->print();
				system("Pause");
				break;
			case '4':
				C->fprint(fout);
				system("Pause");
				break;
			}
			break;
		case 4:
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				F->enterf(fin);
				system("Pause");
				break;
			case '2':
				F->enter();
				system("Pause");
				break;
			case '3':
				F->print();
				system("Pause");
				break;
			case '4':
				F->fprint(fout);
				system("Pause");
				break;
			}
			break;
		case 5:
			exit = false;
			break;
		}
	} while(exit);

	fin.close();
	fin1.close();
	fin2.close();
	fin3.close();
	fout.close();
	system("Pause");
	return 0;
}
