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
	
	cout << "How old is the patient? (Years): ";
	cin >> patientAge;
	
	cout << "What is the height of the patient? (Feet): ";
	cin >> patientHeightFeet;
	
	cout << "What is the weight of the patient? (LB): ";
	cin >> patientWeightLb;
  
  baseLevelBMR = (10 * (patientWeightLb / 2.2)) + (6.25 * ((patientHeightFeet * 12) * 2.54)) - (5 * patientAge);
  
  if (patientSex == 'M')
  {
    baseLevelBMR += 5;
  }
  
  else if (patientSex == 'F')
  {
    baseLevelBMR -= 161;
  }
  
  cout << "The patients BMR is: " << baseLevelBMR;
  
	
}
