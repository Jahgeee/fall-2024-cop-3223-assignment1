//************
// assignment 1
// Author: Whitehead, Jah'Nasia
// UCF ID: 5547687
// Class: COP 3223
// Instructor: Juan Parra


#include <stdio.h>
#include <math.h>

double findDistance() {
    
    double x1, y1, x2, y2;
    
    // Ask for inputs
    printf("Enter the coordinates of the X in the first point: x1=");
    scanf("%lf", &x1);
    printf("Enter the coordinates of Y in the first point: y1=");
    scanf("%lf", &y1);
    printf("Enter the coordinates of the X in the second point: x1=");
    scanf("%lf", &x2);
    printf("Enter the coordinates of Y in the second point: y2=");
    scanf("%lf", &y2);

    //double x1,y1, x2, y2 distance;?? is this needed?
    // if I return sqrt will it work?? or is it seperate. 
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
// Distance 
 double calculateDistance() {
    double distance= findDistance();
    printf("The distance between the 2 points is: %.2lf",distance);
    return distance;

    }
// Perimeter
 double calculatePerimeter() {
    double distance = findDistance();
    double perimeter = x1 + y1 + x2 + y2;
    printf("The perimeter of the city is %.2lf", perimeter);
    return 0;
    }



 

    

  
int main()
{
    calculateDistance();
    calculatePerimeter();

    return 0;
}
  
