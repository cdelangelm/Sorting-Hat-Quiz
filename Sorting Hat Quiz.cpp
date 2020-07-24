#include <iostream>
using namespace std;

int questionLogic(int answer, int house1, int house2, int house3, int house4);

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
		if (answer1 > 4) {
			break;
		}
		else {
			cout << "Invalid output, try again";
			continue;
		}
	}
	//First question logic
	questionLogic(answer1, hufflepuff, slytherin, ravenclaw, gryffindor);
	cout << hufflepuff << " " << slytherin << " " << ravenclaw << " " << gryffindor;
}

int questionLogic(int answer, int house1, int house2, int house3, int house4) {
	if (answer == 1){
		house1++;
	}
	else if (answer == 2) {
		house2++;
	}
	else if (answer == 3) {
		house3++;
	}
	else if (answer == 4) {
		house4++;
	}
	return;
}