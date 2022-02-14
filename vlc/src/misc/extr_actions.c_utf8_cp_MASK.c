
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;



__attribute__((used)) static char *FUNC_0 (uint_fast32_t VAR_0, char *VAR_1)
{
    if (VAR_0 < (1 << 7))
    {
        VAR_1[1] = 0;
        VAR_1[0] = VAR_0;
    }
    else if (VAR_0 < (1 << 11))
    {
        VAR_1[2] = 0;
        VAR_1[1] = 0x80 | (VAR_0 & 0x3F);
        VAR_0 >>= 6;
        VAR_1[0] = 0xC0 | VAR_0;
    }
    else if (VAR_0 < (1 << 16))
    {
        VAR_1[3] = 0;
        VAR_1[2] = 0x80 | (VAR_0 & 0x3F);
        VAR_0 >>= 6;
        VAR_1[1] = 0x80 | (VAR_0 & 0x3F);
        VAR_0 >>= 6;
        VAR_1[0] = 0xE0 | VAR_0;
    }
    else if (VAR_0 < (1 << 21))
    {
        VAR_1[4] = 0;
        VAR_1[3] = 0x80 | (VAR_0 & 0x3F);
        VAR_0 >>= 6;
        VAR_1[2] = 0x80 | (VAR_0 & 0x3F);
        VAR_0 >>= 6;
        VAR_1[1] = 0x80 | (VAR_0 & 0x3F);
        VAR_0 >>= 6;
        VAR_1[0] = 0xE0 | VAR_0;
    }
    else
        return ((void*)0);
    return VAR_1;
}
