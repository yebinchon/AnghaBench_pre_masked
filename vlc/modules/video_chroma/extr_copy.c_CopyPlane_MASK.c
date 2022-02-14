
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int const*,size_t const) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, size_t VAR_1,
                      const uint8_t *VAR_2, size_t VAR_3,
                      unsigned VAR_4, int VAR_5)
{
    const size_t VAR_6 = FUNC_0(VAR_3, VAR_1);
    if (VAR_5 != 0)
    {
        for (unsigned VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        {
            uint16_t *VAR_8 = (uint16_t *) VAR_0;
            const uint16_t *VAR_9 = (const uint16_t *) VAR_2;

            if (VAR_5 > 0)
                for (unsigned VAR_10 = 0; VAR_10 < (VAR_6 / 2); VAR_10++)
                    *VAR_8++ = (*VAR_9++) >> (VAR_5 & 0xf);
            else
                for (unsigned VAR_11 = 0; VAR_11 < (VAR_6 / 2); VAR_11++)
                    *VAR_8++ = (*VAR_9++) << ((-VAR_5) & 0xf);
            VAR_2 += VAR_3;
            VAR_0 += VAR_1;
        }
    }
    else if (VAR_3 == VAR_1)
        FUNC_1(VAR_0, VAR_2, VAR_6 * VAR_4);
    else
    for (unsigned VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
        FUNC_1(VAR_0, VAR_2, VAR_6);
        VAR_2 += VAR_3;
        VAR_0 += VAR_1;
    }
}
