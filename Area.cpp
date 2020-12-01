// Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
double circle();
double rectangle(); 
double triangle();

int main()

{

    int choice;
    do {
        cout << "please choose one of these options" << endl;
        cout << "0. exit" << endl << "1. circle" << endl << "2. triangle" << endl << "3. rectangle \n";
        cin >> choice;
        cout << "***********************************\n";
        switch (choice)
        {
        case 0:
            cout << "Thank you for nothing\n";
            return 0;
        case 1:
            cout << "You choose to calculate the area of a circle\n";
            cout << "The area of the circle is: " << circle() << "\n";
            cout << "***********************************\n";
            break;
        case 2:
            cout << "You choose to calculate the area of a triangle\n";
            cout << "The area of the triangle is: " << triangle() << "\n";
            cout << "***********************************\n";
            break;
        case 3:
            cout << "You choose to calculate the area of a rectangle\n";
            cout << "The area of the rectangle is: " << rectangle() << "\n";
            cout << "***********************************\n";
            break;
        }
    } while (choice != 0);

    //cout << "The area of the circle is: " << circle() << "\n";
    //cout << "***********************************\n";
    //cout << "The area of the rectangle is: " << rectangle()<< "\n";
    //cout << "***********************************\n";
    //cout << "The area of the triangle is: " << triangle() << "\n";

    //return 0;
}

double area;

double circle() {

    int r;
    const double pi = 3.14;

    cout << "Enter the radius of the circle \n";
    cin >> r;
   
    area = pi * pow(r, 2);
   
    return area;

}

double rectangle() {

    double width, length;
    
    cout << "Enter the width of the rectangle \n";
    cin >> width;
    cout << "Enter the lenght of the rectangle \n";
    cin >> length;
 
    area = width * length;
    
    return area;

}

double triangle() {

    double hb, b;
    cout << "Enter the base of the triangle: \n";
    cin >> b;
    cout << "Enter the height of the triangle: \n";
    cin >> hb;

    area = 0.5 * b * hb;
    return area;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
