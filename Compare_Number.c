#include "custom.h"

int Compare_Number(int inputNumber[], int randomNumber[]){
  int number=6;
  int i,j,cnt=0;
  
  for(i=0;i<number;i++){
    for(j=0;j<number;j++){
      if(inputNumber[i]==randomNumber[j]){
      cnt++;
      }
    }
  }
  if(cnt==6 && (inputNumber[number]!=randomNumber[number])){return 1;} 
  else if(cnt==5 && (inputNumber[number]==randomNumber[number])){return 2;} 
  else if(cnt==5 && (inputNumber[number]!=randomNumber[number])){return 3;}
  else if(cnt==4 && (inputNumber[number]!=randomNumber[number])){return 4;}
  else if(cnt==3 && (inputNumber[number]!=randomNumber[number])){return 5;}
  return 6;
}
