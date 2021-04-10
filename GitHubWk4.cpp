// GitHubWk4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream> //allows creation/use of inputfilestream and outputfilestream
#include <String>

using namespace std;

int main(int argc, char* argv[]) //argument count and argument values
{
	//initialize variables
	int A_counter;
	int E_counter;
	int I_counter;
	int O_counter;
	int U_counter;
	int P_counter;
	int C_counter;
	int G_counter;
	int vowelCount;

	//set the counting vars to zero

	A_counter = 0;
	E_counter = 0;
	I_counter = 0;
	O_counter = 0;
	U_counter = 0;
	P_counter = 0;
	C_counter = 0;
	G_counter = 0;
	vowelCount = 0;

	// The executable name and at least one argument ? 
	if (argc < 2) {
		cout << "Error with input agrs.." << endl;
		return 1;
	}
	// For debugging purposes only
	for (int i = 0; i < argc; i++) {
		cout << i << ":" << argv[i] << endl;
	}

	ifstream inFile; //delcare input stream var

	inFile.open(argv[1]); //open the file

	if (!inFile) { //if its not a file, do this
		cout << "Error with file name.." << endl;
		return 1;
	}
	else {
		cout << "Analyzing file '" << argv[1] << "'..." << endl;
	}
	///////////////////////// Work here with open file.....///////////////////////
	char c;
	//read the lines of the file
	while (!inFile.eof() && inFile >> c) { //while not in the end of file and the value of infile is a char, the value c is new every iteration, it goes until file ends or no val.

		if (c == 'A' || c == 'a') {
			A_counter = A_counter + 1;
			vowelCount++;
		}

		if (c == 'E' || c == 'e') {
			E_counter = E_counter + 1;
			vowelCount++;
		}

		if (c == 'I' || c == 'i') {
			I_counter = I_counter + 1;
			vowelCount++;
		}

		if (c == 'O' || c == 'o') {
			O_counter = O_counter + 1;
			vowelCount++;
		}

		if (c == 'U' || c == 'u') {
			U_counter = U_counter + 1;
			vowelCount++;
		}
		if (c == 'P' || c == 'p') {
			P_counter++;
			
			
		}

		if (c == 'C' || c == 'c') {
			C_counter++;

		}
		if (c == 'G' || c == 'g') {
			G_counter++;

		}


	}



	inFile.close();

	cout << "The number of A's:" << setw(35) << setfill('.') << A_counter << endl;
	cout << "The number of E's:" << setw(35) << setfill('.') << E_counter << endl;
	cout << "The number of I's:" << setw(35) << setfill('.') << I_counter << endl;
	cout << "The number of O's:" << setw(35) << setfill('.') << O_counter << endl;
	cout << "The number of U's:" << setw(34) << setfill('.') << U_counter << endl;
	cout << "The vowel count is:" << setw(34) << setfill('.') << vowelCount << endl;
	cout << "Tracking 3 more letters that are not vowels....." << endl;
	cout << "The number of P's:" << setw(34) << setfill('.') << P_counter << endl;
	cout << "The number of C's:" << setw(34) << setfill('.') << C_counter << endl;
	cout << "The number of G's:" << setw(34) << setfill('.') << G_counter << endl;
	system("pause");

	return 0;
}



