#include<stdio.h>
int main()
{
    int lenght =70;
    int breadth =90;

    int area,perimeter;
    area = lenght * breadth;
    perimeter = 2 * (lenght + breadth);
    printf("Length of rectangle is %d\n", lenght);
    printf("Breadth of rectangle is %d\n", breadth);
    printf("Area of rectangle is %d\n", area);
    printf("Perimeter of rectangle is %d\n", perimeter);
    return 0;

}
