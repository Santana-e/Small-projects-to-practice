#include <stdio.h>
#include <windows.h>
 
int count_alarm=0;
 
#define MILISECONDS_PER_SECONDS 1000//1 segundo; 1 seconds;
#define HOUR_ALARM 0
#define MINUTE_ALARM 1
 
/*Código aberto
By:Isenhart's*/
 
void limpar(){
    system("cls || clear");
}
 
void main(){
    int i,alarm[2],hours=0,minutes=0,seconds=0;
 
    printf("Hours: ");
    scanf(" %d",&hours);
    printf("Minutes: ");
    scanf(" %d",&minutes);
 
    printf("Alarm?\n 1-Yes 2-No\n");
    scanf(" %d",&i);
    i==1?printf("Hour alarm: ")&&
    scanf(" %d",&alarm[HOUR_ALARM])&&
    printf("Minute Alarm: ")&&
    scanf(" %d",&alarm[MINUTE_ALARM])
                                                          :printf("Ok.");
 
    limpar();
 
    if(hours>24)hours-=24;
 
    do{
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     %d:%d:%d",hours,minutes,seconds);
        Sleep(MILISECONDS_PER_SECONDS);
        limpar();
        seconds++;
        if(hours==alarm[HOUR_ALARM] && minutes==alarm[MINUTE_ALARM] && count_alarm!=500){
            for(i=0;i<500;i++,count_alarm++){
                Beep(1000,150);
            }
        }
        if(seconds==60){
            seconds=0;
            minutes+=1;
        }
        if(minutes==60){
            minutes=0;
            hours+=1;
        }
        if(hours>23 || hours>=24){
            hours=0;
            if(hours>24)hours-=24;
        }
    }while(1);
 
 
}
