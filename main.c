#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <Time.h>



void Newton(){
    int ans;
    float Fnet,mass,acc,W,g=9.81;
printf("\n");
printf("__________________Newtons Second Law__________________\n");
Sleep(3000);
printf("\n");
printf("Formula Sheet: Fnet=m.a W=m.g\n");
Sleep(3000);
printf("\n");
printf("Where:\n");
printf("Fnet = Total force applied to the object\n");
printf("a = acceleration\n");
printf("m = mass\n");
printf("g = Gravitational Force(9.81)\n");
printf("w = Weight\n");
printf("\n");
Sleep(5000);
printf("What would you like to calculate? Choose from the given list:\n");
Sleep(1000);
printf("1.Fnet \t\t 2.W \t\t 3.m \n");
printf("4.a    \t\t 5.g \t\t \n");
printf("________________________________________________________\n");
printf("\n");
scanf("%d",&ans);
while(1){
    printf("\n");
    if(ans==1){

    printf("Please enter the value of a: and m:\n");
    scanf("%f\n %f",&acc,&mass);
    printf("\n");
    Sleep(2000);
    Fnet=mass*acc;
    printf("Fnet=m.a\n");
    Sleep(1000);
    printf("Fnet=%f.%f \n",mass,acc);
    Sleep(1000);
    printf("Fnet=%f N\n",Fnet);
    break;

    }else if(ans==2){

     printf("Please enter the value of m: (g) is given\n");
    scanf("%f",&mass);
    printf("\n");
    Sleep(2000);
    W=mass*g;
    printf("W=m.g\n");
    Sleep(1000);
    printf("W=%f.%f \n",mass,g);
    Sleep(1000);
    printf("W=%f kg\n",W);
    break;
    }else if(ans==3){

    int asw;
    printf("How would you like to calculate your mass:\n");
    printf("1. m=Fnet/a\n");
    printf("2. m=W/g\n");
    Sleep(1000);
    scanf("%d",&asw);
    if(asw==1){

    printf("Please enter the value of Fnet and a:\n");
    scanf("%f \n %f",&Fnet,&acc);
    printf("\n");
    Sleep(2000);
    mass=Fnet/acc;
    printf("m=Fnet/a\n");
    Sleep(1000);
    printf("Fnet=%f/%f \n",Fnet,acc);
    Sleep(1000);
    printf("m=%f kg\n",mass);
        break;
    }else if(asw==2){

    printf("Please enter the value of W: (g) is given\n");
    scanf("%f ",&W);
    printf("\n");
    Sleep(2000);
    mass=W/g;
    printf("m=W/g\n");
    Sleep(1000);
    printf("m=%f/%f \n",W,g);
    Sleep(1000);
    printf("m=%f kg\n",mass);
    break;
    }else{
     printf("Enter the number within a given range(1/2)!!!");
    }

    }else if(ans==4){

    printf("Please enter the value of Fnet: and m:\n");
    scanf("%f\n %f ",&acc,&mass);
    printf("\n");
    Sleep(2000);
    Fnet=mass*acc;
    printf("a=Fnet/a\n");
    Sleep(1000);
    printf("a=%f/%f \n",Fnet,mass);
    Sleep(1000);
    printf("a=%f m.s^-1 \n",acc);
    break;

    }else if(ans==5){

    printf("g is constant, g=9.81N \n");
    break;
    }else{
     printf("Enter the number within a given range(1-5)!!!");
    }
}
}
void Ohms(){
    int ans,VO,RO;
    float Res,Int,Vol,Pwr;
    double VT;
printf("\n");
printf("_________________________Ohms Law_______________________\n");
Sleep(3000);
printf("\n");
    printf(" \t\t\t     ^ \n");
    printf(" \t\t\t    / \\  \n");
    printf(" \t\t\t   / V \\  \n");
    printf(" \t\t\t  /_____\\   \n");
    printf(" \t\t\t / R | I \\  \n");
    printf(" \t\t\t/____|____\\\n");
    printf("\n");
printf("Formula Sheet: V= IR R=V/I I=V/R P=V^2/R \n");
Sleep(3000);
printf("\n");
printf("Where:\n");
printf("V = Voltage in volts\n");
printf("R = Resistance in ohms\n");
printf("I = Current in amps\n");
printf("P = Power in Watts\n");
printf("\n");
Sleep(5000);
printf("What would you like to calculate? Choose from the given list:\n");
Sleep(1000);
printf("1.V \t\t 2.I \t\t 3.R \t\t 4.P \n");
printf("________________________________________________________\n");
printf("\n");
scanf("%d",&ans);
while(1){

    if(ans==1){
            Sleep(1000);
    printf("Please choose the method:\n");
    Sleep(1000);
    printf("1.V=R.I\n");
    printf("2.V^2=P/I\n");
    scanf("%d",&VO);
    if(VO==1){
    printf("\n");
    printf("Please enter the value of R: and I:\n");
    scanf("%f \n %f",&Res,&Int);
    printf("\n");
    Sleep(2000);
    Vol=Res*Int;
    printf("V=R.I\n");
    Sleep(1000);
    printf("V=%f.%f\n",Res,Int);
    Sleep(1000);
    printf("V=%f volts\n",Vol);
    break;

    }else if(VO==2){

    printf("Please enter the value of P: and R:\n");
    scanf("%f \n %f",&Pwr,&Res);
    printf("\n");
    Sleep(2000);
    Vol=Pwr/Res;
    VT=sqrt(Vol);
    printf("V=P/R\n");
    Sleep(1000);
    printf("V=%f/%f \n",Pwr,Res);
    Sleep(1000);
    printf("V=sqrt(%f) volts\n",Vol);
    printf("V=%f volts",VT);
    break;

    }else{

    printf("Enter the number within a given range(1/2)!!!");

    }


    }else if(ans==2){

    printf("Please enter the value of V: and R:\n");
    scanf("%f\n %f",&Vol,&Res);
    printf("\n");
    Sleep(2000);
    Int=Vol/Res;
    printf("I=V/R\n");
    Sleep(1000);
    printf("I=%f.%f \n",Vol,Res);
    Sleep(1000);
    printf("I=%f A\n",Int);
    break;

    }else if(ans==3){
        Sleep(1000);
    printf("Please choose the method:\n");
    Sleep(1000);
    printf("1.V=R.I\n");
    printf("2.V^2=P/R\n");
    scanf("%d",&RO);
    printf("\n");
    if(RO==1){

    printf("\n");
    printf("Please enter the value of V: and I:\n");
    scanf("%f\n %f",&Vol,&Int);
    printf("\n");
    Sleep(2000);
    Res=Vol/Int;
    printf("R=V/I\n");
    Sleep(1000);
    printf("R=%f/%f \n",Vol,Int);
    Sleep(1000);
    printf("R=%f ohms\n",Res);
    break;


    }else if(RO==2){

    printf("Please enter the value of P: and V:\n");
    scanf("%f\n %f",&Pwr,&Vol);
    printf("\n");
    Sleep(2000);
    Res=Pwr/(Vol*Vol);
    printf("R=P/V^2\n");
    Sleep(1000);
    printf("R=%f/(%f)^2 \n",Pwr,Vol);
    Sleep(1000);
    printf("R=%f ohms\n",Res);
    break;
    }else{

    printf("Enter the number within a given range(1/2)!!!");

    }

    }else if(ans==4){

    printf("Please enter the value of V: and R:\n");
    scanf("%f\n %f",&Vol,&Res);
    printf("\n");
    Sleep(2000);
    Pwr=(Vol*Vol)/Res;
    printf("P=V^2/R\n");
    Sleep(1000);
    printf("I=(%f)^2.%f \n",Vol,Res);
    Sleep(1000);
    printf("P=%f watts\n",Pwr);
    break;

    }else{

    printf("Enter the number within a given range(1-4)!!!");
    }

}

}


