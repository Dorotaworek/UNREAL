#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct krowka 
{
	int32 Bulls = 0;
	int32 COWS = 0;

};

enum class  EGuessStatus
{
	Invalid_Status,
	OK,
	Not_Isogram,
	Wrong_Leght,
	Not_Lowercase
};

enum class EResetStatus 
{
	No_Hidden_Word,
	OK
};

class krowka {
public:
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;
	
	bool IsGameWon() const;
	EWordStatus CheckGuessValidity(FString) const;

	void Reset();
	krowka SubmitValidGuess(FString)

private
	int32 MyMaxTries = 5;
	int32 MyCurrentTry = 1;
	FString MyHiddenWord;

};