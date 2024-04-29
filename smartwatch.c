#include<stdio.h>
#include<conio.h>
#include<time.h>
int n,no,ch,name,on,modes,sports,camera,music,pulse,heartrate,systolic,diastolic,bloodpressure,flashlight,alarm,brightness,power;
void main()
{
  int n,ch,modes,sports,camera,music,heartrate,bloodpressure,flashlight,alarm,brigthness,power;
  float pulse_duration,heart_rate;
  float systolic_pressure,diastolic_pressure,blood_pressure;
  char name[200];
  time_t t;
  time(&t);
  printf("\t\t\t****FASTTRACK****");
  printf("\n\tTime of the watch :\n%s\n",ctime(&t));
  printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
  printf("\n Touch any key to see modes :");
  scanf("%s",&ch);
  do
  {
   printf("\n1.Sports  2.heartrate\n3.bloodpressure  4.flashlight\n5.alarm  6.camera\n7.music\  8.brightness\n9.settings");
   printf("\n\nENTER UR CHOICE :");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
     printf("\n\tSPORTS");
     printf("\nwalking\tcycling\nswimming running\nskipping jumping\ndancing yoga\ncricket\tfootball\nworkout\ttraining\n");
     break;
    case 2:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\t\tHEARTRATE");
     printf("\nEnter the number of pulses in seconds: ");
     scanf("%f",&pulse_duration);
     heart_rate = 60.0/pulse_duration;
     printf("your heartrate is %.2f beats per minute\n",heart_rate);
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     break;
    case 3:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\n\t\tBLOODPRESSURE");
     printf("\nEnter systolic blood pressure: ");
     scanf("%f",&systolic_pressure);
     printf("\nEnter diastolic blood pressure: ");
     scanf("%f",&diastolic_pressure);
     blood_pressure=diastolic_pressure+(systolic_pressure-diastolic_pressure)/3;
     printf("\nyour Blood pressure:%.2fmmHg",blood_pressure);
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     break;
    case 4:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\n\t\tFLASHLIGHT");
     printf("\npress on :");
     scanf("%s",&name);
     printf("on\n");
     printf("to off flashlight type off:");
     scanf("%s",&name);
     printf("off\n");
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
    case 5:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\n\t\tALARM");
     printf("\nset the time :");
     scanf("%d",&n);
     printf("\n^^^^^^^alarm on^^^^^^^\n");
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     break;
    case 6:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\n\t\tCAMERA");
     printf("\ntype click to capture:");
     scanf("%s",&name);
     printf("\n^^^^pic captured^^^^\n");
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     break;
    case 7:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\t\tMUSIC");
     printf("\nclick the play button:");
     scanf("%s",&name);
     printf("\n\t!music is good!\n");
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     break;
    case 8:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\t\tBRIGHTNESS");
     printf("\n\tadjust the brightness\n");
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     break;
    case 9:
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     printf("\n\t\tSETTINGS");
     printf("\n\tpowerbutton phone reset");
     printf("\n\tringon      vibrate");
     printf("\n\twatchfaces  theatermode");
     printf("\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
     break;
   }
  }while(ch<10);
}
