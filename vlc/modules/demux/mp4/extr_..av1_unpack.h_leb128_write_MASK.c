
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline void FUNC_0(uint32_t VAR_0, uint8_t *VAR_1)
{
    for(;;)
    {
        *VAR_1 = VAR_0 & 0x7F;
        VAR_0 >>= 7;
        if(VAR_0 == 0)
            break;
        *VAR_1++ |= 0x80;
    }
}
