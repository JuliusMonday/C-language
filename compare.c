#include<stdio.h>
int main(void)
// {
//     int x, y;
    
//     printf("Input your x value: ");
//     scanf("%d", &x);

//     printf("Input your y value: ");
//     scanf("%d", &y);
    
//     if(x > y) {
//         printf("x is greater than y");
//     } else if(x < y) {
//         printf("x is less than y");
//     } else {
//         printf("x is equal to y");
//     }

//     return 0;
// }

// trying out some other things on conditionals
{
    char c;
    
    printf("Are you a programmer? ");
    scanf(" %c", &c); 
    
    if(c == 'n' || c == 'N') {
        printf("No! Not at all");
    } else if(c == 'y' || c == 'Y') {
        printf("Yes! I am");
    } else {
        printf("Can't say %c", c);
    }
    
    return 0;
}