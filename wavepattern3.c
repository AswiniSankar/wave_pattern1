/*
pattern
height=4
lenght=4


     4  5       12 13       20 21       28 29      
    3    6     11   14     19   22     27   30    
   2      7   10     15   18     23   26     31  
  1        8  9       16 17       24 25       32

----------------X--------------X---------------


*/
//program
#include<stdio.h>
void wave(int,int);
int main()
{
  int height,lenght;
  scanf("%d%d",&height,&lenght);
  wave(height,lenght);
 printf("\n");
 return 0;
}
void wave(int h,int l)
{
 int b,e=2,i,j,k,n,t1,t2;
 b=2*h-2;
 for(i=1;i<=h;i++)
 {t1=h-i+1;
  t2=h+i;
  for(j=h-1;j>=i;j--)
    printf(" ");
  for(j=1;j<=l;j++)
  {for(k=1;k<=e;k++)
   {if(k==1)               //to print the * or | just change if condition as k==1 || k==e printf("* or |") no need for else if statement
     { printf("%3d",t1);
       t1+=2*h;
     }
    else if(k==e)
    {printf("%3d",t2);
      t2+=2*h;;
    }    
    else
      printf(" ");

   }
   
    n=1;
    while(n<=b)
    {printf(" ");
      n++;
    }
   
  }
 b=b-2;
  e=e+2;
  printf("\n");
 }
}
