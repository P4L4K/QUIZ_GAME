// CONTENTS OF USER DEFINED HEADER FILE thanks.c use in the main program
int horizontaldiamond();
void steps(int i, int j);
int horizontaldiamond()
{   int i,j,k=1;
    for (i=1;i<=11;i++)
    { 
      steps(i,j);
      printf("\t\t\t\t\t\t\t\t");
      steps(i,j);
      printf("\n");
      
    }
    return 0;
}

void steps(int i,int j)
{   
    if(i<=6)
      { for (j=1;j<=(6-i);j++)
        {
            printf("  ");
        }
        for(j=1;j<=1;j++)
        {
            printf("*");
        }
        for (j=1;j<=(2*i-2);j++)
        {
            printf("  ");
        }
        for (j=1;j<=1;j++)
        {
            printf("*");
            
        }
        for (j=1;j<=(6-i);j++)
        {
            printf("  ");
        }
      }
      else if (i==5)
      {
        printf("");
      }
      else
      { for (j=1;j<=(i-6);j++)
        {
            printf("  ");
        }
        for (j=1;j<=1;j++)
        {
            printf("*");
        }
        for (j=1;j<=(11-i)*2;j++)
        {
            printf("  ");
        }
        for(j=1;j<=1;j++)
        {
           printf("*");
        }
        for (j=1;j<=(i-6);j++)
        {
            printf("  ");
        }
      }
    
}
