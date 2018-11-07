#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();
// string PrintGuess();

// the entry point for our application
int main() {



	PrintIntro();

	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i <= NUMBER_OF_TURNS; i++)
	{
		GetGuessAndPrintBack();
	}


	return 0;

}


//introduce the game
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}



string GetGuessAndPrintBack()
{
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);

	// print the guess back to them
	cout << "Your guess was: " << Guess << endl;
	cout << endl;

	return Guess;
}
