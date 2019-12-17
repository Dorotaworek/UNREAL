#include <iostream>
#include <string>
#include "krowka.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

krowka BCGame;

//punkt wejœcia aplikacji
int32 main()
{
	std::cout << BCGame.GetCurrentTry();

	bool bWantsToPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bWantsToPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);

	return 0; //wyjscie z aplikacji
}

// wprowadzenie
void PrintIntro() const
{
	std::cout << "welcome to bulls and cows game";
	std::cout << "can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

//petla 
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	for (int32 cout = 1; count <= MaxTries; count++) {
		FText Guess = GetGuess();

		EGuessStatus Status = BCGame.CheckGuessValidity(Guess);
		switch (Status)
		{
		case EGuessStatus::Wrong_Leght:
			std::cout << "Please enter a" << BCGame.GetHiddenWordLength() << "letter word.\n";
			break;
		}

		krowka BCGame.SubmitGuess(Guess);
		std::cout << "Bulls =:" << krowka1.bulls;
		std::cout << "Cows =:" << krowka1.cows; << "\n\n"; 
	}
}

//zagadka
FText GetValidGuess()
{
	FText Guess = "";
	EGuessStatus Status = EGuessStatus::Invalid_Status;
	do {
		int32 CurrentTry = BCGame.GetCurrentTry();
		std::cout << "Try" << CurretTry << "Enter your guess";
		std::getline(std::cin >> Guess);

		EGuessStatus Status = BCGame.CheckGuessValidity(Guess);
		switch (Status) {
		case EGuessStatus::Wrong_Leght:
		std:cout << "Please enter a" << BCGame.GetHiddenWordLength() << "letter word.\n";
			break;
		case EGuessStatus::Not_Isogram:
			std::cout << "Please enter a word witout repeating letters.\n";
			break;
		case EGuessStatus::Not_Lowercase:
			std::cout << "Please enter all lowercase letters.\n";
			break;
		default:
				break;
		}
		std::cout << endl;
	} while (Status != EGuessStatus::OK);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again (y/n)?";
	string Response = "";
	getline(cin, Response);
	return (Response[0]== 'y') || (Response[0] == 'Y');
}