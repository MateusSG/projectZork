// 4/7/2016
#include <iostream>
#include <stdio.h>
#include <string>
#include "Environment.h"
#include "Items.h"

using namespace std;

string StrTokenizer(string action, string& a1, string& a2);

// Actions:
// USE, GIVE, ATTACK, GO, PICK, SEARCH, COMBINE

int main()
{
	// Item Setup
	item apple(true, true);		
	item chair(false, false);	
	item table(false,false);	
	item chest(false, false);	
	item pen(false, true);	
	item bag(false, true);
	item key(false, true);
	item sword(false, true);
	item cup(true, true);
	item taytay(false, false);

	// Variables
	string userInput = "";
	environment* roomPtr[5]; // Declaring Rooms

	for (int i = 0; i < 5; i++) // Memory allocation for rooms
	{
		roomPtr[i] = new environment;
	}


	// Place holders - SETUP ITEMS PER ROOM
	roomPtr[0]->SetItem(taytay, cup);
	roomPtr[1]->SetItem(apple, chair);
	roomPtr[2]->SetItem(chest, key);
	roomPtr[3]->SetItem(bag, sword);
	roomPtr[4]->SetItem(table, pen);



	// MAIN PROGRAM

	cout << endl << "Welcome to Mr Harvey and The Quest for The Fountain Pen!" << endl;

	cout << "Intro: " << "You are in a dark room. You see a shiny LIGHTER on the floor next to you." << endl;
	cin >> userInput;

	userInput = toupper(userInput); // FIX THIS

	// END OF MAIN PROGRAM



	delete roomPtr[]; // Give memory back to OS
	return 0;
}


string StrTokenizer(string action, string& a1, string& a2) // String Tokenizer
{
	char str[] = action.c_str;
	char * pch;
	int i = 0;
	//cout << "Splitting string " << str << "into tokens :" << endl;

	pch = strtok(str, " ");

	while (pch != NULL)
	{
		//cout << pch << endl;
		if (i == 0)
			a1 = pch;
		else
			a2 = pch;
		pch = strtok(NULL, " ");
		i++;
	}
}