#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>
using namespace std;

int highScore[10];

int randRange(int low, int high)
{
	return rand() % (high - low) + low;
}

int gameOver()
{
	int x, y;
	bool winner = false;
	cout << "Please enter a number between 1 - 10" << endl;
	cin >> x;
	srand(time(NULL));
	y = randRange(1, 10);
	int atempet = 0;
	int again = 0;
	int hz = 0;
	while (!winner)
	{

		atempet++;
		if (x == y)
		{
			winner = true;
		}
		else if (x > 10)
		{
			cout << "Not an answer! Try again, please enter a number between 1 - 10 this time!" << endl;
			cin >> x;
			Beep(275, 50);
			Beep(232, 50);
		}
		else
		{
			system("CLS");
			cout << "Try again" << endl;
			cout << "Please enter a number between 1 - 10" << endl;
			cout << "attempts: " << atempet;
			cout << " " << endl;
			Beep(275, 50);
			Beep(232, 50);
			cin >> x;
		}

		if (winner == true)
		{
			system("CLS");
			cout << "You win!" << endl;
			cout << "Good job! It took you this many try's -> " << atempet << endl;
			for (hz = 0; hz < 5; hz++)
			{
				Beep(532, 50);
				Beep(783, 50);
				Beep(1046, 50);
				cout << "					:O!" << endl;

			}

		}

		
	}
	return 0;
}


int main()
{
	bool gameOn = false;
	while (!gameOn)
	{
		gameOver();
		
		cout << "Would you like to play again? Yes or No?";
		int again;
		cin >> again; 
		if (again == 1)
		{
			system("CLS");
		}
		if (again == 0)
		{
			gameOn = true;
		}
		

	}
	system("CLS");
	cout << "Thanks for playing!!! Have a good day.";
	return 0;


	/*Things to add and fix, 
	1.high score into arry
	2.have user type yes not 1 or 2
	3.show high score at the end of game.
	*/
}
