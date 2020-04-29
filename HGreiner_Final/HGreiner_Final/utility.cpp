#include "utility.h"

int verifyData(int min, int max) {
	int menuOption, retValue = 0;
	std::cin.clear();

	std::cin >> menuOption;
	if (std::cin.fail()) { std::cin.clear(); retValue = 0; }
	else if (menuOption < min || menuOption > max) { retValue = 0; }
	else { retValue = menuOption; }

	return retValue;
}

float verifyData(float min, float max) {
	float menuOption, retValue = 0.0;
	std::cin.clear();

	std::cin >> menuOption;
	if (std::cin.fail()) { std::cin.clear(); retValue = 0.0; }
	else if (menuOption < min || menuOption >= max) { retValue = 0.0; }
	else { retValue = menuOption; }

	return retValue;
}

int* verifyTime() {
	static int returnVal[2];
	returnVal[0] = 0;
	returnVal[1] = 0;
	std::string inputTime;
	std::cin.clear();

	std::cin >> inputTime;
	if (inputTime.find(':') != std::string::npos) { 
		if (inputTime.length() == 5) {
			if (isdigit(inputTime[0]) && isdigit(inputTime[1]) && isdigit(inputTime[3]) && isdigit(inputTime[4])) {
				int digit_0 = int(inputTime[0]) - 48;
				int digit_1 = int(inputTime[1]) - 48;
				int digit_3 = int(inputTime[3]) - 48;
				int digit_4 = int(inputTime[4]) - 48;
				std::cout << digit_0;
				if (((digit_0 * 10) + digit_1) < 24 && (digit_3 < 6)) {
					returnVal[0] = (digit_0 * 10) + digit_1;
					returnVal[1] = (digit_3 * 10) + digit_4;
				}
			}
		}
	}
	return returnVal;
}

bool checkVectEmpty(std::vector<std::vector<std::string>> inputVec) {
	bool retBool = false;
	
	for (int i = 0; i < inputVec.size(); i++) {
		if (inputVec[i].empty() == true) {
			retBool = true;
		}
	}
	return retBool;
}

void logEvent(CalenderEvent* event) {
	std::string fileName = "events.txt";
	std::ofstream inputFile;

	inputFile.open(fileName, std::ios_base::app);
	if (inputFile.good()) {
		inputFile << *event;
	}
	inputFile.close();
}

void clear() {
	system("CLS");
}