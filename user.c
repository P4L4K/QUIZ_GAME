//content in userdefined headerfile user.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int newuser(int score,char name[20]);
int count();
int previoususer();

int count()
{  
   FILE *ptr=fopen("consumer_details.txt","r");
   int count=0;
   char n[20];
    while(1)
    {
    fgets(n,20,ptr);
  //  printf("%s\n",n);
    if(n[0]==10)
      break;
    if(count<9)
    { if((n[0]-count)!=49)
       {break;}
    }
    else if(count<19){
        if(((n[0]+n[1])-count)!=88)
     {break;}
    }
    else if(count<29){
        if(((n[0]+n[1])-count)!=79)
     {break;}
    }
    else if(count<39){
        if(((n[0]+n[1])-count)!=70)
     {break;}
    }
    else if(count<49){
        if(((n[0]+n[1])-count)!=61)
     {break;}
    }
     count ++;
    }
    //printf("ans=%d",count);
    fclose(ptr);
    return count;
}
int newuser(int score,char name[20])
{

   printf("new user:");
    int id;
    
    FILE *ptr=fopen("consumer_details.txt","a");
    id=count();
    id=id+1;
    printf("id=%d",id);
    fprintf(ptr,"%d %s %d\n",id,name,score);
    fclose(ptr);
}
int previoususer()
{ 
    int id;
    printf("Enter your id :");
    scanf("%d",&id);
    FILE *ptr=fopen("consumer_details.txt","r"); 
    int data;int d;char f[20];//printing data 
    
    char n[20];int count=0;//used in while loop for going to required row
    printf("\n\n");
    while(count!=((id-1)))
    {
        count++;
    fgets(n,20,ptr);
    }
    printf("\n");
    fscanf(ptr,"%d",&data);
    if(data!=id)
    printf("invalid id ");
    else{
    printf("ID=%d\n",data);
    fscanf(ptr,"%s",&f);
    printf("NAME=%s\n",f);
    fscanf(ptr,"%d",&d);
    printf("SCORE=%d\n",d);}

}

