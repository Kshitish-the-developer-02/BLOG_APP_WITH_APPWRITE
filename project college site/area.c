#include <stdio.h>
int main()
{
    int a, b;
    printf("enter length: ");
    scanf("%d", &a);
    printf("enter breadth: ");
    scanf("%d", &b);

    int perimeter;
    perimeter=2*(a+b);
    printf("%d",perimeter);
    return 0;
}