#include<stdio.h>
#include<math.h>
int main(){
    int a,b,perimeter,area;
    printf("Enter side 1 of ractangle=");
    scanf("%d",&a);
    printf("Enter side 2 of rectangle=");
    scanf("%d",&b);
    perimeter = 2*(a+b);
    area = a*b;
    printf("Perimeter of rectangle is %d\n",perimeter);
    printf("Area of rectangle is %d",area);
    return 0;
}