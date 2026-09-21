#include <stdio.h>
int main(){
    char x;
    printf("Enter a character:");
    scanf("%c", &x);
    if (x>='A' && x<='Z')
        printf("uppercase letter\n");
    else if (x>='a' && x<='z')
        printf("lowercase letter\n");
    else if (x>='0')
        printf("digit\n");
    else if (x == ' ')
        printf("whitespace\n");
    else
        printf("special character\n");
    return 0;
} 