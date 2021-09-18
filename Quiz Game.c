#include<stdio.h>
void score(int c)
{
    if(c==5)
    {
        c=c*2;
        printf("Your total score  is %d",c);
        printf("\nKeep going \n");
    }
    else if(c==4)
    {
        c=c*2;
        printf("Your total score  is %d",c);
        printf("\nKeep going \n");
    }
    else if(c==3)
    {
        c=c*2;
        printf("Your total score is %d",c);
        printf("\nKeep going \n");
    }
    else if(c==2)
    {
        c=c*2;
        printf("Your total score is %d",c);
        printf("\nKeep going \n");
    }
    else if(c==1)
    {
        c=c*2;
        printf("Your total score is %d",c);
        printf("\nKeep going \n");
    }
    else 
    {
        c=c*2;
        printf("Your total score is %d",c);
        printf("\nBetter luck next time \n");
    }
}
void Science()
{
    int n,c=0;
    printf("Q1.Who is the father of modern science\n");/////Question 1
    printf("1.Albert Einstein\n2.Isaac Newton\n3.Thomas Edison\n4.Galileo Galilei\n");
    scanf("%d",&n);
    if(n==4)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 4.Galileo Galilei\n");
        c--;
    }
    printf("Q2.The first woman scientist in the world\n");/////Question 2
    printf("1.Marie Curie\n2.Chien-Shiung Wu\n3.Janaki Amma\n4.Tessy Thomas\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 1.Marie Curie\n");
        c--;
    }
    printf("Q3.Which of the following is not a member of the vitamin B complex?\n");/////Question 3
    printf("1.Thiamine\n2.Riboflavin\n3.Folic acid\n4.Ascorbic acid\n");
    scanf("%d",&n);
    if(n==4)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 4.Ascorbic acid\n");
        c--;
    }
    printf("Q4.Fungi are plants that lack:\n");/////Question 4
    printf("1.Oxygen\n2.Carbon dioxide\n3.Chlorophyll\n4.None of these\n");
    scanf("%d",&n);
    if(n==3)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 3.Chlorophyll\n");
        c--;
    }
    printf("Q5.Name the salt when on dissolving in water give an acidic solution?\n");/////Question 5
    printf("1.Potassium Chloride\n2.Ammonium Chloride\n3,Sodium Carbonate\n4.Sodium Acetate\n");
    scanf("%d",&n);
    if(n==2)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 2.Ammonium Chloride\n");
        c--;
    }
    score(c);
}
void Technology()
{
    int n,c=0;
    printf("Q1.What is part of a database that holds only one type of information?\n");/////Question 1
    printf("1.Report\n2.Field\n3.Record\n4.File\n");
    scanf("%d",&n);
    if(n==2)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 2.Field\n");
        c--;
    }
    printf("Q2.'OS' computer abbreviation usually means ?\n");/////Question 2
    printf("1.Order of Significance\n2.Open Software\n3.Operating System\n4.Optical Sensor\n");
    scanf("%d",&n);
    if(n==3)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 3.Operating System\n");
        c--;
    }
    printf("Q3.Which consists of two plates separated by a dielectric and can store a charge?\n");/////Question 3
    printf("1.Inductor\n2.Capacitor\n3.Transistor\n4.Relay\n");
    scanf("%d",&n);
    if(n==2)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 2.Capacitor\n");
        c--;
    }
    score(c);
}
void Indian_Politics()
{
    int n,c=0;
    printf("Q1.The members of the Rajya Sabha are elected by elected?\n");/////Question 1
    printf("1.members of the Legislative Assembly\n2.members of Lok Sabha\n3.members of Rajya Sabha\n4.members of Supreme court\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 1.members of the Legislative Assembly\n");
        c--;
    }
    printf("Q2.Who was the first Indian Women President of the United Nations General Assembly\n");/////Question 2
    printf("1.Lata Devi\n2.Indira Gandhi\n3.Vijay Lakshmi Pandit\n4.Sarojini Devi\n");
    scanf("%d",&n);
    if(n==3)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 3.Vijay Lakshmi Pandit\n");
        c--;
    }
    printf("Q3.Who was the first speaker of the Lok Sabha\n");/////Question 3
    printf("1. Ram Prasad Bismil\n2.Narayan Vasudev \n3.Pandit Nehru\n4.Ganesh Vasudev Mavlankar\n");
    scanf("%d",&n);
    if(n==4)
    {
       printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 4.Ganesh Vasudev Mavlankar\n");
        c--;
    }
    printf("Q4.Union Budget is always presented first in?\n");/////Question 4
    printf("1.Rajya Sabha\n2.Supreme Court\n3.Lok Sabha\n4.Vidhan Sabha \n");
    scanf("%d",&n);
    if(n==3)
    {
       printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 3.Lok Sabha\n");
        c--;
    }
    printf("Q5.Which state has the highest number of representative in both the houses.?\n");/////Question 5
    printf("1.Uttar Pradesh\n2.Rajasthan\n3.Madhya Pradesh\n4.Gujrat\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 1.Uttar Pradesh\n");
        c--;
    }
    score(c);
}
void Sport()
{
    int n,c=0;
    printf("Q1.Major Dhyanchand’s birthday is celebrated as National Sports Day in India, on which among the following dates?\n");/////Question 1
    printf("1.August 29th\n2.July 29tha\n3.March 29th\n4.April 29th\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 1.August 29th\n");
        c--;
    }
    printf("Q2.Who among the following was the first Indian to win an Olympic medal ?\n");/////Question 2
    printf("1.P T Usha\n2.Abhinav Bindra\n3.Dhyan Chand\n4.K D Jadhav\n");
    scanf("%d",&n);
    if(n==2)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correct Option is 2.Abhinav Bindra\n");
        c--;
    }
    printf("Q3.When did the World Chess Championship begin officially?\n");/////Question 3
    printf("1.1946\n2.1886\n3.1925\n4.1899\n");
    scanf("%d",&n);
    if(n==2)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 2.1886\n");
        c--;
    }
    printf("Q4.How many chapters are there in the Olympic Charter?\n");/////Question 4
    printf("1.5\n2.6\n3.7\n4.8\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 1.5\n");
        c--;
    }
    printf("Q5.How many nations had participated in the first Olympic Games held in 1896?\n");/////Question 5
    printf("1.20\n2.36n\n3.14\n4.63\n");
    scanf("%d",&n);
    if(n==3)
    {
        printf("Correct\nYou got 2 points\n");
        c++;
    }
    else
    {
        printf("Correc Option is 3.14\n");
        c--;
    }
    score(c);
}
int main()
{
    int n,a=1;
    printf("\t\tWelcome To my Quiz Game\n");
    while(a!=0)
    {
        printf("Here you get 5 question from each sectionselect one to play the quiz\nWhich one you want\n");
        printf("All The Best\n");
        printf("1.Science\n2.Technology\n3.Indian_Politics\n4.Sports\n");
        scanf("%d",&n);
        switch(n)
            {
            case 1:Science();
            break;
            case 2:Technology();
            break;
            case 3:Indian_Politics();
            break;
            case 4:Sport();
            break;
            default:printf("Enter the vaild option please\n");
        }
        printf("Want to continue the game\npress 1 or else 0\n");
        scanf("%d",&a);
    }
}
