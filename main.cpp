#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    cout << "------------------ BMI Calculator ------------------\n\n";
    char unit;
    
    cout << "What unit system would you like to use? (m = metric, i = imperial)\n";

    cin >> unit;
    
    float height, weight, bmi;
    cout << "Enter your height (meters or inches): \n";
    cin >> height;
    cout << "Enter your weight (KGs or LBs): \n";
    cin >> weight;
    // if unit sys is i, multiple by 703 to properly calculate BMI result
    (unit == 'i') ? weight *= 703 : NULL;

    bmi = weight / (height * height);

    string result;

    if (bmi >= 25) result = "You are overweight, BMI: " ;
    else if (bmi >= 18.5 && bmi <= 24.9) result = "You are healthy! BMI: ";
    else result = "You are underweight, BMI: ";

    cout << result << bmi;
    system("pause>0");
    
}
