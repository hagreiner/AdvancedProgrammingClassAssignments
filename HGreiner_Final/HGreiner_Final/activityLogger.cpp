#include "activityLogger.h"

ActivityLogger::~ActivityLogger() {
	for (int i = 0; i < itemList.size(); i++) {
		delete itemList[i];
	}
}

int ActivityLogger::addItem(DailyReminder* item) {
	itemList.push_back(item);
	return itemList.size();
}

std::string ActivityLogger::printVect(std::string day) {
	std::string retStr = "";
	std::vector<std::string> dayVect;

	for (int i = 0; i < itemList.size(); i++) {
		dayVect = itemList[i]->getDays();
		if (std::find(dayVect.begin(), dayVect.end(), day) != dayVect.end()) {
			retStr += itemList[i]->getName();
			retStr += "\n";
		}
	}
	return retStr;
}

void ActivityLogger::logToFile() {
	std::string fileName = "goals.txt";
	std::ofstream inputFile;

	inputFile.open(fileName, std::ios_base::app);
	for (int i = 0; i < itemList.size(); i++) {
		std::vector<std::string> vect = itemList[i]->getDays();
		for (int j = 0; j < vect.size(); j++) {
			inputFile << vect[j];
		}
		inputFile << "\n";
		inputFile << itemList[i]->getName();
		inputFile << "\n";
	}
	inputFile.close();
}

std::string ActivityLogger::loadFile(std::string day) {
	std::ifstream inputFile;
	std::string retStr, inStr, fileName = "goals.txt", name;

	inputFile.open(fileName);
	if (inputFile.good()) {
		while (true) {
			getline(inputFile, inStr, '\n');
			if (inputFile.eof()) { break; }
			getline(inputFile, name, '\n');
			if (inStr == "" && name == "") { break; }
			if (inStr.find(day) != std::string::npos) {
				retStr += name + "\n";
			}
		}
	}
	inputFile.close();

	return retStr;
}
