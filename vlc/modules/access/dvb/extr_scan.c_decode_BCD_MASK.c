
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0( uint32_t VAR_0 )
{
    uint32_t VAR_1 = 0;
    for( short VAR_2=28; VAR_2 >= 0 ; VAR_2 -= 4 )
    {
        VAR_1 *= 10;
        VAR_1 += ((VAR_0 >> VAR_2) & 0x0f);
    };
    return VAR_1;
}
