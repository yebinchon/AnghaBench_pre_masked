
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(unsigned VAR_3[],
                                    const void *VAR_4[], unsigned *VAR_5,
                                    unsigned VAR_6, const void *VAR_7)
{
    const uint8_t *VAR_8 = (const uint8_t *)VAR_7;
    const uint8_t *VAR_9 = &VAR_8[VAR_6];
    if (VAR_6 < 1)
        return VAR_1;


    const unsigned VAR_10 = FUNC_0(VAR_8, VAR_6);
    if(VAR_10 == 0)
        return VAR_1;

    if (VAR_5)
        *VAR_5 = VAR_10;







    ++VAR_8;

    unsigned VAR_11 = 0;
    for (unsigned VAR_12 = 0; VAR_12 < VAR_10 - 1; VAR_12++)
    {
        VAR_3[VAR_12] = 0;
        for (;;) {
            if (VAR_8 >= VAR_9)
                return VAR_1;
            VAR_3[VAR_12] += *VAR_8;
            if (*VAR_8++ != 255)
                break;
        }
        if(VAR_0 - VAR_11 < VAR_3[VAR_12])
            return VAR_1;
        VAR_11 += VAR_3[VAR_12];
    }
    if(VAR_8 + VAR_11 > VAR_9)
        return VAR_1;

    for (unsigned VAR_13 = 0; VAR_13 < VAR_10 - 1; VAR_13++)
    {
        VAR_4[VAR_13] = VAR_8;
        VAR_8 += VAR_3[VAR_13];
    }

    VAR_3[VAR_10 - 1] = VAR_9 - VAR_8;
    VAR_4[VAR_10 - 1] = VAR_8;

    return VAR_2;
}
