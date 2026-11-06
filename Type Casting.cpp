
#include <iostream>
using namespace std;

int main()
{
    int total_precipitation = 143;
    int recorded_days = 4;
    double calibration_offset = 1.85;

    // Calculate average using double division
    double average_precipitation =
        static_cast<double>(total_precipitation) / recorded_days;

    cout << "Average Precipitation = "
         << average_precipitation << endl;

    float final_metric = average_precipitation + calibration_offset;

    cout << "Final Metric = " << final_metric << endl;

    // Convert float into integer
    int final_metric_int = static_cast<int>(final_metric);

    cout << "Final Metric (Integer) = "
         << final_metric_int << endl;

    int diagnostic_code = 66;

    // Convert integer into character
    char diagnostic_char = static_cast<char>(diagnostic_code);

    cout << "Diagnostic Code = " << diagnostic_char << endl;

    return 0;
}

