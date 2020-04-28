#include "menu.h"
#include "eventItem.h"
#include "activityLogger.h"
#include "daily.h"
#include "utility.h"
#include "calBuilder.h"

using namespace std;

int main() {
	int menuChosen, pause;
	ActivityLogger* reminderObj = new ActivityLogger;

	while (true) {
		menuChosen = mainMenu();
		clear();
		
		if (menuChosen == 1) {
			DailyEvent* dailyEvent = new DailyEvent;
			eventBasics(dailyEvent);
			timeInformation(dailyEvent);

			logEvent(dailyEvent);
			
			delete dailyEvent;
			dailyEvent = nullptr;
		}
		else if (menuChosen == 2) {
			WeeklyEvent* weeklyEvent = new WeeklyEvent;
			eventBasics(weeklyEvent);
			timeInformation(weeklyEvent);
			weeklyInformation(weeklyEvent);

			logEvent(weeklyEvent);

			delete weeklyEvent;
			weeklyEvent = nullptr;
		}
		else if (menuChosen == 3) {
			DailyReminder* reminderItem = new DailyReminder;
			reminderObj->addItem(reminderItem);
		}

		else if (menuChosen == 4) { break; }
		else if (menuChosen == 5) { exit(10); }
	}
	while (true) {
		menuChosen = calenderMenu();
		if (menuChosen == 4) { main(); }
		else if (menuChosen == 5) { exit(10); }
		
		else { 
			string day;
			if (menuChosen == 1) { day = currentDay(); }
			else if (menuChosen == 2) { day = nextDay(); }
			else if (menuChosen == 3) { day = dayAfter(); }
			vector<vector<string>> vec = dayEvents(day);
			
			bool checkEmpty = checkVectEmpty(vec);
			if (checkEmpty == true) { cout << "No event for today\n"; }
			else { cout << printEvents(vec); }

			cout << "\n";
			system("pause");
			clear();
		}
	}

	return EXIT_SUCCESS;
}