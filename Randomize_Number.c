#include "custom.h"

void Randomize_Number(int randomNumber[])
{
  int i=0, k=0;
  int blank=0;

  srand(time(NULL));
  
  for(i=0; i<7; i++) {  //for1
    randomNumber[i] = rand()%45+1;

  	for(k=0; k<i; k++) {  //for1_1
  		if( randomNumber[i] == randomNumber[k]) {
  			i--;
  			break;
  		}
		if( randomNumber[i] < randomNumber[k] && k < 5) {
			blank = randomNumber[i];
			randomNumber[i] = randomNumber[k];
			randomNumber[k] = blank;
		}
  	}//end-for1_1
  }//end-for1
}
