// Pass Structure to Function by Reference
// Define a structure Circle with radius. Write a function that accepts a pointer to the structure and computes and stores area and circumference.
#include <stdio.h>
#include <math.h>
#define PI 3.14159
struct Circle
{
    float radius;
    float area;
    float circumference;
};
void computeCircleProperties(struct Circle *c)
{
    c->area = PI * c->radius * c->radius;
    c->circumference = 2 * PI * c->radius;
}
int main()
{
    struct Circle c;
    printf("Enter radius of the circle: ");
    scanf("%f", &c.radius);
    computeCircleProperties(&c);
    printf("Area: %.2f\n", c.area);
    printf("Circumference: %.2f\n", c.circumference);
    return 0;
}