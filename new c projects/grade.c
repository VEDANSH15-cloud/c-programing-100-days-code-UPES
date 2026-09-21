#include <stdio.h>
int main()
{
char grade;
printf (" input the grade: ");
scanf(" %c",&grade);
switch(grade){
    case 'A' :
    case 'A+' : 
printf("excellent");
    break;
    case 'B' :
    case 'B+' : 
    printf("good");
    break;
    case 'C' :
    case 'C+' :  
    printf("needs improvement");
    break;
    default :  printf("invalid input");
}
return 0;
}