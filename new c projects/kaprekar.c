#include <stdio.h>
int main() 
{
    int num, temp, m, n, p, q, desc, asc, choice, step = 1;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999)
    {
        printf("Error: Input must be a proper 4-digit number (1000-9999).\n");
        return 1;
    }
    temp = num;  
    q = temp % 10; 
    temp /= 10;
    p = temp % 10; 
    temp /= 10;
    n = temp % 10; 
    temp /= 10;
    m = temp % 10;
    if (num/1111 == 0) 
    {
        printf("Error: All digits are the same (invalid).\n");
        return 1;
    }
    printf("Starting Kaprekar's routine for %d:\n\n", num);
    while (num != 6174) 
    {
        temp = num;
        q = temp % 10; 
        temp /= 10;
        p = temp % 10; 
        temp /= 10;
        n = temp % 10; 
        temp /= 10;
        m = temp % 10; 
        if (m < n) 
        { 
            
            temp = m; m = n; n = temp; 
        }
        if (m < p) 
        { 
            temp = m; m = p; p = temp; 
        }
        if (m < q) 
        {
             temp = m; m = q; q = temp; 
        }
        if (n < p) 
        { 
            temp = n; n = p; p = temp; 
        }
        if (n < q) 
        { 
            temp = n; n = q; q = temp; 
        }
        if (p < q) 
        { 
            temp = p; p = q; q = temp; 
        }
        desc = m * 1000 + n * 100 + p * 10 + q;
        asc  = q * 1000 + p * 100 + n * 10 + m;
        num = desc - asc; 
        printf("Step %d: %04d - %04d = %04d\n", step++, desc, asc, num);
    }
    printf("Total steps: %d\n", step - 1);
    return 0;
}