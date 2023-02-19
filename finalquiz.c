//header files used...............................................................
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include"thanks.c"

//user defined functions used......................................................
int topic();
int check(char ans,char correct[11],int i, int score);
int questions(int);
void rules(int i);
int playagain();
void w(int l,int i);
void m(int l,int i);
void c(int l,int i);
void o(int l,int i);
void l(int l,int i);
void e(int l,int i);
void welcome(int len);

// main functin.....................................................................
void main()
{
       system("cls");
    // printing welcome.......
        welcome(6);
        printf("\n\nNEXT PAGE >> [PRESS \">\"]");
        getch();
        system("cls");
   //taking user details.......
    
   // printing rules.........
   system("color 06");
   printf("\n\t########## before starting please see the rules ##########\n");
   rules(-1);
   printf("\n\nNEXT PAGE >> [PRESS \">\"]");
   Sleep(1000);
   getch( );
   system("cls");
   //printing questions and finding scores...
   play_again:    //playing again label for goto function
   questions(topic());
   //asking to play again..............
   if(playagain())
   {
    goto play_again;
   }
   else
   { 
     Sleep(1500);
     system("cls");
     system ("color 06");
     horizontaldiamond();
     printf("\t\t\t\t~~~~~~~~~~~~ THANK YOU ~~~~~~~~~~~~~\t\t\t\t\n");
     horizontaldiamond();
     printf("\n\n\n\n\n");
   }
}

//definition of user defined functions...............................................

