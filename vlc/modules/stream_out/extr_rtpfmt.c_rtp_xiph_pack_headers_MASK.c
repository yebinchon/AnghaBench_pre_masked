
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (size_t) ;
 int FUNC_1 (int*,void const*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int*,void const**,unsigned int*,size_t,void*) ;

__attribute__((used)) static int FUNC_3(size_t VAR_4, void *VAR_5, size_t VAR_6,
                                 uint8_t **VAR_7, size_t *VAR_8,
                                 uint8_t *VAR_9)
{
    unsigned VAR_10[VAR_3];
    const void *VAR_11[VAR_3];
    unsigned VAR_12;

    if (FUNC_2(VAR_10, VAR_11, &VAR_12,
                                VAR_6, VAR_5))
        return VAR_0;;
    if (VAR_12 < 3)
        return VAR_0;;

    if (VAR_9 != ((void*)0))
    {
        if (VAR_10[0] < 42)
            return VAR_0;
        *VAR_9 = (((const uint8_t *)VAR_11[0])[41] >> 3) & 0x03;
    }

    unsigned VAR_13[2] = { 0, 0 };
    for (int VAR_14 = 0; VAR_14 < 2; VAR_14++)
    {
        unsigned VAR_15 = VAR_10[VAR_14];
        while (VAR_15 > 0)
        {
            VAR_13[VAR_14]++;
            VAR_15 >>= 7;
        }
    }

    *VAR_8 = VAR_4 + 1 + VAR_13[0] + VAR_13[1]
                + VAR_10[0] + VAR_10[1] + VAR_10[2];
    *VAR_7 = FUNC_0(*VAR_8);
    if (*VAR_7 == ((void*)0))
        return VAR_1;

    uint8_t *VAR_16 = *VAR_7 + VAR_4;

    *VAR_16++ = 2;

    for (int VAR_17 = 0; VAR_17 < 2; VAR_17++)
    {
        unsigned VAR_18 = VAR_13[VAR_17];
        while (VAR_18 > 0)
        {
            *VAR_16 = (VAR_10[VAR_17] >> (7 * (VAR_18 - 1))) & 0x7f;
            if (--VAR_18 > 0)
                *VAR_16 |= 0x80;
            VAR_16++;
        }
    }
    for (int VAR_19 = 0; VAR_19 < 3; VAR_19++)
    {
        FUNC_1(VAR_16, VAR_11[VAR_19], VAR_10[VAR_19]);
        VAR_16 += VAR_10[VAR_19];
    }

    return VAR_2;
}
