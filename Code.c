
#include<stdio.h> 
#include<stdlib.h>
void main()
{
int cutoff = 30;
int m,r;
printf("** WELCOME TO COLLEGE PREDICTOR***\n");
printf("enter your marks\n");
scanf("%d", &m);
if(m>cutoff)
{
printf("enter your rank\n");
scanf("%d", &r);
printf("**Predicted colleges and courses are"\n");
if ( r < 1000)
{
printf("MGIT\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4) ELECTRICAL\n"); 
printf("JNTUH\n1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n"); 
printf("OU\n 1)CSE(AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else if (r>=1000 && r<5000)
{
printf("KMIT\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n"); 
printf("GRIETIN 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4) ELECTRICAL\n"); 
}
else if (r>=5000 && r<20000)
{
printf("SRYS\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
printf("VJIT\n 1)CSE (AI&ML) 2) MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else if (r>=20000 &&r<50000)
{
printf("GRYS\n 1)CSE(AI&ML) 2)MECHANICAL 3)CIVIL 4) ELECTRICAL\n"); 
printf("TNR\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else if(r>=50000 && r<100000)
{
printf("HIMT\n 1)CSE(AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n"); 
printf("GJTY\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else
printf("not qualified\n");
}
