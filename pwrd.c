#include <stdio.h>
#include <conio.h>

void main(){
  char pwd[5];
  int i;
  clrscr();
  printf("enter password:");
  for(i=0;i<4;i++){
    pwd[i] = getch();
    printf("*");
  }
  pwd[i] = '\0';
  printf("/n password verfication under process. please wait...");
  delay(4000);
  
  
  getch();
  
 

}
  
  
