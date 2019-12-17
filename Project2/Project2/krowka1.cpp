#include "krowka.h"

using int32 = int;

krowka::krowka() { Reset(); }

int32 krowka::GetMaxTries() const { return MyMaxTries; }
int32 krowka::GetCurretTry() const { return MyCurretTry; }

int32 krowka::GetHiddenWordLength()const { return MyHiddenWord(); }

void krowka::Reset()
{
	constexpr int32 MAX_TRIES = 8
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "kanapka";
	MyHiddenWord = HIDDEN_WORD;
	
	MyCurrentTry = 1;
	
	return
}

bool krowka::IsGameWon() const 
{
	return false; 
}

EGuessStatus krowka::CheckGuessValidity(FString Guess) const
{
	if (false) 
	{
		return EGuessStatus::O; 
	}
	else if (false) 
	{
		return EGuessStatus::Not_Lowercase;
	}
	else if (Guess.length() != GetHiddenWordLength)
	{
		return EGuessStatus::Wrong_Leght;
	}
	else
	{
		return EGuessStatus::OK;
	}
}

krowka krowka::SubmitValidGuess(FString Guess) 
{
	MyCurrentTry++;

	krowka krowka;
	int32 WordLenght = MyHiddenWord.length();
	for (int32 MHWChar = 0; MHWChar < WordLenght; MHWChar++) {
		for (int32 GChar = 0; GChar < WordLenght; GChar++) {
			if (Guess[MHWChar] == MyHiddenWord[MHWChar]) {
				if (MHWChar == GChar) {
					krowki1.Bulls++;
				}
				else {
					krowki1.Cows++;
				}
			}
	
		}
	}
}

return krowka;
