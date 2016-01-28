#include "ride.h"

int N=0;

int main(void)
{
	char time[50][8];	//[50]ride num, starttime [][0~3], endtiem[][4~7];
						//ex) ● 놀이기구 1 : 오전 10시 30분 ~ 오후 1시
						//	  ● 놀이기구 2 : 오후 7시 00분 ~ 오후 9시 10분
						//    ● 놀이기구 3 : 오후 12시 30분 ~ 오후 4시 50분
						//ride1 = time[0][0~7] = {0},{1, 0, 3, 0, 1, 3, 0, 0};
						//ride2 = time[1][0~7] = {1},{0, 7, 0, 0, 2, 1, 1, 0};
						//ride3 = time[2][0~7] = {2},{1, 2, 3, 0, 1, 6, 5, 0};
	int lovetime; 

	scan_lovetime(time[][]);
	lovetime = how_lovetime(time[][]);
	printf("%d\n", lovetime);

	return 0;
}
