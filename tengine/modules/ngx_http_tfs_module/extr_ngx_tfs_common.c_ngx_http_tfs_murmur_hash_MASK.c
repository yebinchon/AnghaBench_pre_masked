
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;


 size_t VAR_0 ;

uint32_t
FUNC_0(u_char *VAR_1, size_t VAR_2)
{
    uint32_t VAR_3, VAR_4;

    VAR_3 = VAR_0 ^ VAR_2;

    while (VAR_2 >= 4) {
        VAR_4 = VAR_1[0];
        VAR_4 |= VAR_1[1] << 8;
        VAR_4 |= VAR_1[2] << 16;
        VAR_4 |= VAR_1[3] << 24;

        VAR_4 *= 0x5bd1e995;
        VAR_4 ^= VAR_4 >> 24;
        VAR_4 *= 0x5bd1e995;

        VAR_3 *= 0x5bd1e995;
        VAR_3 ^= VAR_4;

        VAR_1 += 4;
        VAR_2 -= 4;
    }

    switch (VAR_2) {
    case 3:
        VAR_3 ^= VAR_1[2] << 16;
    case 2:
        VAR_3 ^= VAR_1[1] << 8;
    case 1:
        VAR_3 ^= VAR_1[0];
        VAR_3 *= 0x5bd1e995;
    }

    VAR_3 ^= VAR_3 >> 13;
    VAR_3 *= 0x5bd1e995;
    VAR_3 ^= VAR_3 >> 15;

    return VAR_3;
}