int main()
{
    int Law,and;
    printf("Hello world!\n");
    Sleep(2000);
    printf("\n");
    printf("This is Newton Second Law and Ohms law calculation Program \n");
    printf("_____________________________________________________________\n");
    printf("\n");
    Sleep(3000);
    printf("Please Choose the law you want to do your calculations with:\n");
    Sleep(2000);
    printf("1. Ohms\n");
    printf("2. Newton's Law\n");
    scanf("%d",&Law);
    printf("______________________________________________________________\n");
    while(1){
    if(Law==1){

       Ohms();
    break;
    }else if(Law==2){

        Newton();
    break;
    }else{
    printf("Enter the number within the given range (1/2)!!!\n");
    Sleep(3000);
    }

    }printf("\n");
    printf("_______________________________________________________________\n");
    printf("\n");
    printf("Would you like to do another calculations??\n");
    printf("1. Yes\n");
    printf("2. No\n");
    scanf("%d",&and);
    printf("_______________________________________________________________\n");
    while(1){
    if(and==1){

    printf("\n");
    printf("This is Newton Second Law and Ohms law calculation Program \n");
    printf("_____________________________________________________________\n");
    printf("\n");
    printf("Please Choose the law you want to do your calculations with:\n");
    Sleep(2000);
    printf("1. Ohms\n");
    printf("2. Newton's Law\n");
    scanf("%d",&Law);
    printf("______________________________________________________________\n");
    while(1){
    if(Law==1){

       Ohms();
    break;
    }else if(Law==2){

        Newton();
    break;
    }else{
    printf("Enter the number within the given range (1/2)!!!\n");
    Sleep(3000);
    }
    printf("\n");
    printf("_______________________________________________________________\n");
    printf("\n");
    printf("Would you like to do another calculations??\n");
    printf("1. Yes\n");
    printf("2. No\n");
    scanf("%d",&and);
    printf("_______________________________________________________________\n");

    }


    }else{
    printf("\n");
    printf("Thank You for using my program :)!!!\n");
    Sleep(3000);
    printf("Exiting....");
    printf("\n");
    break;
    }
    }
    return 0;

}
