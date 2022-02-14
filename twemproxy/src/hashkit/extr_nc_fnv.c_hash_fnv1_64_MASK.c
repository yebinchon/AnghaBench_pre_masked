
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

uint32_t
FUNC_0(const char *VAR_2, size_t VAR_3)
{
    uint64_t VAR_4 = VAR_0;
    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
      VAR_4 *= VAR_1;
      VAR_4 ^= (uint64_t)VAR_2[VAR_5];
    }

    return (uint32_t)VAR_4;
}
