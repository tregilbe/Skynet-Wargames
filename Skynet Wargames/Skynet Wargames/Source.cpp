
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	
	rerun:

	srand(static_cast<unsigned int>(time(0)));
	// seed random number generator

	// for holding data of high and low numbers. which may change
	int Human_searchGridLowNumber = 1;
	int Human_searchGridHighNumber = 64;
	int AI_Binary_searchGridLowNumber = 1;
	int AI_Binary_searchGridHighNumber = 64;
	int AI_Linear_searchGridLowNumber = 1;
	int AI_Linear_searchGridHighNumber = 64;
	int AI_random_searchGridLowNumber = 1;
	int AI_random_searchGridHighNumber = 64;

	// keep the target location the same for all parties

	int actualTargetlocation = rand() % ((AI_Binary_searchGridHighNumber - AI_Binary_searchGridLowNumber) / 2 + AI_Binary_searchGridLowNumber);
	// random number between 1-64 to hold location of target

	int Human_Number_Of_Tries = 0;
	int Human_Current_Location_Prediction = 0;
	int AI_Binary_Number_Of_Tries = 0;
	int AI_Binary_Current_Location_Prediction = 0;
	int AI_Linear_Number_Of_Tries = 0;
	int AI_Linear_Current_Location_Prediction = 0;
	int AI_random_Number_Of_Tries = 0;
	int AI_random_Current_Location_Prediction = 0;

	cout << "\tWelcome to Enemy Finder 5000\n";
	// your title for the simulation here




	// ********************************* Start Human tries to find target **************************************************
	do
	{
		//this is where the AI makes a target Guess
		cout << "\nThe real target is at  a secret location\n";


		cout << "\nPlease enter the position (" << Human_searchGridLowNumber << "-" << Human_searchGridHighNumber <<") you believe the enemy is hiding at : \n  ";

		cin >> Human_Current_Location_Prediction;

		// Human_Current_Location_Prediction = ((Human_searchGridHighNumber - Human_searchGridLowNumber) / 2 + Human_searchGridLowNumber);

		++Human_Number_Of_Tries;

		//adds a try to the counter
		if (Human_Current_Location_Prediction > actualTargetlocation)
		{


			cout << "The Prediction is too high!\n";

			Human_searchGridHighNumber = Human_Current_Location_Prediction - 1;

		}
		else if (Human_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "The Prediction is too low!!!\n";

			Human_searchGridLowNumber = Human_Current_Location_Prediction + 1;
		}
		else
		{

			cout << "\nThat's it!! you got The target in " << Human_Number_Of_Tries << " Guesses!!\n";

		}
	} while (Human_Current_Location_Prediction != actualTargetlocation);
	// ********************** END Human Human tries to find target **********************************************

	cout << "\nThe human has finished! Now launching the Binary AI\n";
	system("Pause");


	// ********************************* Start Binary AI search algorithm tries to find target **************************************************
	do
	{
		// this is where the AI makes a target Guess
		cout << "\nThe AI guesses the target is at location : " << AI_Binary_Current_Location_Prediction;

		cout << "\nThe real target is at " << actualTargetlocation;

		AI_Binary_Current_Location_Prediction = ((AI_Binary_searchGridHighNumber - AI_Binary_searchGridLowNumber) / 2 + AI_Binary_searchGridLowNumber);

		++AI_Binary_Number_Of_Tries;

		// adds a try to the counter
		if (AI_Binary_Current_Location_Prediction > actualTargetlocation)
		{


			cout << "\nThe AI Prediction is too high!\n";

			AI_Binary_searchGridHighNumber = AI_Binary_Current_Location_Prediction - 1;

		}

		else if (AI_Binary_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "\nThe Prediction is too low!!!\n";

			AI_Binary_searchGridLowNumber = AI_Binary_Current_Location_Prediction + 1;
		}

		else
		{

			cout << "\nThat's it!! The Binary AI got The package back in " << AI_Binary_Number_Of_Tries << " guesses!!\n";

		}
	} while (AI_Binary_Current_Location_Prediction != actualTargetlocation);
	// ********************** END Binary AI search algorithm tries to find target **********************************************

	cout << "\nThe Binary AI has finished! Now launching Linear AI!\n";
	system("Pause");


	// ********************************* Start Linear AI search algorithm tries to find target **************************************************
	do
	{
		//this is where the AI makes a target Guess
		cout << "\nThe Linear AI guesses the target is at location : " << AI_Linear_Current_Location_Prediction << endl;
		AI_Linear_Current_Location_Prediction++;
		cout << "\nThe real target is at " << actualTargetlocation;
		AI_Linear_Number_Of_Tries++;

		//adds a try to the counter
		if (AI_Linear_Current_Location_Prediction > actualTargetlocation)
		{

			cout << "\nThe AI Prediction is too high!\n";

		}

		else if (AI_Linear_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "\nThe Prediction is too low!!!\n";

		}

		else
		{

			cout << "\n That's it!! The Linear got it in " << AI_Linear_Number_Of_Tries << " guesses!!\n";

		}
	} while (AI_Linear_Current_Location_Prediction != actualTargetlocation);
	// ********************** END Linear AI search algorithm tries to find target **********************************************

	cout << "\nThe Linear AI has finished! Now launching Random AI!\n";
	system("Pause");

	// ********************************* Start Random AI search algorithm tries to find target **************************************************
	do
	{
		//this is where the AI makes a target Guess
		cout << "\nThe random AI guesses the target is at location : " << AI_random_Current_Location_Prediction << endl;
		AI_random_Current_Location_Prediction++;
		cout << "\nThe real target is at " << actualTargetlocation;

		AI_random_Current_Location_Prediction = rand() % ((AI_random_searchGridHighNumber - AI_random_searchGridLowNumber) / 2 + AI_random_searchGridLowNumber);
		
		AI_random_Number_Of_Tries++;

		//adds a try to the counter
		if (AI_random_Current_Location_Prediction > actualTargetlocation)
		{

			cout << "\nThe AI Prediction is too high!\n";

		}

		else if (AI_random_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "\nThe Prediction is too low!!!\n";

		}

		else
		{

			cout << "\n That's it!! The random got it in " << AI_random_Number_Of_Tries << " guesses!!\n";

		}
	} while (AI_random_Current_Location_Prediction != actualTargetlocation);
	// ********************** END Random AI search algorithm tries to find target **********************************************

	cout << "\nThe Random AI has finished! To see who won \n";
	system("Pause");

	// ******************************** Who Won? ********************************************************
	cout << "\n\n\t *** The Final Results *** \n\n";
	cout << "The Human found the target in " << Human_Number_Of_Tries << " attempts." << endl;
	cout << "The Binary AI found the target in " << AI_Binary_Number_Of_Tries << " attempts." << endl;
	cout << "The Linear AI found the target in " << AI_Linear_Number_Of_Tries << " attempts." << endl;
	cout << "The Random AI found the target in " << AI_random_Number_Of_Tries << " attempts." << endl;

	cout << "\n\nWould you like to try again? (Y/N)\n\n";

	string yorn;
	cin >> yorn;

	if (yorn == "Y" || yorn == "y")
		goto rerun;

	else
		return 0;

	return 0;
}