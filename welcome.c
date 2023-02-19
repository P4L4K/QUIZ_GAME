//printing welcome
#include<stdio.h>
void w(int l,int i);
void m(int l,int i);
void c(int l,int i);
void o(int l,int i);
void l(int l,int i);
void e(int l,int i);
void welcome(int len);
void welcome(int len)
{int i=0;
printf("\n\n");
for(i=1;i<=len;i++)
{w(len,i);
e(len,i);
l(len,i);
c(len,i);
o(len,i);
m(len,i);
e(len,i);
printf("\n");
}
  printf("\n\n");  
}
void e(int l,int i)
{
    int j=0;
   // for(i=1;i<=l;i++)
  // {
        if( i==l || i==1)
        {
            
            for(j=0;j<l;j++)
            printf("*");
        }
        else if( i==((l/2)+1))
        {
            for(j=0;j<(l/2)+1;j++)
            printf("*");
            for(j=0;j<(l/2)-1;j++)
            printf(" ");
            if(l%2!=0)
            printf(" ");
        }
        else 
        {
            printf("*");
            for(j=0;j<l-1;j++)
            printf(" ");
            
        }
        printf("    ");
   //  printf("\n");
 //}
}
void l(int l,int i)
{   
    int j=0;
   // for(i=1;i<=l;i++)
  // {
        if( i==l)
        {
            
            for(j=0;j<l-2;j++)
            printf("*");
            
            
        }
        else 
        {
            printf("*");
            for(j=0;j<l-3;j++)
            printf(" ");
            
        }
      printf("    ");
 //     printf("\n");
// }
}
void o(int l,int i)
{   
    int j=0;
    //for(i=1;i<=l;i++)
   // {
        if(i==1 || i==l)
        {
            printf(" ");
            for(j=1;j<l;j++)
            printf("*");
            printf(" ");
        }
        else 
        {
            printf("*");
            for(j=0;j<l-1;j++)
            printf(" ");
            printf("*");
        }
    printf("    ");
    //   printf("\n");
   // }
}
void c(int l,int i)
{
    int j=0;
  //  for(i=1;i<=l;i++)
   // {
        if(i==1 || i==l)
        {
            printf(" ");
            for(j=1;j<l;j++)
            printf("*");
            
        }
        else 
        {
            printf("*");
            for(j=0;j<l-1;j++)
            printf(" ");
        }
    printf("    ");
   //     printf("\n");
  //  }
}
void m(int l,int i)
{
    int j=0;
   // for(i=1;i<=l;i++)
  //  {   
        for(j=0;j<1;j++)
        printf("*");
        if(i<=((2*l)/3))
        {
        for(j=0;j<(i-1);j++)
        printf(" ");
        for(j=0;j<1;j++)
        printf("*");
        for(j=0;j<((2*l)/3)-i;j++)
        printf("  ");
        for(j=0;j<1;j++)
        printf("*");
        for(j=0;j<(i-1);j++)
        printf(" ");
        }
        else
        {
            for(j=0;j<(2*((2*l)/3));j++)
            printf(" ");
        }
        for(j=0;j<1;j++)
        printf("*");
        printf("    ");
   //     printf("\n");
   // }
}
void w(int l,int i)
{
 
   int j=0;
   //for (i=1;i<=l;i++)
   // {
    
        for (j=0;j<1;j++)
        printf("*");
        if(i==1)
        {
        for(j=0;j<((l*2)-2);j++)
        printf(" ");
        }
        else
        {
        for (j=0;j<(l-i);j++)
        printf(" ");
        for(j=0;j<1;j++)
        printf("*");
    
        for(j=0;j<(i-2);j++)
        printf("  ");
        for(j=0;j<1;j++)
        printf("*");
    
        for(j=0;j<(l-i);j++)
        printf(" ");
        
        }
        for(j=0;j<1;j++)
        printf("*");
printf("    ");
      //  printf("\n");
     //}
}