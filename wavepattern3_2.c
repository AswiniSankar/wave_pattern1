/*

pattern 1
4
4
   de      lm      tu      bc   
  c  f    k  n    s  v    a  d  
 b    g  j    o  r    w  z    e 
a      hi      pq      xy      f
----------------X--------------X---------------
pattern 2
4
4
   wv      on      gf      yx   
  x  u    p  m    h  e    z  w  
 y    t  q    l  i    d  a    v 
z      sr      kj      cb      u

*/

//program for pattern 1
#include<stdio.h>
int main()
{
 int i,j,h,l,cp,x;
 scanf("%d%d",&h,&l);
 x=h-1;
 for(i=0;i<h;i++)
 {cp='a';
  for(j=0;j<h*l*2;j++)
  {if(j%(h*2)==x || j%(h*2)==h+i)
     printf("%c",cp);
    else
     printf(" ");
   cp++;
  if(cp<'z')
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
 {cp='z';
  for(j=0;j<h*l*2;j++)
  {if(j%(h*2)==x || j%(h*2)==h+i)
     printf("%c",cp);
    else
     printf(" ");
   cp--;
  if(cp<'a')
    cp=cp+26;
  }
   x--;
   printf("\n");
 }
 printf("\n");
 return 0;
}
