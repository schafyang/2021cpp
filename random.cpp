#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */

int main(){

////////////**random 1**////////////////////
  /* 基本亂數產生方法 */
  /* 固定亂數種子 */
  srand( time(NULL) );

  /* 產生亂數 */
  int x1 = rand();

  std::cout << "x1 = " << x1 << std::endl;

////////////**random 2**///////////////////
  /* 固定亂數種子 */
  srand(5);

  int x2 = rand();
  printf("x2 = %d\n", x2);

////////////**random 3**///////////////////
  srand( time(NULL) );

  /* [0, 1) 浮點數亂數 */
  /* 產生 [0, 1) 的浮點數亂數 */
  double x3 = (double) rand() / (RAND_MAX + 1.0);

  printf("x3 = %f\n", x3);

////////////**random 4**///////////////////
  srand( time(NULL) );

  /* 特定範圍浮點數亂數 */
  /* 指定亂數範圍 */
  double min1 = 3.6;
  double max1 = 7.8;

  /* 產生 [min , max) 的浮點數亂數 */
  double x4 = (max1 - min1) * rand() / (RAND_MAX + 1.0) + min1;

  printf("x4 = %f\n", x4);

////////////**random 5**///////////////////
  srand( time(NULL) );

  /* 特定範圍整數亂數 */
  /* 指定亂數範圍 */
  int min2 = 4;
  int max2 = 10;

  /* 產生 [min , max] 的整數亂數 */
  int x5 = rand() % (max2 - min2 + 1) + min2;

  printf("x5 = %d\n", x5);
  return 0;
}
