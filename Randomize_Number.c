#include "custom.h"
// 받은 인자에 랜덤한 숫자 7개를 저장한다.
void Randomize_Number(int random[])
{
  int i=0, k=0;

  srand(time(NULL));
  
  for(i=0; i<7; i++) {  //for1
    randomNumber[i] = rand()%45+1;

  	for(k=0; k<i; k++) {  //for1_1
  		if( randomNumber[i] == randomNumber[k]) {
  			i--;
  			break;
  		}
  	}//end-for1_1
  }//end-for1
}
