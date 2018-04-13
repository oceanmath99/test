#include <stdio.h>
#include <stdlib.h>
void doicho(int arr[][3])
{
    arr[1][1]=1;

    //arr[1]=1;
}
int main()
{
    int arr[3][3]={0};
    doicho(arr);
    printf("%d",arr[1][1]);
    printf("Hello world!\n");
    return 0;
}
