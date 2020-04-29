#include "menu.h"
#include "eventItem.h"
#include "activityLogger.h"
#include "daily.h"
#include "utility.h"
#include "calBuilder.h"
#include "dailyReminder.h"

using namespace std;

int main() {
	int menuChosen, pause;
	ActivityLogger* reminderObj = new ActivityLogger; // object for the vector of objects

	while (true) {
		menuChosen = mainMenu();
		clear();
		
		if (menuChosen == 1) { // creates a daily event and then writes it to a file
			DailyEvent* dailyEvent = new DailyEvent;
			eventBasics(dailyEvent);
			timeInformation(dailyEvent);

			logEvent(dailyEvent);
			
			delete dailyEvent;
			dailyEvent = nullptr;
		}
		else if (menuChosen == 2) { // creates a weekly event and then writes it to a file
			WeeklyEvent* weeklyEvent = new WeeklyEvent;
			eventBasics(weeklyEvent);
			timeInformation(weeklyEvent);
			weeklyInformation(weeklyEvent);

			logEvent(weeklyEvent);

			delete weeklyEvent;
			weeklyEvent = nullptr;
		}
		else if (menuChosen == 3) { // creates a daily reminder and then adds it to the member vector of the object created before the loop
			DailyReminder* reminderItem = new DailyReminder;
			reminderMenu(reminderItem);
			reminderObj->addItem(reminderItem);
		}

		else if (menuChosen == 4) { break; }
		else if (menuChosen == 5) { // before exit, writes all the DailyReminders to a file
			reminderObj->logToFile();
			delete reminderObj;
			reminderObj = nullptr;
			exit(10); 
		}
	}
	while (true) {
		menuChosen = calenderMenu();
		if (menuChosen == 4) { // before exit, writes all the DailyReminders to a file
			reminderObj->logToFile();
			delete reminderObj;
			reminderObj = nullptr;
			main(); 
		}
		else if (menuChosen == 5) {  // before exit, writes all the DailyReminders to a file
			reminderObj->logToFile();
			delete reminderObj;
			reminderObj = nullptr;
			exit(10);
		}
		
		else { //displays information based on day
			string day;
			if (menuChosen == 1) { day = currentDay(); }
			else if (menuChosen == 2) { day = nextDay(); }
			else if (menuChosen == 3) { day = dayAfter(); }
			vector<vector<string>> vec = dayEvents(day);
			
			bool checkEmpty = checkVectEmpty(vec);
			if (checkEmpty == true) { cout << "No event for today\n"; }
			else { cout << "Todays Schedule:\n" << printEvents(vec); }
			
			cout << "\n";
			string reminders = reminderObj->printVect(day);
			reminders += reminderObj->loadFile(day);
			if (reminders == "") { cout << "No reminders/goals for today\n"; }
			else { cout << "Today's Reminders/Goals\n" << reminders << "\n"; }

			cout << "\n";
			system("pause");
			clear();
		}
	}

	delete reminderObj;
	reminderObj = nullptr;

	return EXIT_SUCCESS;
}