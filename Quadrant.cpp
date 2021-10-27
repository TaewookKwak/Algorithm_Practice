#include <iostream>
using namespace std;
int main()
{
    int Quadrant_x, Quadrant_y;
    scanf_s("%d", &Quadrant_x);
    scanf_s("%d", &Quadrant_y);
    if (((-1000 <= Quadrant_x) && (1000 >= Quadrant_x) && (0 != Quadrant_x)) && ((-1000 <= Quadrant_y) && (1000 >= Quadrant_y) && (0 != Quadrant_y)))
    {
        if (Quadrant_x > 0 && Quadrant_y > 0)
            printf("1");
        else if (Quadrant_x < 0 && Quadrant_y > 0)
            printf("2");
        else if (Quadrant_x < 0 && Quadrant_y < 0)
            printf("3");
        else if (Quadrant_x > 0 && Quadrant_y < 0)
            printf("4");
    }
    else
    {
        printf("something is wrong");
    }
    return 0;

}