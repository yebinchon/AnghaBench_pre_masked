
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

uint32_t FUNC_2(
const uint32_t *VAR_0,
size_t VAR_1,
uint32_t VAR_2)
{
  uint32_t VAR_3,VAR_4,VAR_5;


  VAR_3 = VAR_4 = VAR_5 = 0xdeadbeef + (((uint32_t)VAR_1)<<2) + VAR_2;


  while (VAR_1 > 3)
  {
    VAR_3 += VAR_0[0];
    VAR_4 += VAR_0[1];
    VAR_5 += VAR_0[2];
    FUNC_1(VAR_3,VAR_4,VAR_5);
    VAR_1 -= 3;
    VAR_0 += 3;
  }


  switch(VAR_1)
  {
  case 3 : VAR_5+=VAR_0[2];
  case 2 : VAR_4+=VAR_0[1];
  case 1 : VAR_3+=VAR_0[0];
    FUNC_0(VAR_3,VAR_4,VAR_5);
  case 0:
    break;
  }

  return VAR_5;
}
