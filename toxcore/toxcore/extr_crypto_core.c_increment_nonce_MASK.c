
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast16_t ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

void FUNC_0(uint8_t *VAR_1)
{






    uint32_t VAR_2 = VAR_0;
    uint_fast16_t VAR_3 = 1U;

    for (; VAR_2 != 0; --VAR_2) {
        VAR_3 += (uint_fast16_t) VAR_1[VAR_2 - 1];
        VAR_1[VAR_2 - 1] = (uint8_t) VAR_3;
        VAR_3 >>= 8;
    }
}
