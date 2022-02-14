
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int uint32_t ;


 int* VAR_0 ;

uint32_t
FUNC_0(const char *VAR_1, size_t VAR_2)
{
    uint64_t VAR_3;
    uint32_t VAR_4 = 0;

    for (VAR_3=0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = (VAR_4 << 8) ^ VAR_0[((VAR_4 >> 8) ^ *VAR_1++) & 0x00ff];
    }

    return VAR_4;
}
