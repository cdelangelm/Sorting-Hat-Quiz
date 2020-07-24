#include <iostream>
using namespace std;


int main(){
	// Variable declaration
	int gryffindor = 0;
	int hufflepuff = 0;
	int ravenclaw = 0;
	int slytherin = 0;

	int answer1, answer2, answer3, answer4;

	// Program title
	cout << "The Sorting Hat quiz!\n\n";

	// First question
	for (;;) {
		cout << "Q1) When I'm dead, I want people to remember me as:\n\n" << "  1) The Good\n" << "  2) The Great\n" << "  3) The Wise\n" << "  4) The Bold\n";
		cin >> answer1;
		if (answer1 <= 4) {
			break;
		}
		else {
			cout << "Invalid input, try again\n";
			continue;
		}
	}
	// First question logic
	if (answer1 == 1) {
		hufflepuff++;
	}
	else if (answer1 == 2) {
		slytherin++;
	}
	else if (answer1 == 3) {
		ravenclaw++;
	}
	else if(answer1 == 4) {
		gryffindor++;
	}
	else {
		cout << "Invalid input";
	}

	// Second question
	for (;;) {
		cout << "\nQ2) Dawn or Dusk?\n\n" << "  1) Dawn\n" << "  2) Dusk\n\n";
		cin >> answer2;
		if (answer2 <= 2) {
			break;
		}
		else {
			cout << "Invalid input, try again\n";
			continue;
		}
	}

	// Second question logic
	if (answer2 == 1) {
		gryffindor++;
		ravenclaw++;
	}
	else if (answer2 == 2) {
		hufflepuff++;
		slytherin++;
	}
	else {
		cout << "Invalid input";
	}

	// Third question
	for (;;) {
		cout << "\nQ3) Which kind of instrument most pleases your ear?\n\n" << "  1) The violin\n" << "  2) The trumpet\n" << "  3) The piano\n" << "  4) The drum\n\n";
		cin >> answer3;
		if (answer3 <= 4) {
			break;
		}
		else {
			cout << "Invalid input, try again\n";
			continue;
		}
	}

	// Third question logic
	if (answer3 == 1) {
		slytherin++;
	}
	else if (answer3 == 2) {
		hufflepuff++;
	}
	else if (answer3 == 3) {
		ravenclaw++;
	}
	else if (answer3 == 4) {
		gryffindor++;
	}
	else {
		cout << "Invalid input";
	}

	// Fourth question
	for (;;) {
		cout << "\nQ4) Which road tempts you most?\n\n";
		cout << "  1) The wide, sunny grassy lane\n" << "  2) The narrow, dark, lantern-lit alley\n";
		cout << "  3) The twisting , leaf-strewn path through woods\n" << "  4) The cobbled street lined (ancient buildings)\n\n";
		cin >> answer4;
		if (answer4 <= 4) {
			break;
		}
		else {
			cout << "Invalid output, try again\n";
			continue;
		}
	}

	// Fourth question logic
	if (answer4 == 1) {
		hufflepuff++;
	}
	else if (answer4 == 2) {
		slytherin++;
	}
	else if (answer4 == 3) {
			gryffindor++;
	}
	else if (answer4 == 4) {
		ravenclaw++;
	}
	else {
		cout << "Invalid input";
	}

	int max = 0;
	string house;
	if (gryffindor > max) {
		max = gryffindor;
		house = "\nGryffindor";
	}
	if (hufflepuff > max) {
		max = hufflepuff;
		house = "\nHufflepuff";
	}
	if (ravenclaw > max) {
		max = ravenclaw;
		house = "\nRavenclaw";
	}
	if (slytherin > max) {
		max = slytherin;
		house = "\nSlytherin";
	}

	cout << house << "!\n";
}