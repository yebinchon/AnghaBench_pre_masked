
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast8_t ;
typedef int uint_fast32_t ;
typedef int uint_fast16_t ;


 char* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ) ;

char *FUNC_2(const void *VAR_0, size_t VAR_1)
{
    static const char VAR_2[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    const unsigned char *VAR_3 = VAR_0;
    char *VAR_4 = FUNC_0((((VAR_1 + 2) / 3) * 4) + 1);
    char *VAR_5 = VAR_4;

    if (FUNC_1(VAR_4 == ((void*)0)))
        return ((void*)0);

    while (VAR_1 >= 3) {
        uint_fast32_t VAR_6 = (VAR_3[0] << 16) | (VAR_3[1] << 8) | VAR_3[2];

        *(VAR_5++) = VAR_2[(VAR_6 >> 18)];
        *(VAR_5++) = VAR_2[(VAR_6 >> 12) & 0x3f];
        *(VAR_5++) = VAR_2[(VAR_6 >> 6) & 0x3f];
        *(VAR_5++) = VAR_2[(VAR_6 >> 0) & 0x3f];
        VAR_3 += 3;
        VAR_1 -= 3;
    }

    switch (VAR_1) {
        case 2: {
            uint_fast16_t VAR_7 = (VAR_3[0] << 8) | VAR_3[1];

            *(VAR_5++) = VAR_2[(VAR_7 >> 10)];
            *(VAR_5++) = VAR_2[(VAR_7 >> 4) & 0x3f];
            *(VAR_5++) = VAR_2[(VAR_7 << 2) & 0x3f];
            *(VAR_5++) = '=';
            break;
        }

        case 1: {
            uint_fast8_t VAR_8 = VAR_3[0];

            *(VAR_5++) = VAR_2[(VAR_8 >> 2)];
            *(VAR_5++) = VAR_2[(VAR_8 << 4) & 0x3f];
            *(VAR_5++) = '=';
            *(VAR_5++) = '=';
            break;
        }
    }

    *VAR_5 = '\0';
    return VAR_4;
}
