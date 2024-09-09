 // Assignment 1 Fracturing 
 // Daniel Cruz  
 // UCF ID: 5485183
 
 
 
 #include <stdio.h> 
#include <math.h> 

#define PI 3.14159



 
double calculateDistance() {                          // 1st Funtion ( Call's variable to Calculate Distance)
   
    
    double x1 = askForUserInput();
     
    double y1 = askForUserInput();
    
    double x2 = askForUserInput();
    
    double y2 = askForUserInput();

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);               //Displays and Calculates Distance
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}


double calculatePerimeter() {                           // 2nd function (Call's variable to calcualte Perimeter)
    double distance = calculateDistance();                     
    double perimeter = 2 * PI * (distance / 2);                        // Using PI to calculate Circle 

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    return 2.0; 
}


double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * radius * radius;

    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return 3.0; 
}


double calculateWidth() {
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %.2lf\n", distance);
    return 3.0; 
}


double calculateHeight() {
    double distance = calculateDistance();

    printf("The height of the city encompassed by your request is %.2lf\n", distance);
    return 3.0; 
}

double askForUserInput() {                 // Bonus for Assingment 1   
    double input;                                                       // Asked Chat GPT to help guide throught this line of code 
    scanf("%lf", &input);
    return input;
}

int main(int argc, char **argv) {
   
    return 0;
}
