#include <iostream>

using namespace std;

int main() {
    float m; 
    cout << "Enter weight (kg): ";
    cin >> m;

    float h;
    cout << "Enter height (cm): ";
    cin >> h;

    h = h / 100;  
    float bmi = m / (h * h);  
    cout << "Your body mass index: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}
