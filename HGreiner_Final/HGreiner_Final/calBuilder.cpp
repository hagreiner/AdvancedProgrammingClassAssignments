#include "calBuilder.h"

std::string currentDay(){
	//https://www.geeksforgeeks.org/c-program-print-current-day-date-time/
	time_t tt;
	struct tm* ti;
 
	time(&tt);
	ti = localtime(&tt);
	std::string retstr = asctime(ti);
	retstr = retstr.substr(0, 3);
	return retstr;
}

std::string nextDay() {
	return findFutureDay(currentDay(), 1);
}

std::string dayAfter() {
	return findFutureDay(currentDay(), 2);
}

std::string findFutureDay(std::string today, int dayInTheFuture) {
	int day = dayToNum(today) + dayInTheFuture;
	if (day > 7) { day -= 7; }
	return numToDay(day);
}

int dayToNum(std::string day){
	int retVal = 0;
	if (day == "Sun") { retVal = 1; }
	else if (day == "Mon") { retVal = 2; }
	else if (day == "Tue") { retVal = 3; }
	else if (day == "Wed") { retVal = 4; }
	else if (day == "Thu") { retVal = 5; }
	else if (day == "Fri") { retVal = 6; }
	else if (day == "Sat") { retVal = 7; }
	return retVal;
}

std::string numToDay(int day) {
	std::string retVal = "";
	if (day == 1) { retVal = "Sun"; }
	else if (day == 2) { retVal = "Mon"; }
	else if (day == 3) { retVal = "Tue"; }
	else if (day == 4) { retVal = "Wed"; }
	else if (day == 5) { retVal = "Thu"; }
	else if (day == 6) { retVal = "Fri"; }
	else if (day == 7) { retVal = "Sat"; }
	return retVal;
}

std::vector<std::vector<std::string>> dayEvents(std::string day) {
	std::string fileName = "events.txt", inStr, daily = "Daily Event",
		eventName, length, startTime;
	std::ifstream inputFile;
	std::vector<std::string> eventNames, eventTimes;
	std::vector<std::vector<std::string>> retVect;

	inputFile.open(fileName, std::ios_base::app);
	if (inputFile.good()) {
		while (true) {
			getline(inputFile, inStr);
			if (inStr == "") { break; }

			getline(inputFile, eventName);
			getline(inputFile, length);
			getline(inputFile, startTime);

			if (inStr == daily || inStr == day) {
				eventNames.push_back(eventName);
				eventTimes.push_back(startTime);
			}
		}
	}
	retVect.push_back(eventNames);
	retVect.push_back(eventTimes);
	inputFile.close();
	return retVect;
}

std::string printEvents(std::vector<std::vector<std::string>> events) {
	int numberOfEvents = events[0].size();
	std::string retStr;
	orderVector(numberOfEvents, events[1], events[0]);

	for (int i = 0; i < numberOfEvents; i++) {
		retStr += events[0][i] + " is at " + events[1][i] + "\n";
	}

	return retStr;
}

void orderVector(int vectLen, std::vector<std::string>& intVec, std::vector<std::string>& strVec) {
	bool swapBool = true;
	std::vector<int> intConv;
	for (std::string i : intVec) {
		intConv.push_back(((int(i[0]) - 48) * 10) + (int(i[1]) - 48));
	}
	for (int i = 0; i < vectLen; i++) {
		for (int j = 0; j < vectLen - 1; j++) {
			if (intConv[j] > intConv[j + 1]) {
				Swap(&intConv[j], &intConv[j + 1]);
				Swap(&intVec[j], &intVec[j + 1]);
				Swap(&strVec[j], &strVec[j + 1]);
			}
		}
	}
}

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(std::string* a, std::string* b) {
	std::string temp = *a;
	*a = *b;
	*b = temp;
}