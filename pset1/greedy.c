
#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
   float d, fc;
   do
   {
       printf("O hai! How much change is owed?\n");
       d = GetFloat();
   }
   while(d <= 0.0);
   
   // Conver Float into int 
   fc = d * 100;
   int ic = (int) round( fc);
   
   // Greedy Algorithm
   int count = 0;
   
   if( ic >= 25 )
    { count = ic/25; ic = ic%25; }
    
   if( ic >= 10 )
    { count += ic/10; ic = ic%10; } 
    
    if( ic >= 5 )
    { count += ic/5; ic = ic%5; }
    
    if( ic >= 1 )
    { count += ic/1; ic = ic%1; }
   
   printf("%d\n", count );
}