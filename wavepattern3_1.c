/*
pattern 1
input:
height=4
lenght=4
4
   DE      LM      TU      BC   
  C  F    K  N    S  V    A  D  
 B    G  J    O  R    W  Z    E 
A      HI      PQ      XY      F

----------------X--------------X---------------
pattern 2

input:
height=4
lenght=4

   WV      ON      GF      YX   
  X  U    P  M    H  E    Z  W  
 Y    T  Q    L  I    D  A    V 
Z      SR      KJ      CB      U

*/
//method 1 for program1
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
   {if(k==1)               
     {
      if(t1>26)
        {
          printf("%3c",(t1-26)+64);
        }
      else 
     printf("%3c",t1+64);
       t1+=2*h;
     }
    else if(k==e)
    {if(t2>26)
      {
       printf("%3c",(t2-26)+64);
      }
      else
        printf("%3c",t2+64);
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
//method 2 for program1
#include<stdio.h>
int main()
{
 int i,j,h,l,cp,x;
 scanf("%d%d",&h,&l);
 x=h-1;
 for(i=0;i<h;i++)
 {cp='A';
  for(j=0;j<h*l*2;j++)
  {if(j%(h*2)==x || j%(h*2)==h+i)
     printf("%c",cp);
    else
     printf(" ");
   cp++;
  if(cp>'Z')
    cp=cp-26;
  }
   x--;
   printf("\n");
 }
 printf("\n");
 return 0;
}
//program for pattern2
#include<stdio.h>
int main()
{
 int i,j,h,l,cp,x;
 scanf("%d%d",&h,&l);
 x=h-1;
 for(i=0;i<h;i++)
 {cp='Z';
  for(j=0;j<h*l*2;j++)
  {if(j%(h*2)==x || j%(h*2)==h+i)
     printf("%c",cp);
    else
     printf(" ");
   cp--;
  if(cp<'A')
    cp=cp+26;
  }
   x--;
   printf("\n");
 }
 printf("\n");
 return 0;
}

