#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;

      printf("Select options from Menu:\n");
      printf("1.Pressure Converter\n2.Currency Converter\n3.Temperature Converter\n4.Time Converter\n5.Area Converter\n6.Weight Converter\n7.Mileage Converter\n8.Power Converter\n9.Fuel Converter\n10.Volume Converter\n");
    printf("Enter your choice");
    scanf("%d",&n);
    void pressure();
    void currency();
    void temperature();
    void area();
    void weight();
    void mileage();
    void power();
    void fuel();
    void volume();

   switch(n){
   case 1:
      pressure();
      break;
   case 2:
   currency();
    break;
     case 3:
   temperature();
    break;
         case 4:
   time();
    break;
         case 5:
   area();
    break;
      case 6:
   weight();
    break;
       case 7:
   mileage();
    break;
    case 8:
   power();
    break;
        case 9:
   fuel();
    break;
      case 10:
   volume();
    break;

   default:
    printf("invalid selection");
   }

}
void pressure(){
        int pascal;
        float bar;
        float torr;
        int atm;
 printf(" Calculating Pressure:-\n");
  printf("Input for pascal:\n");
 scanf("%d",&pascal);
  printf("pascal:\n");
printf("%d\n",pascal);
bar=pascal/100000;
 printf("bar:\n");
 printf("%f",bar);
 printf("%d\n",pascal);
torr=pascal/0.0075;
 printf("torr:\n");
 printf("%f\n",torr);
 atm=pascal*1.0135*100000;
 printf("atm:\n");
 printf("%d\n",atm);
}

void currency(){
    int INR;
    float Dollar;
    float Euro;
    float British_Pound;
  printf("Calculating Currency:-\n");
    printf("Input for INR:\n");
  scanf("%d",&INR);
       Dollar=INR*0.14636;
 printf("dollar\n");
 printf("%f\n",Dollar);
 Euro=INR*0.12551;
 printf("Euro:\n");
 printf("%f\n",Euro);
 British_Pound=INR*0.1115;
 printf("British_Pound:\n");
 printf("%f\n",British_Pound);
}

void temperature(){
    int Fahrenheit;
    float Celsius;
    float Kelvin;
      printf("Calculating Temperature:-\n");
      printf("Input for Fahrenheit:");
       scanf("%d",&Fahrenheit);
Celsius=((Fahrenheit-32)*5)/9;
 printf("Celsius\n");
 printf("%f\n",Celsius);
Kelvin=Celsius+273.15;
printf("Kelvin\n");
 printf("%f\n",Kelvin);

}

void time(){
    int hour;
    int min;
    int sec;
    printf("Calculating Time:-\n");
      printf("Input for hour");
       scanf("%d",&hour);
       min=hour*60;
 printf("min\n");
 printf("%d\n",min);
 sec=min*60*60;
 printf("Second\n");
 printf("%d\n",sec);
}

void area(){
    float acre;
    float hectare;
    float sq_foot;
    int sq_m;
        printf("Calculating Area:-\n");
      printf("Input for area in square meter");
       scanf("%d",&sq_m);
              acre=4046.86*sq_m;
 printf("acre\n");
 printf("%f\n",acre);
   sq_foot=10.7639/sq_m;
 printf("square foot\n");
 printf("%f\n",sq_foot);
   hectare=0.0001/sq_m;
 printf("hectare\n");
 printf("%f\n",hectare);
}

void weight(){
    int kg;
    float pounds;
    float ounces;
    float stones;
     printf("Calculating Weight:-\n");
      printf("Input for weight in Kg");
       scanf("%d",&kg);
        pounds=kg*2.2046;
 printf("Pounds\n");
 printf("%f\n",pounds);
 pounds=kg*2.2046;
 printf("Stone\n");
 printf("%f\n",stones);
 ounces=kg*1000*0.035274;
 printf("Ounces\n");
 printf("%f\n",ounces);
}

void mileage(){
    int miles;
    float km;
    float inches;
    float yards;
    printf("Calculating Mileage:-\n");
      printf("Input for mileage:");
       scanf("%d",&miles);
        km=miles/0.62137;
 printf("Kilometer\n");
 printf("%d\n",km);
inches=miles*63360;
 printf("Inches\n");
 printf("%f\n",inches);
 yards=miles*1760;
 printf("yards\n");
 printf("%f\n",yards);

}

void power(){
    int joule;
    int time;
    float watt;
    float calorie;
        printf("Calculating Power:-\n");
      printf("Input for Power in joule:");
       scanf("%d",&joule);
        printf("Input for Time in second:");
       scanf("%d",&time);
         watt=joule/time;
 printf("Watt\n");
 printf("%f\n",watt);
 calorie=joule/0.000239006;
 printf("Watt\n");
 printf("%f\n",calorie);
}

void fuel(){
    int kmpl;
    int mpl;
    float mpg;
     printf("Calculating Fuel consumption:-\n");
      printf("Input for fuel :");
       scanf("%d",&kmpl);//kilometer per liter
            mpl=kmpl*1000;//meter per liter
 printf("MeterperLiter\n");
 printf("%d\n",mpl);
    mpg=kmpl/2.824;
 printf("Meter perGallon\n");
 printf("%f\n",mpg);
}

void volume(){
    int cmm3;
    float mm3;
    float cc;
         printf("Calculating Volume:-\n");
      printf("Input for cm per cubic meter :");
       scanf("%d",&cmm3);
                   mm3=cmm3/0.001;
 printf("Meter perCube\n");
 printf("%f\n",mm3);
   cc=mm3/0.001;
 printf("Cubic Centimeter\n");
 printf("%f\n",cc);

}
