#pragma once
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

//Абстрактные базовые классы для всех объектов
class Text
{
public:
	virtual void info() = 0;
};

class Button
{
public:
	virtual void info() = 0;
};

//Классы для всех видов объектов первого окна
class FirstWindowText : public Text
{
public:
	void info() { cout << "FirstWindowText" << endl;  }
};

class FirstWindowButton : public Button
{
public:
	void info() { cout << "FirstWindowButton" << endl; }
};

//Классы для всех видов объектов второго окна
class SecondWindowText : public Text
{
public:
	void info() { cout << "SecondWindowText" << endl; }
};

class SecondWindowButton : public Button
{
public:
	void info() { cout << "SecondWindowButton" << endl;  }
};


//Абстрактная фабрика
class ObjectFactory
{
public:
	virtual Text* CreateText() = 0;
	virtual Button* CreateButton() = 0;
};

//Фабрика для объектов первого окна
class FirstWindowObjectFactory : public ObjectFactory
{
public:
	Text* CreateText() { return new FirstWindowText; }
	Button* CreateButton() { return new FirstWindowButton; }
}; 

//Фабрика для объектов второго окна
class SecondWindowObjectFactory : public ObjectFactory
{
public:
	Text* CreateText() { return new SecondWindowText; }
	Button* CreateButton() { return new SecondWindowButton; }
};

