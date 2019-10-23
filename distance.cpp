
#include <iostream>
#include <iomanip>
using namespace std;

// function with no parameters or values to greet user
void WelcomeUser(){
    printf("Welcome to the Converter! \nEnter two distances and they'll be converted to millimeters (mm).\n");
    return;
}

// fucntion takes in integer values then calculates how to turn them into millimeters
int NumMillimeters(int metersinmm, int centimetersinmm, int millimeters){
    int dist = 0;
    dist = metersinmm *= 1000;
    dist += centimetersinmm *= 10;
    dist += millimeters *= 1;
    return dist;
}

int main() {

    //initiliazing welcome function
    WelcomeUser();

    //initiliazing integers from NumMillimeters function
    int mt1, cm1, mm1;
    int mt2, cm2, mm2;

    //asking user to plug in first distances

    cout << "Input first distance..." << endl;

    cout << "Meters:";
    cin >> mt1;
    cout << "Centimeters:";
    cin >> cm1;
    cout << "Millimeters:";
    cin >> mm1;
    int one = NumMillimeters(mt1, cm1, mm1);

    //asking user to plug in second distances

    cout << "\nInput second distance...";

    cout << "\nMeters:";
    cin >> mt2;
    cout << "Centimeters:";
    cin >> cm2;
    cout << "Millimeters:";
    cin >> mm2;
    int two = NumMillimeters(mt2, cm2, mm2);

    //printing the results of the distances for each distance in mm
    cout << "\nThe first distance is " << one << " mm.";
    cout << "\nThe second distance is " << two << " mm.";

    //printing the difference between the two results
    cout << "\nThe difference is " << one - two << " mm.";

    return 0;
}
