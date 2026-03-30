#include<stdio.h>
int main(){
    float hour,days,min,month,year;
    printf("Enter the number of minutes");
    scanf("%f",&min);
    printf("1. Minutes into hour\n");
    printf("2. Minutes into day\n");
    printf("3. Minutes into month\n");
    printf("4. Minutes into year\n");
    printf("5. Enter your choice:");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        hour = min/60;
        printf("%f minutes in hour are %f",min,hour);
        break;
    case 2:
        days = min/1440;
        printf("%f minutes in days are %f",min,days);
        break;
    case 3:
        month= min/43200;
        printf("%f minutes in months are %f",min,month);
        break;
    case 4:
        year = min/518400;
        printf("%f minutes in year are %f",min,year);   
        break;
    default:
        break;
    }
    return 0;
}


