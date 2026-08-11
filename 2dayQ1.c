//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
 #include<stdio.h>
int main() {
    float length , breadth, area , perimeter;
    printf("enter the length of rectangle:");
    scanf("%f", &length);
    printf(" enter the breadth of the rectangle:");
    scanf("%f", &breadth);
    area= length * breadth;
    perimeter= 2*(length+breadth);
    printf(" area of the rectangle : %f\n",area);
    printf(" perimeter of the rectangle : %f\n",perimeter);
    return 0;
}
 
 
 
 
