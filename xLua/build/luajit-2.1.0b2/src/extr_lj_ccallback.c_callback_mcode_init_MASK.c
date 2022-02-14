
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int int32_t ;
typedef int global_State ;
typedef int MSize ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(global_State *VAR_13, uint8_t *VAR_14)
{
  uint8_t *VAR_15 = VAR_14;
  uint8_t *VAR_16 = (uint8_t *)(void *)VAR_12;
  MSize VAR_17;



  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {

    *VAR_15++ = VAR_8 | VAR_2; *VAR_15++ = (uint8_t)VAR_17;
    if ((VAR_17 & 31) == 31 || VAR_17 == VAR_0-1) {

      *VAR_15++ = VAR_9 + VAR_3;
      *VAR_15++ = VAR_8 | (VAR_2+4); *VAR_15++ = (uint8_t)(VAR_17 >> 8);




      *VAR_15++ = VAR_7 | VAR_3;
      *(int32_t *)VAR_15 = FUNC_0(VAR_13); VAR_15 += 4;







      *VAR_15++ = VAR_5; *(int32_t *)VAR_15 = VAR_16-(VAR_15+4); VAR_15 += 4;

    } else {
      *VAR_15++ = VAR_6; *VAR_15++ = (uint8_t)((2+2)*(31-(VAR_17&31)) - 2);
    }
  }
  FUNC_1(VAR_15 - VAR_14 <= VAR_1);
}
