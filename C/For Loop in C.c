#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
      if(b<10)
      {
          for (int i=a; i<=b; i++) {
      if(i==1)
      printf("one \n");
      else if(i==2)
      printf("two \n");
      else if(i==3)
      printf("three\n");
      else if(i==4)
      printf("four \n");
      else if(i==5)
      printf("five \n");
      else if(i==6)
      printf("six \n");
      else if(i==7)
      printf("seven \n");
      else if(i==8)
      printf("eight \n");
      else if(i==9)
      printf("nine \n");
      }
      }
      else {
      for (int i=a; i<10; i++) {
      if(i==1)
      printf("one \n");
      else if(i==2)
      printf("two \n");
      else if(i==3)
      printf("three \n");
      else if(i==4)
      printf("four \n");
      else if(i==5)
      printf("five \n");
      else if(i==6)
      printf("six \n");
      else if(i==7)
      printf("seven \n");
      else if(i==8)
      printf("eight \n");
      else if(i==9)
      printf("nine \n");
      }
      for(int i=10;i<=b;){
          
          int r;
      r=i%2;
      if(r==1)
      printf("odd \n");
      else
      printf("even \n");
      i++;
      }
      
      }

    return 0;
}

