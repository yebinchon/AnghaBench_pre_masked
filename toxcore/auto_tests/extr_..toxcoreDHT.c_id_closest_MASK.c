
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;

int FUNC_0(const uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    size_t VAR_4;
    uint8_t VAR_5, VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {

        VAR_5 = VAR_1[VAR_4] ^ VAR_2[VAR_4];
        VAR_6 = VAR_1[VAR_4] ^ VAR_3[VAR_4];

        if (VAR_5 < VAR_6)
            return 1;

        if (VAR_5 > VAR_6)
            return 2;
    }

    return 0;
}
