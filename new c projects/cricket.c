#include <stdio.h>
int main()
{
    int n = 11, i, total = 0;
    int runs[n];
    printf("Enter runs scored by %d players:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &runs[i]);
    }
    printf("\n===== COMMENTARY =====\n");
    for(i = 0; i < n; i++)
    {
        if(runs[i] == 0)
        {
            printf("Player %d: OUT FOR A DUCK!\n", i + 1);
        }
        else if(runs[i] > 0 && runs[i] < 30)
        {
            printf("Player %d: Scored %d runs - a decent contribution.\n",
                   i + 1, runs[i]);
        }
        else if(runs[i] >= 30 && runs[i] < 50)
        {
            printf("Player %d: Solid knock of %d runs!\n",
                   i + 1, runs[i]);
        }
        else if(runs[i] >= 50 && runs[i] < 100)
        {
            printf("Player %d: HALF-CENTURY! %d runs\n",
                   i + 1, runs[i]);
        }
        else
        {
            printf("Player %d: CENTURY!! What an innings - %d runs!\n",
                   i + 1, runs[i]);
        }
        total = total + runs[i];
    }
    printf("\n===== MATCH SUMMARY =====\n");
    printf("Total Team Score: %d\n", total);
    return 0;
}