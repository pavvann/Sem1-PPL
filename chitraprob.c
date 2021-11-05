/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/

#include <stdio.h>
int main()
{
    float area, radius, majorradius, minorradius;
    printf(" \nEnter radius of sphere");
    scanf("%f", &radius);
    area = 4*3.14*radius*radius;
    printf("Area of sphere=%f", area);
    printf("\nEnter the radii of ellipse=");
    scanf("%f%f", &majorradius, &minorradius);
    area=3.14*majorradius*minorradius;
    printf("Area of ellipse = %f ", area);
    return 0;
}
