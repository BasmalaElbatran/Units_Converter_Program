#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> // Include the algorithm header for std::max
using namespace std;

int main() {
    // Declare variables for input and converted values
    string x;
    float Time_sec;
    float Time_min;
    float Time_hour;
    float Distance_cm;
    float Distance_m;
    float Distance_km;
    float temperature_fahr;
    float temperature_c;
    float temperature_k;
    int maxw; // Variable to store the maximum width for alignment

    // Display welcome message and menu
    cout << "Welcome to our converter program..." << endl;
    cout << "Choose the units you want to convert from the list or exit" << endl;
    cout << "1. Time" << endl;
    cout << "2. Distance" << endl;
    cout << "3. Temperature" << endl;

    // Input the choice from the user
    cin >> x;

    // Perform conversion based on user's choice
    if (x == "Time" || x == "time") {
        cout << "Enter your time in seconds: ";
        cin >> Time_sec;
        Time_min = Time_sec / 60.0;
        Time_hour = Time_min / 60.0;

        // Determine the maximum width for alignment
        maxw = max({to_string(Time_hour).length(), to_string(Time_min).length(), to_string(Time_sec).length()});

        // Output the converted time values with proper alignment
        cout << fixed << setprecision(2);
        cout << setw(maxw) << right << Time_hour << "  Hours" << endl;
        cout << setw(maxw) << right << Time_min << "  Minutes" << endl;
        cout << setw(maxw) << right << Time_sec << "  Seconds" << endl;
    }
    else if ((x == "Distance" || x == "distance")) {
        cout << "Enter your distance in cm: ";
        cin >> Distance_cm;
        Distance_m = Distance_cm / 100.0;
        Distance_km = Distance_m / 1000.0;

        // Determine the maximum width for alignment
        maxw = max({to_string(Distance_cm).length(), to_string(Distance_km).length(), to_string(Distance_m).length()});

        // Output the converted distance values with proper alignment
        cout << fixed << setprecision(2);
        cout << setw(maxw) << right << Distance_km << "  Km" << endl;
        cout << setw(maxw) << right << Distance_m << "  m" << endl;
        cout << setw(maxw) << right << Distance_cm << "  cm" << endl;
    }
    else if (x == "Temperature" || x == "temperature") {
        cout << "Enter your temperature in Fahrenheit: ";
        cin >> temperature_fahr;
        temperature_c = (5.0 / 9.0) * (temperature_fahr - 32.0);
        temperature_k = temperature_c + 273.15;

        // Determine the maximum width for alignment
        maxw = max({to_string(temperature_c).length(), to_string(temperature_k).length()});

        // Output the converted temperature values with proper alignment
        cout << setw(maxw) << right << fixed << setprecision(2);
        cout << setw(maxw) << right << temperature_c << "  Celsius" << endl;
        cout << setw(maxw) << right << temperature_k << "  Kelvin" << endl;
    }

    return 0;
}
