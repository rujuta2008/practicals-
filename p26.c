#include<stdio.h>
#include<math.h>


// function prototypes
int getInput(double *a, double *b, double *c);
int validateTriangle(double a,double b,double c);
double calculateArea(double a,double b,double c);
void displayResult(int valid,double area,double a,double b,double c);

int main(){
    double a,b,c;
    //get user input(nested function)
    if(!getInput(&a,&b,&c))
        return 0;

    //validate triangle (nested)
    int valid =validateTriangle(a,b,c);

    //calculate area if valid
    double area=0;
    if(valid)
            area=calculateArea(a,b,c);
    //display result
    displayResult(valid, area, a, b, c);

    return 0;

}

    // Input function
    int getInput(double *a, double *b, double *c) {
        printf("Enter the three sides of the triangle:\n");
        scanf("%lf %lf %lf", a, b, c);
    // Check positive values
        if (*a <= 0 || *b <= 0 || *c <= 0) {
            printf("Valid Triangle: No\nMessage: Side lengths must be positive numbers.\n");
            return 0;
        }
            return 1;
    }
    // Validation function
    int validateTriangle(double a, double b, double c) {
        return (a + b > c && b + c > a && c + a > b);
}

// Area calculation (Heron's formula)
    double calculateArea(double a, double b, double c) {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Display function
    void displayResult(int valid, double area, double a, double b, double c) {
        if (!valid) {
            printf("Valid Triangle: No\nMessage: The given lengths do not form a valid triangle.\n");
        } else {
            printf("Valid Triangle: Yes\nArea: %.2lf\n", area);
        }
}
