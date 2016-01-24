#include "custom.h"

int Compare_Number(int inputNumber[], int randomNumber[]){
  int number=sizeof(inputNumber)/4 //inputNumber입력개수
  int i,cnt=0;
  
  for(i=0;i<number-1;i++){
    if(inputNumber[i]==randomNumber[i]){
      cnt++;
    }
  }
  if(cnt==6 && (inputNumber[number]!=randomNumber[number])){return 1}   //1등일때
  else if(cnt==5 && (inputNumber[number]==randomNumber[number])){return 2} //2등일때
}
