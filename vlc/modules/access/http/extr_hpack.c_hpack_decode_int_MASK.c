
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint_fast32_t ;
typedef int uint8_t ;
typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static int_fast32_t FUNC_1(unsigned VAR_3,
                                     const uint8_t **restrict VAR_4,
                                     size_t *restrict VAR_5)
{
    const uint8_t *VAR_6 = *VAR_4;
    size_t VAR_7 = *VAR_5;

    FUNC_0(VAR_3 >= 1 && VAR_3 <= 8);
    FUNC_0(VAR_7 >= 1);

    unsigned VAR_8 = (1 << VAR_3) - 1;
    uint_fast32_t VAR_9 = *(VAR_6++) & VAR_8;
    VAR_7--;

    if (VAR_9 == VAR_8)
    {
        unsigned VAR_10 = 0;
        uint8_t VAR_11;

        do
        {
            if (VAR_7-- < 1)
            {
                VAR_2 = VAR_0;
                return -1;
            }

            if (VAR_10 >= 28)
            {
                VAR_2 = VAR_1;
                return -1;
            }

            VAR_11 = *(VAR_6++);
            VAR_9 += (VAR_11 & 0x7F) << VAR_10;
            VAR_10 += 7;
        }
        while (VAR_11 & 0x80);
    }

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;
    return VAR_9;
}
