/******************************************************************************
Geometry Calculator
Write a program that displays the following menu:

Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1-4):

If the user enters 1, the program should ask for the radius of the circle and then display
its area. Use the following formula:
area  π r 2
Use 3.14159 for π and the radius of the circle for r . If the user enters 2, the program
should ask for the length and width of the rectangle and then display the rectangle’s
area. Use the following formula:
area = length * width
If the user enters 3 the program should ask for the length of the triangle’s base and its
height, and then display its area. Use the following formula:
area = base * height * .5
If the user enters 4, the program should end.
Input Validation: Display an error message if the user enters a number outside the range
of 1 through 4 when selecting an item from the menu. Do not accept negative values
for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.
*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

int choice;
  double area, radius, length, width, base, height;
  const double PI = 3.14159;

//Menu
  cout << "\n\n\nJoonie's Geometry Calculator" ;
  cout << "\n----------------------------" ;
  cout << "\n1. Calculate the Area of a Circle" ;
  cout << "\n2. Calculate the Area of a Rectangle" ;
  cout << "\n3. Calculate the Area of a Triangle" ;
  cout << "\n4. Quit" ;
  cout << "\n\nEnter your choice (1-4): " ;
  cin >> choice;

//If user chooses 1, ask for (positive) radius and calculate area of circle
  if ( choice == 1) {
    cout << "\nEnter the radius of the circle: " ;
    cin >> radius;
      if (radius <= 0) 
        cout << "\nNope! Radius must be a positive number\n" ;
    area = PI * pow(radius, 2);
    cout << "\nThe area of the circle is " << area ;
  }

//If user chooses 2, ask for (positive) length and width and calculate area of rectangle
  else if ( choice == 2) {
    cout << "\nEnter the length of the rectangle: " ;
    cin >> length;
      if (length <= 0) 
        cout << "\nNope! Length must be a positive number\n" ;
    cout << "\nEnter the width of the rectangle: " ;
    cin >> width;
        if (width <= 0) 
          cout << "\nNope! Width must be a positive number\n" ;
    area = length * width ;
    cout << "\nThe rectangle's area is " << area ; 
  }

//If user chooses 3, ask for (positive) base and height and calculate area of triangle
  else if ( choice == 3) {
    cout << "\nEnter the length of the triangle's base: " ;
    cin >> base;
      if (base <= 0) 
        cout << "\nNope! Base must be a positive number\n" ;
    cout << "\nEnter the length of the triangle's  height: " ;
    cin >> height;
       if (height <= 0) 
        cout << "\nNope! Height must be a positive number\n" ;
    area = base * height * .5 ;
    cout << "\nThe triangle's area is " << area ;
  }

//If user chooses 4, the caluclator will end
else if (choice == 4) {
    cout << "\n\nCalculator has ended" ;
  } 
  
//If user makes a choice outside of range, display this error message
  else {
    cout << "\nSeriously? I said enter a choice between 1 and 4!" ;
  }
  
  return 0;

  }