#include<stdio.h>
int main(void)
{
    int x, y;
    
    printf("Input your x value: ");
    scanf("%d", &x);

    printf("Input your y value: ");
    scanf("%d", &y);
    
    if(x > y) {
        printf("x is greater than y");
    } else if(x < y) {
        printf("x is less than y");
    } else {
        printf("x is equal to y");
    }

    return 0;
}