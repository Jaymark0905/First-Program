#include<stdio.h>

int main()
{
    int science,english,math,filipino,history=0;
    float average,total=0;
    char name[30];
    
    printf("Enter science grade:");
     scanf("%d",&science);
    printf("Enter english grade:");
     scanf("%d",&english);
    printf("Enter math grade:");
     scanf("%d",&math);
    printf("Enter filipino grade:");
     scanf("%d",&filipino);
    printf("Enter history grade:");
     scanf("%d",&history);
    
    total = science+english+math+filipino+history;
    average = total/5;
    
    printf("Hi Mr Jay Mark.");
    puts(name);
    
    printf("Your grade total is %.2f\n",total);
    printf("Your grade average is %.2f",average);
    return 0;
}