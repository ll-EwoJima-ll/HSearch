#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

#define HSearchLastError 0

// Free Unused Memory
// Cleanup code
// Possibly create functions to make the code more readable

class DO_NOT_USE_THIS_CLASS {
public:
	std::vector<std::string> GetWords(std::string StringToWord) {
		// Find words
		std::string word;
		std::vector<std::string> wordls;
		int SpacePos1 = 0; // Space position 1
		int SpacePos2 = 0; // Space position 2
		bool Looping = true;
		bool FindNextSpace = true;

		while (Looping == true) {

			for (char ch : StringToWord) {

				// Get space position 1
				if (ch == ' ') {
					SpacePos1 = ch[];

					// Get Space position 2
					while (FindNextSpace == true) {

						if (ch++ == ' ') {
							SpacePos2 = ch[];
							FindNextSpace = false;

						}
						else {
							continue;

						}

						// Make the characters inbetween SpacePos1 and SpacePos2 A string list
						std::string words;
						int GetAddition = 0;
						GetAddition = SpacePos2 - SpacePos1;
						int NewPos = SpacePos1++; // New Position
						word << NewPos++;

						if (NewPos > SpacePos2) {
							word << NewPos++;

						}
						else {
							break;

						}

						wordls.push_back(words);

					}
				else {
					continue;

				}

				}

				return wordls;

			}
		}
	}

	// New function for readability
	std::string CompareStrings(std::string Word1, std::string Word2) {
		// Break the strings down and compare the positions of each characters in Word1 to the positions in Word2

		// Find how many characters are in each string
		int Word1chars = 0;
		int Word2chars = 0;

		for (char ch : Word1) {
			Word1chars++;
		}

		for (char ch : Word2) {
			Word2chars++;

		}

		// Compare each character
		int TotalChars = Word1chars + Word2chars;
		int SameChars = 0;
		bool Comparing = true;
		int charnum = 0;

		while (Comparing == true) {

			if (Word1[charnum] == Word2[charnum]) {
				SameChars++;

				if (Word1chars >= charnum) {
					Comparing = false;
					break;

				}
				else {
					continue;

				}

			}
			else {
				continue;
			}

			charnum++;

		}

		// Find the compatability as a percentage
		int Compatability = SameChars * TotalChars / 100;
		return Compatability;

	}

	// Must check if nothing is returned
	std::string DoSpellCheck(std::string StringToSearch, std::string Dictionary, int SpellingCompatability) {
		// Get strings to check
		std::vector<std::string> wordls = GetWords(StringToSearch, Dictionary);
		std::string newword;

		// Check each word
		for (std::string word : wordls) {
			int Compatability = 0; // Compare Value
			Compatability = CompareStrings(wordls, Dictionary);

			if (Compatability >= SpellingCompatability) {
				word = Dictionary;
				newword = word;
				return word;

			}
			else {
				return word;

			}

		}

#define HSearchLastError "NoWordFound"
		return newword;

	}

	std::vector<int> FindFirstOf(std::string StringToFind, std::string StringToSearch) {
		// Get character count
		int charcount = 0;
		int StringSize = 0;
		int strstart;

		for (char chc : StringToSearch) {
			charcount++;

		}

		for (char cha : StringToFind) {
			StringSize++;

		}

		// Check the characters
		int onstring = 0;
		std::string StringToCompare;
		std::vector<int> ValueToReturn;

		for (char ch : StringToSearch) {
			if (ch == StringToSearch[onstring]) {
				StringToCompare + ch;
				ValueToReturn.push_back(onstring);

				// Check if StringToCompare is matching StringToFind

				if (StringToCompare == StringToFind) {
					strstart = onstring - StringSize;
					ValueToReturn.push_back(strstart);
					ValueToReturn.push_back(onstring);

					return ValueToReturn;

				}
				else {
					continue;
				}

				onstring++;

			}
			else {
				StringToCompare.clear();
				onstring++;
			}
		}

		return ValueToReturn;
	}

	std::string GetSearchResult(std::string GetResultOf, std::string JSONDirName) {
		std::fstream JSONDir();
		JSONDir = JSONDirName;
		std::string retstr;
		std::vector<int> gofind;
		std::vector<int> DataPositions;
		std::vector<std::string> Results;

		for (std::fstream file : JSONDir) {
			// Get the character start to end positions
			int LastChar = 0;

			for (char ch : file) {
				LastChar++;

			}

			// Check for the data
			std::string StringToGetFirstOf = "data:";
			gofind = FindFirstOf(StringToGetFirstOf);

			if (gofind == StringToGetFirstOf) {
				// Get all characters after the data variable name until it reads the delimiter 
				std::vector<int> delim = FindFirstOf(";");
				delim = delim - 1; // Exclude the " in the JSON file

				std::vector<char> data;
				int charpos = 0; // Character Position

				for (char dch : file) {
					if (dch[charpos] <= delim && dch[charpos] >= gofind[1]) {
						data.push_back(dch);

					}

				}

				return retstr;

			}
			else {
				continue;

			}

		}

		return retstr;

	}

};


// Functions that the Programmer uses:


std::string Search(std::string StringToSearch, std::string JSONDirectory, bool CaseSensitive, bool SpellCheck, int SpellCheckAccuracy, std::string SpellCheckDictionary) {
	/* If all goes good, then the function returns the result, if not then it returns error
	Check the buffer size
	free all vairables after they're done being used
	*/

	// Case Check
	if (CaseSensitive == true) {
		// Continue
	}
	else if (CaseSensitive == false) {
		// Temperary string to hold the StringToSearch Lowercase Characters
		std::string tempstr;
		
		// Lowercase all characters
		for (char character : StringToSearch) {
			char ch = std::tolower(character);
			ch << tempstr;
		
		}
		// Switch the old value for the tempstr value
		StringToSearch = tempstr;
		
		// Get rid of tempstr to save memory space
		tempstr == NULL;
		free(tempstr);

	}

	// Check if SpellCkeck should be used
	std::vector<std::string> FinalSearch;
	std::string CheckedWord;
	
	if (SpellCheck == true) {
		// Get each word checked
		CheckedWord = DO_NOT_USE_THIS_CLASS::DoSpellCheck(StringToSearch, SpellCheckDictionary, SpellCheckAccuracy);
		
		if (CheckedWord == 0) {
			// An error has occured
			return HSearchLastError;
		
		}
		
		FinalSearch.push_back(CheckedWord);
	
	}
	
	// Get Search Result
	std::string result = DO_NOT_USE_THIS_CLASS::GetSearchResult(FinalSearch, JSONDirectory);
	
	return result;
	
}

std::fstream StoreResults(std::string DataToStore, std::string DataFilesDirectory) {
	std::fstream files();
	files = DataFilesDirectory;
	// Get the highest ID number
	int HighestIDNum = 0;
	int filenum = 0;

	for (std::fstream file : files) {
		filenum = file;
		std::string FileString;
		FileString = file;
		size_t CheckJSON = FileString.find_last_of(".json");
		
		if (CheckJSON != std::string::npos) {
			filenum = file;
			
			if (filenum >= HighestIDNum) {
				HighestIDNum = filenum;
			
			}
			else {
				continue;
			
			}
		
		}
		else {
			continue;
		
		}
	
	}
	// Increase HighestIDNum by 1 and make that the file name for the new data
	HighestIDNum++;
	std::fstream newfile();
	newfile = HighestIDNum;

	// Put data in file
	newfile << "{\n";
	newfile << "data: ";
	newfile << DataToStore;
	
	return newfile;

}

std::string SearchLastError() {

	return HSearchLastError;
}
