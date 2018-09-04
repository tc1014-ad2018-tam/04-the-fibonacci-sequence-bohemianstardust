#include <stdio.h>

int main()
{
    int num;
    int first = 0;
    int second = 1;
    int next;
    int cont;

    printf("Welcome, user! How many Fibonacci numbers do you want to get?\n");
    scanf("%d", &num);


    for (cont = 0; cont < num; cont++)

    {
        if (cont <= 1)
            next = cont;

        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);

    }

    return 0;
}