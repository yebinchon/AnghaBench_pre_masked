
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uintmax_t ;
typedef unsigned int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(uint8_t *restrict VAR_0, size_t VAR_1,
                               uintmax_t VAR_2, unsigned VAR_3)
{
    FUNC_0(VAR_3 >= 1 && VAR_3 <= 8);

    unsigned VAR_4 = (1 << VAR_3) - 1;
    size_t VAR_5 = 1;

    if (VAR_2 < VAR_4)
    {
        if (VAR_1 > 0)
            VAR_0[0] |= VAR_2;
        return 1;
    }

    if (VAR_1 > 0)
       *(VAR_0++) |= VAR_4;
    VAR_2 -= VAR_4;

    while (VAR_2 >= 128)
    {
        if (VAR_5++ < VAR_1)
            *(VAR_0++) = 0x80 | (VAR_2 & 0x7F);
        VAR_2 >>= 7;
    }

    if (VAR_5++ < VAR_1)
        *(VAR_0++) = VAR_2;
    return VAR_5;
}
