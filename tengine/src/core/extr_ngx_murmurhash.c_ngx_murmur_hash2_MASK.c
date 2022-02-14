
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;



uint32_t
FUNC_0(u_char *VAR_0, size_t VAR_1)
{
    uint32_t VAR_2, VAR_3;

    VAR_2 = 0 ^ VAR_1;

    while (VAR_1 >= 4) {
        VAR_3 = VAR_0[0];
        VAR_3 |= VAR_0[1] << 8;
        VAR_3 |= VAR_0[2] << 16;
        VAR_3 |= VAR_0[3] << 24;

        VAR_3 *= 0x5bd1e995;
        VAR_3 ^= VAR_3 >> 24;
        VAR_3 *= 0x5bd1e995;

        VAR_2 *= 0x5bd1e995;
        VAR_2 ^= VAR_3;

        VAR_0 += 4;
        VAR_1 -= 4;
    }

    switch (VAR_1) {
    case 3:
        VAR_2 ^= VAR_0[2] << 16;

    case 2:
        VAR_2 ^= VAR_0[1] << 8;

    case 1:
        VAR_2 ^= VAR_0[0];
        VAR_2 *= 0x5bd1e995;
    }

    VAR_2 ^= VAR_2 >> 13;
    VAR_2 *= 0x5bd1e995;
    VAR_2 ^= VAR_2 >> 15;

    return VAR_2;
}
