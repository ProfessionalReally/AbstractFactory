#include "Header.h"

int main()
{
	ObjectFactory* FirstFactory = new FirstWindowObjectFactory();
	ObjectFactory* SecondFactory = new SecondWindowObjectFactory();

	vector<Text*> text;
	vector<Button*> button;

	vector<Text*> text2;
	vector<Button*> button2;
	
	cout << "FIRST WINDOW\n" << endl;
	for (int i = 0; i < 2; i++)
	{
		text.push_back(FirstFactory->CreateText());
		text[i]->info();
	}

	for (int i = 0; i < 2; i++)
	{
		button.push_back(FirstFactory->CreateButton());
		button[i]->info();
	}

	cout << "\n\nSECOND WINDOW\n" << endl;
	for (int i = 0; i < 2; i++)
	{
		text2.push_back(SecondFactory->CreateText());
		text2[i]->info();
	}

	for (int i = 0; i < 2; i++)
	{
		button2.push_back(SecondFactory->CreateButton());
		button2[i]->info();
	}

	delete FirstFactory, SecondFactory;
}