//asking to play again..............
int playagain()
{   int choice;
    Sleep(1000);
    system("cls");
    printf("\n\n Do you want to play another quiz ? [y_yes / n_no]  :");
    scanf(" %c",&choice);
    if(choice=='y'|| choice=='Y')
    { return 1; }
    else
    {
    return 0;
    }
}
// printing and declaring questions,taking answers and calculating score
int questions(int choice)
{
   int score=0;
   int k=1,i=0,j=0; //looping variables
   char ans;
   char *sq;    //used for shuffling ques
   char sc;     //used for shuffling correct ans
   char *suboption[4]={"","","",""}; // used in shuffling sub part of options
   char *ques[25];
   char *option[25][4];
   char correct[25];
   int error_count=0; //to keep the count of invalid answers
   if (choice==1)//for techniqual questions
  { //ques 1 .....
    ques[0]="what is full form of RAM ?";
    option[0][0]="Random Access Memory";
    option[0][1]="Refresh Account Memory";
    option[0][2]="Restart Archived Memory";
    option[0][3]="Resource Acess Memory";
    correct[0]='1';
    //ques 2 .....
    ques[1]="What is part of database that holds only one type of information? ";
    option[1][0]="Report ";
    option[1][1]="Field ";
    option[1][2]="Record ";
    option[1][3]="File ";
    correct[1]='2';
    //ques 3 .....
    ques[2]="'OS' computer abbreviation usually means? ";
    option[2][0]=" Order of Significance";
    option[2][1]="Open Software";
    option[2][2]="Operating System ";
    option[2][3]="Optical Sensor ";
    correct[2]='3';
    //ques 4 .....
    ques[3]="'.MOV' extension refers usually to what kind of the file? ";
    option[3][0]="Image File ";
    option[3][1]="Animation File ";
    option[3][2]="Audio File ";
    option[3][3]="Ms Office document ";
    correct[3]='2';
    //ques 5 .....
    ques[4]="Which is a type of Electrically Erasable Program Read memory?  ";
    option[4][0]="Flash ";
    option[4][1]=" Flange";
    option[4][2]=" Fury";
    option[4][3]=" FRAM";
    correct[4]='1';
    //ques 6.....
    ques[5]=" The purpose of choke in tubelight is:";
    option[5][0]="to decrease the current ";
    option[5][1]=" to increase the current";
    option[5][2]="to decrease the voltage";
    option[5][3]="to increase the voltage";
    correct[5]='4';
    //ques 7.....
    ques[6]="'.MPG' refers to usually what kind of file?";
    option[6][0]="WordPerfect Document File ";
    option[6][1]=" MS Office Document";
    option[6][2]="Animation File ";
    option[6][3]="Image File ";
    correct[6]='3';
    //ques 8.....
    ques[7]="Who developed Yahoo? ";
    option[7][0]="Dennis Richti and Ken Thomson ";
    option[7][1]="David Filo and Jerry Yang ";
    option[7][2]=" Vint Cerf and Robert Kahn";
    option[7][3]="Steve Case and Jeff Bezos ";
    correct[7]='3';
    //ques 9.....
    ques[8]="Made from a variety of materials like carbon, which inhibits the flow of current? ";
    option[8][0]="Choke ";
    option[8][1]="Inductor ";
    option[8][2]="Resistor ";
    option[8][3]="Capacitor ";
    correct[8]='3';
    //ques 10.....
    ques[9]=" What does VVVF stands for?";
    option[9][0]=" Varient Voltage Vile Frequency";
    option[9][1]=" Variable Velocity Variable Fun";
    option[9][2]=" Very Very Vicious Frequency";
    option[9][3]=" Variable Voltage Variable Frequency";
    correct[9]='4';
    //ques 11.....
    ques[10]=" Which motor is NOT suitable for use as a DC machine?";
    option[10][0]="Permanent magnet motor ";
    option[10][1]="Series motor ";
    option[10][2]=" Squirrel cage motor";
    option[10][3]=" Synchronous motor";
    correct[10]='3';
    //ques 12.....
    ques[11]="A given signal's second harmonic is twice the given signal's _______ frequency...? ";
    option[11][0]="Fourier ";
    option[11][1]="Foundation ";
    option[11][2]="Fundamental ";
    option[11][3]="Field ";
    correct[11]='3';
    //ques 13.....
    ques[12]=" What does the term 'PLC' stand  for?";
    option[12][0]=" Programmable Lift Computer";
    option[12][1]="Program List Control ";
    option[12][2]="Programmable Logic Controller ";
    option[12][3]="Piezo Lamp Connector ";
    correct[12]='3';
    //ques 14.....
    ques[13]="How is an array initialized in C language? ";
    option[13][0]=" int a[3]={1,2,3};";
    option[13][1]="int a={1,2,3}";
    option[13][2]="int a{}=new int[3]; ";
    option[13][3]="int a(3)=[1,2,3]; ";
    correct[13]='1';
    //ques 15.....
    ques[14]="How are string represented in memory in c? ";
    option[14][0]="An array of characters ";
    option[14][1]="The of object of class ";
    option[14][2]="Same as other primitive data types ";
    option[14][3]="Linkedlist of characters ";
    correct[14]='1';
    //ques 16.....
    ques[15]="What does the int x=8; declaration indicate? ";
    option[15][0]="x stores value 8";
    option[15][1]="x is an integer ";
    option[15][2]="both 1 and 2 ";
    option[15][3]="none of the above ";
    correct[15]='3';
    //ques 17.....
    ques[16]="Which of the following is an exit controlled loop? ";
    option[16][0]="While loop ";
    option[16][1]="For loop ";
    option[16][2]="do-while loop ";
    option[16][3]="none of the above ";
    correct[16]='3';
    //ques 18.....
    ques[17]="What is the size of the int data type (in bytes) in C ";
    option[17][0]="4";
    option[17][1]="8";
    option[17][2]="2";
    option[17][3]="1";
    correct[17]='1';
    //ques 19.....
    ques[18]="Which of the following are not standard header files in C? ";
    option[18][0]="stdio.h ";
    option[18][1]="stdlib.h ";
    option[18][2]="conio.h ";
    option[18][3]="none of the above ";
    correct[18]='4';
    //ques 20.....
    ques[19]="In which of the following languages is function overloading not possible? ";
    option[19][0]="C";
    option[19][1]="C++ ";
    option[19][2]="JAVA ";
    option[19][3]="Python ";
    correct[19]='1';
    //ques 21.....
    ques[20]="Which of the following are correct file opening modes in C? ";
    option[20][0]="r";
    option[20][1]="rb";
    option[20][2]="w";
    option[20][3]="all of the above";
    correct[20]='4';
    //ques 22.....
    ques[21]="How to find the length of an array in C ? ";
    option[21][0]="sizeof(a) ";
    option[21][1]="sizeof(a[0]) ";
    option[21][2]="sizeof(a)/sizeof(a[0]) ";
    option[21][3]="none of the above ";
    correct[21]='3';
    //ques 23.....
    ques[22]="Which of the following is not a storage class specifier in C? ";
    option[22][0]="volatile";
    option[22][1]="extern ";
    option[22][2]="auto";
    option[22][3]="static";
    correct[22]='1';
    //ques 24.....
    ques[23]="Which data structure is used to handle recursion in C? ";
    option[23][0]="Stack";
    option[23][1]="Queue";
    option[23][2]="Deque";
    option[23][3]="Trees";
    correct[23]='1';
    //ques 25.....
    ques[24]="Who is the father of C language? ";
    option[24][0]="Steve Jobs ";
    option[24][1]="James Gosling ";
    option[24][2]="Dennis Ritchie ";
    option[24][3]="Rasmus Lerdorf ";
    correct[24]='3';
 }
   else //India and its politics 
  {
//ques 1.........
 ques[0]="who was the first President of India ?";
 option[0][0]="Dr Rajendar Prasad";
 option[0][1]="APJ Abdul Kamal";
 option[0][2]="Mahatma Ghandi";
 option[0][3]="Jawaherlal Nehru";
 correct[0]='1';
 //ques 2 .....
 ques[1]=" who is known as the Father of indian constitution?";
 option[1][0]="Dr.BR Ambedkar ";
 option[1][1]="APJ Abdul kalam ";
 option[1][2]="DR. Rajendar prasad ";
 option[1][3]="Jawaherlal Nehru";
 correct[1]='1';
 //ques 3 .....
 ques[2]="Who Fouded Brahmusamaj? ";
 option[2][0]="Lala Raj Pat Rao";
 option[2][1]="Swami Vivekanand";
 option[2][2]="Sir Arbindo Gosh ";
 option[2][3]="Raja Ram Mohan Rao ";
 correct[2]='4';
 //ques 4 .....
 ques[3]="In which year India's Capital was shifted from kolkatta to Delhi? ";
 option[3][0]="1910 ";
 option[3][1]="1911 ";
 option[3][2]="1915 ";
 option[3][3]="1917 ";
 correct[3]='2';
 //ques 5 .....
 ques[4]="The President of India address his resignation letter to the ";
 option[4][0]="Speaker";
 option[4][1]="Vice President of India";
 option[4][2]="Chief Justice";
 option[4][3]="Prime Minister";
 correct[4]='2';
 //ques 6.....
 ques[5]="Who holds the record of winning Lok Sabha election with highest votes ";
 option[5][0]="Atal Bihari Vajpayee";
 option[5][1]="Anil Basu";
 option[5][2]="Indira Gandhi";
 option[5][3]="Khagen Das";
 correct[5]='2';
 //ques 7.....
 ques[6]="The Battle of Plassey was fought in? ";
 option[6][0]="1757 ";
 option[6][1]="1756 ";
 option[6][2]="1748";
 option[6][3]="1765 ";
 correct[6]='1';
 //ques 8.....
 ques[7]="The treaty of Srirangapatna was sighned between Tipu Sultan and";
 option[7][0]="Robert Clive ";
 option[7][1]="Corn Wallis ";
 option[7][2]="Dalhousie ";
 option[7][3]="Warren hastings ";
 correct[7]='2';
 //ques 9.....
 ques[8]="To which professions earlier leaders who struggled for freedom of India mainly belonged?";
 option[8][0]="Teachers ";
 option[8][1]="Journalists ";
 option[8][2]="Lawyers ";
 option[8][3]="All of the above";
 correct[8]='3';
 //ques 10.....
 ques[9]="When the first General Election held in India ?";
 option[9][0]="1950";
 option[9][1]="1955";
 option[9][2]="1952";
 option[9][3]="1951";
 correct[9]='4';
 //ques 11.....
 ques[10]="In Akbar's durbar, Todar Mal was associated with?";
 option[10][0]="Law";
 option[10][1]="Music";
 option[10][2]="Literature ";
 option[10][3]="Finance ";
 correct[10]='4';
 //ques 12.....
 ques[11]="In which year central information comission was established? ";
 option[11][0]="2002 ";
 option[11][1]="2005";
 option[11][2]="2009 ";
 option[11][3]="2008 ";
 correct[11]='2';
 //ques 13.....
 ques[12]="what is the strength of judges of supreme court at presant? ";
 option[12][0]="29 ";
 option[12][1]="23 ";
 option[12][2]="34 ";
 option[12][3]="35 ";
 correct[12]='3';
 //ques 14.....
 ques[13]="Who appointes the judges of supreme court? ";
 option[13][0]=" Chief Justice of India ";
 option[13][1]="President ";
 option[13][2]="Prime Minister ";
 option[13][3]="Council of Ministers ";
 correct[13]='2';
 //ques 15.....
 ques[14]="Pranavayu is a respiratory Healthy Awareness Programme launched in which Indian city? ";
 option[14][0]="New Delhi";
 option[14][1]="Bengaluru ";
 option[14][2]="Chennai ";
 option[14][3]="Hyderabad ";
 correct[14]='2';
 //ques 16.....
 ques[15]="ARISE-ANIC is an initiative launched by which Indian organization? ";
 option[15][0]="ISRO ";
 option[15][1]="NITI Aayog ";
 option[15][2]="DRDO";
 option[15][3]="Finance Ministry ";
 correct[15]='2';
 //ques 17.....
 ques[16]="which state government has launched the U-RISE portal?";
 option[16][0]="Andrapradesh ";
 option[16][1]="Bihar ";
 option[16][2]="Uttarakhand ";
 option[16][3]="UttarPradesh ";
 correct[16]='4';
 //ques 18.....
 ques[17]="Eat Right India is a flagship initiative of which organization? ";
 option[17][0]="FSSAI ";
 option[17][1]="WWF ";
 option[17][2]="FCI ";
 option[17][3]="BIS ";
 correct[17]='1';
 //ques 19.....
 ques[18]="Which organisation distributes Bee boxes under the Honey Mission scheme? ";
 option[18][0]="KVIC ";
 option[18][1]="NSIC ";
 option[18][2]="SIDBI "; option[18][3]="NABARD ";
 correct[18]='1';
//ques 20.....
 ques[19]="Which state has launched Aadhaar enrollment drive for students of the state? ";
 option[19][0]="Tamil Nadu ";
 option[19][1]="Bihar ";
 option[19][2]="Meghaliya ";
 option[19][3]="Assam ";
 correct[19]='4';
 //ques 21.....
ques[20]="MPLADS fund has been suspended till which year,due to Covid 19 Pandemic? ";
 option[20][0]="2021 ";
 option[20][1]="2022 ";
 option[20][2]="2023 ";
 option[20][3]="2024 ";
 correct[20]='2';
 //ques 22.....
 ques[21]="Which state has introduced the system of guarding Ministers? ";
 option[21][0]="Assam ";
 option[21][1]="Bihar ";
 option[21][2]="West Bengal ";
 option[21][3]="Gujrat ";
 correct[21]='1';
//ques 23.....
 ques[22]="Which state has launched the Agar wood policy 2021?";
 option[22][0]="Bihar";
 option[22][1]="Kerela";
 option[22][2]="Tripurs";
 option[22][3]="Gujrat";
 correct[22]='3';
 //ques 24.....
 ques[23]="Mission Bhumiputra is the initiative of which state? ";
 option[23][0]="Assam ";
 option[23][1]="Bihar ";
 option[23][2]="Orrisa ";
 option[23][3]="Kerela ";
 correct[23]='1';
 //ques 25.....
 ques[24]="Pradhan Mantri Jan Dhan Yojna (PMJDY) was introduced in which year? ";
 option[24][0]="2010 ";
 option[24][1]="2012 ";
 option[24][2]="2014 ";
 option[24][3]="2016 ";
 correct[24]='3';
  }
    // shuffling questions
    srand(time(0));
    for (i=0;i<25;i++)
    {
       j=(rand() % (25));
       sq=ques[i];
       sc=correct[i];
       for (k=0;k<4;k++)
       { suboption[k]= option[i][k] ;
         option[i][k]=option[j][k];
         option[j][k]=suboption[k];
       }
       ques[i]=ques[j];
       correct[i]=correct[j];
       ques[j]=sq;
       correct[j]=sc;
    }
    k=0;
    //  printing questions,taking answers and calculating score
   printf("\n\n\t######### STARTING YOUR QUIZ ##########\n\n");
   Sleep(1200);
   for (i=0;i<10;i++)
   {system("cls");
    Beep(300,500);
    system("color 1");
    error_count=0;
    repeat:
    printf("\nQUES%d : %s\n",i+1,ques[i]);  //printing questions
    Sleep(1000);
    printf ("\nyour options are ........\n\n");
    printf("ID  \t options \n");    // heading of the option table
    for( j=0; j<4;j++)     //printing options of the questions
    {
    printf("%d  |\t %s \n",j+1,option[k][j]);  // j represents the inner index of option
    }
   // taking input....
    printf("\nplz enter you answers' ID : ");
    system("color 03");
    scanf("  %c",&ans);
    Beep(600,800);
    Sleep(1200);
    system("cls");
    printf("\n _________________\n\n");
    printf("/ your answer = %c /",ans);
    printf("\n_________________\n\n");
    if ( ans<'5' && ans>'0' )
    { score = check(ans, correct, i, score);
    }
    else if (ans=='s' || ans=='S')
    {
        system("color 04");
        printf("####### you skip this answer ########\n\n");
        
    }
    else if (ans=='Q'|| ans =='q')
    {
        system("color 02");
        printf("\n############# you quit the quiz #############\n\n");
        i=9;
        score =0;
    }
    else if (ans=='r'|| ans=='R')
    {
         rules(i);
         goto repeat;
      

    }
    else
    { 
    system("color 06");
    printf("\ninvalid input .....\n");
    if(error_count<2)
    { error_count+=1;
      goto repeat;
    }
    else
    {
      system("color 06");
      printf("\nYou have enetered invalid input 2 times!!\nNo further attempts will be given for this question....\n\n");
      score = score -1;
     }
    }
    k++;  // k is use to represent the outer index of option array
    Sleep(1000);
    printf("Total score = %d\n\n",score);
    Beep(200,300);
    if (i==9)   // printing thanks after 10th ques
    {   Beep(400,600);
        Beep(800,600);
        Beep(400,600);
        Beep(800,600);
        printf("\n........... QUIZ COMPLETED SUCCESSFULLY ............\n\n");
       
    }
    else        // directing to next ques...
    { 
      printf("\n\nNEXT Question >> [PRESS \">\"]");
      getch();
      system("cls");
      printf("\n\nxxxxxxxxxxxxxxxxxxxx YOU ARE BEING DIRECTED TO  NEXT QUESTION  xxxxxxxxxxxxxxxxxxxxxx\n\n");
      Sleep(1000);
    }
   }
return 1;

}
// function to show rules
void rules(int i)
{  
    printf("\n\nRULES : \n\n 1. Correct Answer +3 \n 2. Incorrect Answer -2 \n 3. Two attempt is given in case of invalid input \n 4. If invalid input is given consecutively 3 times, score is deducted by 1 \n 5. Enter \"s\"to skip question , no deduction in score \n 6. Enter \"q\" to quit quiz , total score =0 \n 7. You can see rules by entering \"r\" instead of your answer \n");
    if (i>=0)
    {
    printf("\n\n please press enter to get back to your quiz.....");
    getch();
    }
    printf("\n\n");
}
// function to check ans
int check(char ans,char correct[11],int i, int score)
{
if (ans==correct[i])
{
    system("color 02");
    printf("correct answer..\n\n");
    score= score + 3;
}
else
{   system("color 04");
    printf("incorrect answer...\n\n");
    score=score-2;
    printf("The correct answer ID is %c\n\n",correct[i]);
}
return score;
}
// asking for topic of quiz
int topic()
{  system("color 02");
    int i;
    printf("\n\n\t\tTOPICS FOR YOUR QUIZ\n\n");
    printf(" ID\tTOPIC\n");
    printf(" 1. |\tTECHNOLOGY AND PROGRAMMING\n");
    printf(" 2. |\tINDIA AND ITS POLITCS\n\n");
    start:
    printf(" ENTER THE ID FOR YOUR CHOICE : ");
    scanf("%d",&i);
    printf("\a");
   if(i!=1 && i!=2)
   {   //to colour the background
       system("color 06");
    printf(" ..... INVALID CHOICE !! .....");
    goto start;
   }
    printf("\n\nNEXT PAGE >> [PRESS \">\"]");
    getch();
    system("cls");
    return i;
}
// printing welcome int the begining
void welcome(int len)
{int i=0;

printf("\n\n");
for(i=1;i<=len;i++)
{system("color 05");
w(len,i);
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
}

