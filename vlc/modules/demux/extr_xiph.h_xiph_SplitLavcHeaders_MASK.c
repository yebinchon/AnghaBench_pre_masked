
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(unsigned VAR_2[],
                                        const void *VAR_3[], unsigned *VAR_4,
                                        unsigned VAR_5, const void *VAR_6)
{
    const uint8_t *VAR_7 = (const uint8_t *)VAR_6;
    const uint8_t *VAR_8 = &VAR_7[VAR_5];
    if (VAR_5 < 2)
        return VAR_0;

    const unsigned VAR_9 = FUNC_1(VAR_7, VAR_5);
    if(VAR_9 == 0)
        return VAR_0;
    if (VAR_4)
        *VAR_4 = VAR_9;

    for (unsigned VAR_10=0; VAR_10 < VAR_9; VAR_10++)
    {

        VAR_2[VAR_10] = FUNC_0(VAR_7);
        if(&VAR_7[2U + VAR_2[VAR_10]] > VAR_8)
            return VAR_0;
        VAR_3[VAR_10] = VAR_7 + 2;
        VAR_7 += VAR_2[VAR_10] + 2;
    }
    return VAR_1;
}
