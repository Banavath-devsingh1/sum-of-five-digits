#include<stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,condition;
    printf("enter the first coordinates",x1,y1);
    scanf("%f%f",&x1,&y1);

    printf("enter the second coordinates",x2,y2);
    scanf("%f%f",&x2,&y2);

    printf("enter the third coordinates",x3,y3);
    scanf("%f%f",&x3,&y3);

    if(((y2-y1)/(x2-x1)==(y3-y1)/(x3-x1)))
    {
        printf("given coordinates lies on straight line");
    }
    else
    {
        printf("given coordinates doesn't lies on the straight line");
    }
    return 0;


}

