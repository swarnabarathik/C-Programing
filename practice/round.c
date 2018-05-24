#include <stdio.h>
int main()
{
    float num ;
    scanf("%f",&num);
    int n = (int)(num < 0 ? (num - 0.5) : (num + 0.5));
    printf("%d\n", n);
    return 0;
}
