// Basic standard libraries
#include "stdafx.h"
#include <iostream>
#include <string>
// For the random number generator
#include <cstdlib>
#include <ctime>


// This is a magic 8 ball
// you can shuffle between 8 numbers, which give you a random answer out of five
// or the console will just pick 1 out of 40 a certain number of answers
// to determine the answer, there will be an if statement and a number randomiser to pick
// the final statement will print out a statement the user inputs and bind it with the random affix picked
// output should look like "The ball returns "you will "win the footy grand final tomorrow"!"
// then console asks if user wants to go again
// use while loop or switch statement (break is easier to use than bools (maybe(idk)))

using namespace std;

//define all the variables
string w;
string q;
string z;
int random_integer;

int randnum() { // this is the generator

	srand((unsigned)time(0));// how long it takes to make the number(s)
	for (int index = 0; index<1; index++) { // amount outputted
		random_integer = (rand() % 40) + 1; // amount of numbers available (% x)
											//cout << random_integer << endl;
	}
	return random_integer;
}



// random_integer equals a statement, statement plus string q equals new string (return number) (also formating)
// new string returned as answer, format it, then ask if you want to continue



int callstatement() { // this will call the number(s) returned from randnum sub and transfer into a statement
					  //cout << "ïm gonna call random\n";
	randnum();
	if (random_integer <= 2)
		w = "You will ";
	else if (random_integer == 3 || random_integer == 4)
		w = "You won't ";
	else if (random_integer == 5 || random_integer == 6)
		w = "You might ";
	else if (random_integer == 7 || random_integer == 8)
		w = "It will ";
	else if (random_integer == 8 || random_integer == 9)
		w = "It won't ";
	else if (random_integer == 10 || random_integer == 11)
		w = "It might ";
	else if (random_integer == 12 || random_integer == 13)
		w = "You should ";
	else if (random_integer == 14 || random_integer == 15)
		w = "You could ";
	else if (random_integer == 16 || random_integer == 17)
		w = "It should ";
	else if (random_integer == 18 || random_integer == 19)
		w = "It could ";
	else if (random_integer == 20 || random_integer == 21)
		w = "It is certain that ";
	else if (random_integer == 22 || random_integer == 23)
		w = "It is possible that ";
	else if (random_integer == 24 || random_integer == 25)
		w = "You certainly will ";
	else if (random_integer == 26 || random_integer == 27)
		w = "You will possibly ";
	else if (random_integer == 28 || random_integer == 29)
		w = "It is probable that ";
	else if (random_integer == 30 || random_integer == 31)
		w = "You can win ";
	else if (random_integer == 32 || random_integer == 33)
		w = "You will never win ";
	else if (random_integer == 34 || random_integer == 35)
		w = "You will win ";
	else if (random_integer == 36 || random_integer == 37)
		w = "The outcome will be in your favour of ";
	else if (random_integer == 38 || random_integer == 39)
		w = "The outcome won't be in your favour of ";
	else
		w = "Yes ";

	return 0;
}

void input() {
	bool run = true;
	while (run) {
		cout << "What would you like to know?\n\n";
		cin.get();
		getline(cin, q);
		//cout << q << endl;
		callstatement();
		//switchstatement();
		cout << w + q << endl;
		run = callstatement();
		cout << "Do you want to ask again. y/n" << endl;
		cout << "" << endl;
		cin >> z;
		if (z == "y")
			run = true;
		else
			run = false;
	}
}


int main()
{
	cout << "The Magic 8 Ball grants you the knowledge of the future!\n";
	//cout << "What would you like to know?\n";
	cout << "\n";
	cout << "Refrain from using any pronouns!\n";
	cout << "" << endl;


	input();


	return 0;
}
