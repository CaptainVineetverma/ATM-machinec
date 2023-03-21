//ATM 
#include<stdio.h>
#include<conio.h>
int main()
{
int PIN,G,choice,OTP,rem,amount,div,a,b,c,d,num;
long long int moblie;
printf("\n\n\t\t\t\tWELCOME CAPTAIN BANK ");
//char v =32;
//scanf("%c,&v");
getch();
printf("\n\n\nEnter the last four Digit Numbers\n\n\t\t\t\tXXXX XXXX ");
scanf("%d",&num);
if(num>999&&num<=9999)
{

printf("\n\n1.Enter the PIN\t\t\t\t\t 2.Generate the PIN");
printf("\n\n\t\t\t\tEnter your choice\t____");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n\t\t\t\tEnter the your PIN 4 digit \t\t");
scanf("%d",&PIN);
if(PIN>999&&PIN<=9999)
{
printf("\n\n\t\t\t\tPIN successfully");
printf("\n\n\n1.Cash the withdraw\t\t\t2.change the PIN\t\t\t 3.balance inquri");
printf("\n\n\t\t\t\tEnter the choice\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf(" \n\n\t\t\t\tEnter the amount");
scanf("%d",&amount);
if(amount>=4000000)
{
printf("\n\n\t\t\t\t Sorry!Check the Your Balance");
printf("\n\n\t\t\t\t ");
break ;
}
else
{

div=amount/2000;
printf("\n 2000 is notes %d = %d",div,a=div*2000);
rem=amount%2000;

div=rem/500;
printf("\n 500 is notes %d = %d",div,b=div*500);
rem=rem%500;

div=rem/200;
printf("\n 200 is notes %d = %d",div,c=div*200);
rem=rem%200;

div=rem/100;
printf("\n 100 is notes %d = %d",div,d=div*100);

printf("\n\n\t\t\t\t Total Amount Debit = %d",a+b+c+d);
break ;
}
case 2:
printf("\nEnter the your New PIN\t");
scanf("%d",&PIN);
printf(" \n\n\tEnter the confirm PIN\t");
scanf("%d",&PIN);
if(PIN>999&&PIN<=9999)
printf("\n\n\t\t\t\tSucessfully change your PIN");
else
printf("\n\n\t\t\t\tThis PIN is the wrong. so please! Correct the PIN ");
break;

case 3:
printf("\n\n\t\t\t\tYour balance is 4000000 rupees*");
break ;
}
break ;

case 2:
	int PIN1,PIN2,account;
printf("\n\nEnter the Eleven ( 11 ) Digits  Your Account Numbers :--");
scanf("%d",&account);
printf("\nEnter the your New PIN\t");
scanf("%d",&PIN1);
printf("\n\nEnter the comfirm PIN\t");
scanf("%d",&PIN2);
if(PIN1!=PIN2)
printf("\n\n\t\t\t\tBoth PIN are not same");
else  

PIN=PIN1;

if(PIN>999&&PIN<=9999)
{
printf("\n\nEnter the your moblie numbers :  +91 ");
scanf("%lld",&moblie);
if(moblie>999999999 && moblie<=9999999999)
{
printf("\nyou are comfirm moblies numbers : +91%lld",moblie);
printf("\n\n1.YES \t\t\t\t\t 20.NO");
printf("\n\nEnter the your choice");
scanf("%d",&choice);
switch(choice)

case 1:
//printf("\n\n\t\t\t\tSorry errors ");

break ;

case 20:
	
printf("\n\nSending the OTP this Moblie Numbers:  +91%lld ",moblie);	
printf("\n\n\nEnter the OTP 6 digits\t");
scanf("%d",&OTP);
if(OTP>99999&&OTP<=999999)
{
printf("\n\n\t\t\t\tYour OTP sucessfully");
getch ();
printf("\n\n\n\t\t\t\tYour Generate PIN sucessfullY");
}
else
printf("\n\n\t\t\t\tOTP is Wrong. please! Correct the OTP");
}
else

printf("\n\t\t\t\t Your moblie numbers is wrong ");

}
else 
{
printf("\n\n\t\t\t\tYour PIN is worng. please ! Correct the PIN");
}
break;}
break ;


default :
	printf("\n\n\t\t\t\tInvalid choice");
}
} 
else
{
	printf("\n\n\t\t\tYour ATM Numbers is Wrongs");
}
return 0;
 }

