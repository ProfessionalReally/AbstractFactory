#pragma once
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

//����������� ������� ������ ��� ���� ��������
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

//������ ��� ���� ����� �������� ������� ����
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

//������ ��� ���� ����� �������� ������� ����
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


//����������� �������
class ObjectFactory
{
public:
	virtual Text* CreateText() = 0;
	virtual Button* CreateButton() = 0;
};

//������� ��� �������� ������� ����
class FirstWindowObjectFactory : public ObjectFactory
{
public:
	Text* CreateText() { return new FirstWindowText; }
	Button* CreateButton() { return new FirstWindowButton; }
}; 

//������� ��� �������� ������� ����
class SecondWindowObjectFactory : public ObjectFactory
{
public:
	Text* CreateText() { return new SecondWindowText; }
	Button* CreateButton() { return new SecondWindowButton; }
};

