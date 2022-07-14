#include <stdio.h>
#include <stdlib.h>

int main()
{

char name[100];
 int KRApin,empno,Normalpay,Overtimepay,Tax,Net,numberofhourswrkd;
  int totalnumberofhourswrk = 40;

 printf("t\GITONGA FACTORY PAYROL!\n");
 printf("Enter Employees name\n");
 scanf("%c", &name);

 printf("Enter Employment Number\n");
 scanf("%s", &empno);

 printf("Enter KRA pin\n");
 scanf("%s", &KRApin);

 printf("Enter number of hours worked\n");
 scanf("%s", & totalnumberofhourswrk);



    Normalpay = 1000 * totalnumberofhourswrk;
    Tax = 30* Normalpay/100;
    Net = (Normalpay - Tax) + Overtimepay;




     Overtimepay = (numberofhourswrkd - totalnumberofhourswrk) * 1500;
     Tax = 30*Normalpay/100;
     Net =(Normalpay * 1500) - Tax;


 printf("The Normalpay %d\n", Normalpay);
 printf(" Overtimepay %d\n", Overtimepay);
 printf("Tax %d\n", Tax);
 printf("The Net %d\n", Net);
 }
