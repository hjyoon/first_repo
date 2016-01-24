#include "custom.h"
// 받은 인자에 랜덤한 숫자 7개를 저장한다.
void Randomize_Number(int random[])
{
  int i=0;
  srand(time(NULL));
  
  for(i=0; i<7; i++) {
    random[i] = rand()%45+1;
  }
}
