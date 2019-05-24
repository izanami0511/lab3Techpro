#pragma once
#include "Animal.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Animal::Animal() 
{
	breed = '0';
	name = '0';
	color = '0';
	name_owner = '0';
	surname_owner = '0';
	patronymic = '0';
	size = '0';
}

Animal::Animal(const char b[], const char n[], const char c[], const char no[], const char s[]) 
{
	breed = b;
	name = n;
	color = c;
	name_owner = no;
	size = s;
}

Animal::Animal(Animal& op1)
{
	breed = op1.breed;
	name = op1.name;
	color = op1.color;
	name_owner = op1.name_owner;
	size = op1.size;
}

Animal::~Animal()
{
	cout << "~Animal" << endl;
}



void Animal::enter()
{
	cout << "Enter Breed: ";
	cin >> this->breed;
	cout << "Enter Name: ";
	cin >> this->name;
	cout << "Enter Color: ";
	cin >> this->color;
	cout << "Enter Owner's Full name: ";
	cin >> this->name_owner;
	cin >> this->surname_owner;
	cin >> this->patronymic;
	cout << "Enter Size of the: ";
	cin >> this->size;
}

void Animal::getDescription()
{
	cout << "Animal:";
}

void Animal::getDescriptionf(ofstream &op1)
{
	op1<< "---------------This is the Animal.-----------------" << endl;
}

void Animal::enterf(ifstream &op1)
{
	getline(op1, breed);
	getline(op1, name);
	getline(op1, color);
	getline(op1, name_owner);
	getline(op1, surname_owner);
	getline(op1, patronymic);
	getline(op1, size);
}

void Animal::print() 
{
	this->getDescription();
	cout << "Breed: "<< breed << endl;
	cout << "Name: "<< name << endl;
	cout << "Color: " << color << endl;
	cout << "Name of the Owner: " << name_owner <<" "<< surname_owner <<" "<< patronymic << endl;
	cout << "Size: " << size << endl;
}

void Animal::fprint(ofstream &op1)
{
	this->getDescriptionf(op1);
	op1 << "Breed: " << breed << endl;
	op1 << "Name: " << name << endl;
	op1 << "Color: " << color << endl;
	op1 << "Name of the Owner: " << name_owner << " " << surname_owner << " " << patronymic << endl;
	op1 << "Size: " << size << endl;
}