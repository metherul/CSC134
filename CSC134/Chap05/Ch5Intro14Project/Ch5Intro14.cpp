// Calculates the BMR of a patient
// Ethan Green
// 2/7/2018

#include <iostream>

using namespace std;

int main()
{
  int patientAge = 0;
	float baseLevelBMR = 0.0;
	float patientHeightFeet = 0.0;
	float patientWeightLb = 0.0;
	char patientSex = ' ';

	cout << "Is your patient male or female? (M/F): ";
	cin >> patientSex;
	
	patientSex = tolower(patientSex);

	if (patientSex != 'm' && patientSex != 'f')
	{
		cout << "Incorrect value for patient sex.";
		return 0;
	}

	cout << "How old is the patient? (Years): ";
	cin >> patientAge;

	if (patientAge < 1)
	{
		cout << "You can't have a patient younger than 1 year old. What are you on?";
		return 0;
	}
	
	cout << "What is the height of the patient? (Feet): ";
	cin >> patientHeightFeet;

	if (patientHeightFeet <= 0)
	{
		cout << "Sorry, but you can't be that short. Try again.";
		return 0;
	}
	
	cout << "What is the weight of the patient? (LB): ";
	cin >> patientWeightLb;

	if (patientWeightLb <= 0)
	{
		cout << "Cloud people can't take this test, sorry about that.";
		return 0;
	}
  
  baseLevelBMR = (10 * (patientWeightLb / 2.2)) + (6.25 * ((patientHeightFeet * 12) * 2.54)) - (5 * patientAge);
  
  if (patientSex == 'm')
  {
    baseLevelBMR += 5;
  }
  
  else if (patientSex == 'f')
  {
    baseLevelBMR -= 161;
  }
  
  cout << "The patients BMR is: " << baseLevelBMR;	
}