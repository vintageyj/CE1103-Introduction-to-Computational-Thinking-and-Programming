#include <stdio.h>
#include <math.h>

struct circle
{
    double radius;
    double x;
    double y;
};
int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);
int main()
{
    struct circle c[2];
    printf("Enter the radius of first circle:\n");
    scanf("%lf", &c[0].radius);
    printf("Enter the coordinates of the first circle (x, y):\n");
    scanf("%lf %lf", &c[0].x, &c[0].y);
    printf("Enter the radius of second circle:\n");
    scanf("%lf", &c[1].radius);
    printf("Enter the coordinates of the second circle (x, y):\n");
    scanf("%lf %lf", &c[1].x, &c[1].y);
    if (intersect(c[0], c[1]))
        printf("The two circles intersect.\n");
    else
        printf("The two circles does not intersect.\n");
    if (contain(&c[0], &c[1]))
        printf("c1 contains c2.");
    else
        printf("c1 does not contain c2.");
    return 0;
}
int intersect(struct circle c1, struct circle c2)
{
    double radius_sum, center_dist, x_dist, y_dist;
    radius_sum = c1.radius + c2.radius;
    x_dist = c2.x - c1.x;
    y_dist = c2.y - c1.y;
    center_dist = pow((pow(x_dist,2)+pow(y_dist,2)),0.5);
    if (radius_sum >= center_dist)
        return 1;
    else
        return 0;    
}
int contain(struct circle *c1, struct circle *c2)
{
    double center_dist, x_dist, y_dist, limit;
    x_dist = (*c2).x - (*c1).x; // same as x_dist = c2->x - c1->x;
    y_dist = (*c2).y - (*c1).y; // y_dist = c2->y - c1->y;
    center_dist = pow((pow(x_dist,2)+pow(y_dist,2)),0.5);
    limit = center_dist + (*c2).radius; // c2->radius
    if ((*c1).radius >= limit)
        return 1;
    else
        return 0;
}