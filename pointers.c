#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50,60,0};
    int *i, *j;

    i = &arr[1];
    j = &arr[4];
    printf("%d\n", j-i);
    printf("%d\n", *j-*i);
    return 0;
}