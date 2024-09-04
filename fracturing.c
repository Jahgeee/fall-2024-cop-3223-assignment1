//************
// assignment 1
// Author: Whitehead, Jah'Nasia
// UCF ID: 5547687
// Class: COP 3223
// Instructor: Juan Parra
// Purpose: This program prints a specific message to the
// command line. The main purpose of this assignment is for 
// the user to input distance, perimeter, width, height, and area. 
// Input: definitions
//
// Output: (To the command line) 2 points.

#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double x2, double y2){
    
    //int x1, y1, x2, y2;
    
    // Ask for inputs
    printf("Enter the coordinates of the first point (x1,y1):");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2,y2):");
    scanf("%lf %lf", &x2, &y2);
    sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    //double x1,y1, x2, y2 distance;?? is this needed?

    return 2.0;
}
int main(int argc, char **argv)
{
    double calculateDistance();
    
    //calculatePerimeter();

    //calculateArea();

    //calculateWidth();

    //calculateHeight();
  
    return 0; 
  
}