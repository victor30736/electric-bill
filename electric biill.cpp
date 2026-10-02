#include <stdio.h>

//function prototype 
float calculatebill(float units_consumed);

int main(){

float result, units_consumed ;
 printf("enter units_consumed:\t");
scanf("%f",&units_consumed); 
 //function call
 result=calculatebill(units_consumed);
 
 printf("\n");
 printf("----electricity bill----\n");
 printf("number of units consumed%f\n",units_consumed);; 
printf ("total bill paid.ksh%f\n",result);

return 0;
 }

//function definition
float calculatebill(float units_consumed){
float bill;
if(units_consumed<=100){
bill=10 *units_consumed;
}
else if(units_consumed<=200){
bill=10*100+(units_consumed-100)*15;
}
else if(units_consumed>200){
bill=10*100+100*15+(units_consumed-200)*20;
}
return bill;
}

