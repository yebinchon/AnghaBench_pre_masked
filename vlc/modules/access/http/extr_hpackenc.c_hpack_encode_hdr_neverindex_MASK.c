
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (int *,size_t,char const*) ;
 size_t FUNC_1 (int *,size_t,char const*) ;

size_t FUNC_2(uint8_t *restrict VAR_0, size_t VAR_1,
                                   const char *VAR_2, const char *VAR_3)
{
    size_t VAR_4 = 1, VAR_5;

    if (VAR_1 > 0)
    {
        *(VAR_0++) = 0x10;
        VAR_1--;
    }

    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_1 >= VAR_5)
    {
        VAR_0 += VAR_5;
        VAR_1 -= VAR_5;
    }
    else
        VAR_1 = 0;
    VAR_4 += VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);
    if (VAR_1 >= VAR_5)
    {
        VAR_0 += VAR_5;
        VAR_1 -= VAR_5;
    }
    else
        VAR_1 = 0;
    VAR_4 += VAR_5;

    return VAR_4;
}
