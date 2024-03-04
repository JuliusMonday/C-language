#include<stdio.h>

// Function declaration (prototype)
void cat(int n);

int main(void)
{
    char name[] = "Cat Function";
    puts(name);

    cat(4);

    // return 0;
}

// Function definition
void cat(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}

