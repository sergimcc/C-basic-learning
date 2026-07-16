#include <stdio.h>
int main (void) 
{
    printf("CALCULATOR OF THE VOLUME OF A SPHERE\n");
    float radius;
    printf("Please, tell me the radius of your sphere: ");
    scanf("%f", &radius);
    #define radiuscube radius*radius*radius 
    float volume = (4.0/3.0) * 3.14159 * radiuscube;
    printf("The volume of your sphere is %f\n", volume);
    return 0;
}