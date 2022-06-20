/*
CH-230-A
a12_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


/*
	           DIAGRAM
			-------------
				Area
			-------------
			 ||		  ||
			 ||		  ||
	--------------	---------------
	   Circle   	   Rectangle
	--------------	---------------
		  ||			  ||
		  ||			  ||
	--------------	----------------
	    Ring    	    Square
	--------------	----------------
*/

/*
	Explanations for numbered points
	(1) - An array of num_obj Area type pointers is being created
	(2) - Integer index used to go through the list in the while loop at (7)
	(3) - Double sum_area which holds the sum of all the area of the insts

	(4) - Up until (5) new instance initialised
          and a message shown about the creation of that instance
	(5) - Assign the addresses of the instances created before
		  (5) to the elements of the array of Area type pointers
	(7) - While loop going thorugh the array of Area pointers
	(8) - Assign the return value of calcArea method being called on the current
		  instance which is the current index of the array
		  Increment index by 1 and add value of area to sum_area
	(9) - Value of sum_area which is the sum of all the areas of the instances
		  created before is outputted into stdout using cout
*/




const int num_obj = 25;
int main()
{
    Area *list[num_obj];						// (1)
    int index = 0;								// (2)
    double sum_area = 0.0;						// (3)
    //start random number seed
    srand(static_cast<unsigned int>(time(0)));
    const char* colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};

    for (int i = 0; i < num_obj; i++)
    {
        // Pick random number between 0 and 3 inclusive for instance and color
        int randomChoice = rand() % 4;
        int randomColor = rand() % 4;
        // Statements inside cases have been put inside {} to solve for
        // cross initialization
        // rand() % 96 + 5 produces a number between 5 and 100 inclusive
        switch (randomChoice)
        {
        case 0 :
        {
            int randomRadius = rand() % 96 + 5;
            list[i] = new Circle(colors[randomColor], randomRadius);
        }
        break;
        case 1 :
        {
            int randomOuterRadius = rand() % 96 + 5;
            int randomInnerRadius = rand() % 96 + 5;
            list[i] = new Ring(colors[randomColor], randomOuterRadius,
                               randomInnerRadius);
        }
        break;
        case 2 :
        {
            int randomLength = rand() % 96 + 5;
            int randomWidth = rand() % 96 + 5;
            list[i] = new Rectangle(colors[randomColor], randomLength,
                                    randomWidth);
        }
        break;
        case 3 :
        {
            int randomSide = rand() % 96 + 5;
            list[i] = new Square(colors[randomColor], randomSide);
        }
        break;
        default :
            break;
        }
    }
    while (index < num_obj)  					// (7)
    {
        (list[index])->getColor();
        double area = list[index++]->calcArea();// (8)
        sum_area += area;
    }
    cout << "\nThe total area is "
         << sum_area << " units " << endl;	// (9)

    double sum_perimeter = 0.0;
    index = 0;
    while (index < num_obj)
    {
        (list[index])->getColor();
        double perimeter = list[index++]->calcPerimeter();
        sum_perimeter += perimeter;
    }
    cout << "\n Total perimeter is "
         << sum_perimeter << " units " << endl;
    return 0;
}
