// lab5part4.cpp
// Be sure to include comments where necessary for style grading

#include <iostream>            
using namespace std;

int main ()
{
	// Insert necessary variable declarations here
	int levelOneTime= 75,
	 hoursOne,
	 minutesOne,
	 levelTwoTime,
	 hoursTwo,
	 minutesTwo,
	 levelMinuteDiff,
	 levelThreeTime,
	 hoursThree,
	 minutesThree;


	//Insert necessary calculations for level one here
	hoursOne= levelOneTime/60;
	minutesOne= levelOneTime% 60;
	

	cout << "For level one it took "<< hoursOne<<" hour(s) and "
		<< minutesOne<< " minutes"<< endl;

	//More calculations for level two?
	levelTwoTime = (levelOneTime + levelOneTime);
	hoursTwo= levelTwoTime/60;
	minutesTwo=levelTwoTime%60;

	cout << "For level two it took "<< hoursTwo<<" hour(s) and "
		<< minutesTwo<< " minutes"<< endl;

	// More calculations for level diff?
	levelMinuteDiff= (levelTwoTime - levelOneTime);

	cout << "It took "<< levelMinuteDiff
		<<" more minutes to complete level two"<< endl;

	cout << "What is the number difficulty of the next level?" << endl;

	//insert code to accept that integer
	
	//insert code for proper time calculations
	levelThreeTime= (levelOneTime+ levelTwoTime);
	hoursThree= levelThreeTime/60;
	minutesThree= levelThreeTime%60;

	cout << "The next level will probably take "<< hoursThree<<" hour(s) and "
		<< minutesThree<< " minutes"<< endl;

	//Insert any other necessary pieces here

}
