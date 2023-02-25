#include <stdio.h>
#include <math.h>

int main(){

    const double PI  = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe circumference is %lf", circumference);
    printf("\nThe area is %lf", area);

    return 0;
}
