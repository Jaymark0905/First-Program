#include<stdio.h>
#include<stdlib.h>

int main()
{
   
  char fname[13],lname[15];
  float sub1,sub2,sub3,avg;

  printf("\n\t Enter first name:");
  scanf ("%s",&fname);

  printf("\n\t Enter last name:");
  scanf ("%s",&lname);

  

  printf("\n\t Enter three Marks:");
  scanf ("%f",&sub1);
  scanf ("%f",&sub2);
  scanf ("%f",&sub3);
    
  avg = (sub1+sub2+sub3)/3;

  printf("\n\t %s %s Your average mark is:%f",fname,lname,avg);
    
    return 0;
}