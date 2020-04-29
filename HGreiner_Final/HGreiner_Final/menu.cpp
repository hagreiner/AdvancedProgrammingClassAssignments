#include "menu.h"
#include "constants.h"
#include "utility.h"

int mainMenu() {
	int menuOption = 0, exitBool = 0;
	std::string optionStr;

	while (exitBool == 0) {
		mainMenuText();
		
		menuOption = verifyData(MENU_OPTIONS_MIN, MENU_OPTIONS_MAX);
		if (menuOption > 0) { exitBool = 1; }
		
		clear();
	}
	return menuOption;
}

void eventBasics(CalenderEvent* event) {
	std::string eventName, junk;
	int exitBool = 0;
	float min = 0.1, max = 25.0, time = 0.0;
	
	std::cout << "What is the name of your event?\n";
	getline(std::cin, junk);
	getline(std::cin, eventName);
	event->setName(eventName);

	std::cin.clear();
	clear();

	while (exitBool == 0) {
		std::cout << "How long does it take (in hours)?\n";

		time = verifyData(min, max);
		if (time > 0) { exitBool = 1; }

		clear();
	}
	event->setLens(time);
}

void timeInformation(CalenderEvent* event) {
	int exitBool = 0;
	int* locationTime;

	std::cin.clear();
	clear();
	
	while (exitBool == 0) {
		std::cout << "When does this event occur (in military time, ex: 13:15)?\n";

		locationTime = verifyTime();
		if (locationTime[0] > 0) { exitBool = 1; }

		clear();
	}
	
	event->setStartHour(locationTime[0]);
	event->setStartMin(locationTime[1]);
}

void weeklyInformation(WeeklyEvent* event) {
	int exitBool = 0, min=0, max=7, day;
	int* locationTime;
	std::string strDay;

	std::cin.clear();
	clear();

	while (exitBool == 0) {
		std::cout << "What day does this event happen on?\n";
		std::cout << "\t1: Sun\n";
		std::cout << "\t2: Mon\n";
		std::cout << "\t3: Tue\n";
		std::cout << "\t4: Wed\n";
		std::cout << "\t5: Thu\n";
		std::cout << "\t6: Fri\n";
		std::cout << "\t7: Sat\n";

		day = verifyData(min, max);
		if (day > 0) { exitBool = 1; }

		clear();
	}

	strDay = numToDay(day);
	event->setDay(strDay);
}

void reminderMenu(DailyReminder* event) {
	int exitBool = 0, min = 0, max = 8, day = 0;
	int* locationTime;
	std::string junk, eventName, strDay;

	std::cin.clear();
	clear();
	
	std::cout << "What is the name of your reminder?\n";
	getline(std::cin, junk);
	getline(std::cin, eventName);
	event->setName(eventName);

	while (true){
		std::cin.clear();
		clear();

		while (exitBool == 0) {
			std::cout << "What day does this event happen on?\n";
			std::cout << "\t1: Sun\n";
			std::cout << "\t2: Mon\n";
			std::cout << "\t3: Tue\n";
			std::cout << "\t4: Wed\n";
			std::cout << "\t5: Thu\n";
			std::cout << "\t6: Fri\n";
			std::cout << "\t7: Sat\n";
			std::cout << "\t8: No More Days\n";

			day = verifyData(min, max);
			if (day > 0) { exitBool = 1; }

			clear();
		}
		exitBool = 0;
		if (day == 8) { break; }
		strDay = numToDay(day);
		event->addDays(strDay);
	}
}

void mainMenuText() {
	std::cout << "What type of event are you entering?\n";
	std::cout << "\t1: Daily Event\n";
	std::cout << "\t2: Weekly Event\n";
	std::cout << "\t3: Add a Daily Reminder\n";
	std::cout << "\t4: Complete Calender\n";
	std::cout << "\t5: Quit\n";
}

int calenderMenu() {
	int menuOption = 0, exitBool = 0;
	std::string optionStr;

	while (exitBool == 0) {
		calenderText();

		menuOption = verifyData(MENU_OPTIONS_MIN, MENU_OPTIONS_MAX);
		if (menuOption > 0) { exitBool = 1; }

		clear();
	}
	return menuOption;
}

void calenderText() {
	std::cout << "What day do you want to see?\n";
	std::cout << "\t1: Today\n";
	std::cout << "\t2: Tomorrow\n";
	std::cout << "\t3: Two Days From Now\n";
	std::cout << "\t4: Add Another Event\n";
	std::cout << "\t5: Quit\n";
}
