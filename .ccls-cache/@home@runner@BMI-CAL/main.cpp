#include <iostream>

using namespace std;
double calculateBmi(double weight, double height) {
  double bmi = weight / (height * height);
  return bmi;
}

int main() {
  cout << "*****************************";
  cout << "\n\n\n BMI CALCULATOR" << endl;
  cout << "*****************************" << endl;
  cout << "********How it works*********" << endl;
  cout << "Underweight = <18.5" << endl;
  cout << "Normal weight = 18.5–24.9" << endl;
  cout << "Overweight = 25–29.9" << endl;
  cout << "Obesity = BMI of 30 or greater" << endl;
  cout << "*****************************" << endl;

  float userHeight;
  float userWeight;
  cout << "Enter your Height(kilo): ";
  cin >> userHeight;
  cout << "Enter your Weight(pounds): ";
  cin >> userWeight;

  if (calculateBmi(userWeight, userHeight) < 18.5) {
    cout << "You are underweight" << endl;
  } else if (calculateBmi(userWeight, userHeight) >= 18.5 &&
             calculateBmi(userWeight, userHeight) <= 24.9) {
    cout << "You are Normal Weight" << endl;
  } else if (calculateBmi(userWeight, userHeight) >= 25 &&
             calculateBmi(userWeight, userHeight) >= 29.9) {
    cout << "You are Overweight" << endl;
  } else {
    cout << "You are Obese" << endl;
  }

  return 0;
}