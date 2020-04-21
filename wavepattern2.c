/*
pattern 1
height=5
lenght=4

    ||        ||        ||        ||        
   |  |      |  |      |  |      |  |      
  |    |    |    |    |    |    |    |    
 |      |  |      |  |      |  |      |  
|        ||        ||        ||        |


----------X----------------X------------

pattern 2
height=5
lenght=4

    **        **        **        **        
   *  *      *  *      *  *      *  *      
  *    *    *    *    *    *    *    *    
 *      *  *      *  *      *  *      *  
*        **        **        **        *



*/
//program for pattern1
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
 int b,e=2,i,j,k,n;
 b=2*h-2;
 for(i=1;i<=h;i++)
 {
  for(j=h-1;j>=i;j--)
    printf(" ");
  for(j=1;j<=l;j++)
  {for(k=1;k<=e;k++)
   {if(k==1|| k==e)              
     { printf("|");
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

//program for pattern2
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
 int b,e=2,i,j,k,n;
 b=2*h-2;
 for(i=1;i<=h;i++)
 {
  for(j=h-1;j>=i;j--)
    printf(" ");
  for(j=1;j<=l;j++)
  {for(k=1;k<=e;k++)
   {if(k==1|| k==e)              
     { printf("*");
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
