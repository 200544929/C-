#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate Gibbs free energy
double calculateGibbsFreeEnergy(double R, double T, double lnK) {
    return -R * T * lnK;
}

int main() {
    double R, T_celsius, T_kelvin, lnK = -6.45, delta_G;

    // Get input from the user for R and T
    cout << "Enter the value of the gas constant R (in J/(mol·K)): ";
    cin >> R;
    cout << "Enter the temperature T in Celsius: ";
    cin >> T_celsius;

    // Convert Celsius to Kelvin
    T_kelvin = T_celsius + 273.15;

    // Calculate Gibbs free energy
    delta_G = calculateGibbsFreeEnergy(R, T_kelvin, lnK);

    // Print the result
    cout << "Gibbs free energy (ΔG°) is: " << delta_G << " J/mol" << endl;

    return 0;
}
