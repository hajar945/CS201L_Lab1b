//Name:  Hajar Wilkes
//Date: August 29, 2024
//Assignment: Lab 1 partb
//I copied and pasted code from Prof. Gladbach's Replit from what we did in class and also used ChatGPT for some lines
#include <iostream>
#include <string>
#include <random>
#include <cmath>

using namespace std;
int main() {
    int num1, num2, num3, num4;
    int x1, y1, x2, y2;
    float dist1, dist2;
    char choice;

    srand(time(0));

    cout << "How would you like to get the 4 values: ";
    cin >> choice;
    if (choice == 'e') {
        cout << "Please enter 4 values: ";
        cin >> num1 >> num2 >> num3 >> num4;


        if ((num1 < -10 || num1 > 10) ||
            (num2 < -10 || num2 > 10) ||
            (num3 < -10 || num3 > 10) ||
            (num4 < -10 || num4 > 10)) {

            cout << "Error. Please select numbers between -10 and 10." << endl;
        }
        x1 = num1;
        y1 = num2;
        x2 = num3;
        y2 = num4;
    }
    else if (choice == 'g') {

        
       

        x1 = rand() % 21 - 10;
        y1 = rand() % 21 - 10;
        x2 = rand() % 21 - 10;
        y2 = rand() % 21 - 10;

        cout << "Generated numbers: ";
        cout << "Generated numbers: " << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << endl;
    }
    else {
        cout << "Invalid choice. Please enter 'e' or 'g'." << endl;
        return 1;
    }
        dist1 = pow(pow(x1, 2) + pow(y1, 2), .5);
        dist2 = pow(pow(x2, 2) + pow(y2, 2), .5);

        cout << "Distance to origin for point1: (" << x1 << "," << y1 << ") is " << dist1 << endl;
        cout << "Distance to origin for point2: (" << x2 << "," << y2 << ") is " << dist2 << endl;

        if (dist1 < dist2) {
            cout << "Point1 (" << x1 << "," << y1 << ") is closer to the origin." << endl;
        }
        else if (dist2 < dist1) {
            cout << "Point2 (" << x2 << "," << y2 << ") is closer to the origin." << endl;
        }
        else {
            cout << "Both points are equidistant from the origin." << endl;
        }

        return 0;
    }
