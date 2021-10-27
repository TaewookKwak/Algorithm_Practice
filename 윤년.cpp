#include <iostream>
using namespace std;
int main()
{
    int Year;
    scanf_s("%d", &Year);
    if ((Year % 4) == 0)
    {
        if (Year % 100 != 0 || Year % 400 == 0)
            printf("1");
        else
            printf("0");
    }
    else
        printf("0");

    return 0;

}