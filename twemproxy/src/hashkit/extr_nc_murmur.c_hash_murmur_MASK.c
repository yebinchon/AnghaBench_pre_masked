
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t
FUNC_0(const char *VAR_0, size_t VAR_1)
{





    const unsigned int VAR_2 = 0x5bd1e995;
    const uint32_t VAR_3 = (0xdeadbeef * (uint32_t)VAR_1);
    const int VAR_4 = 24;




    uint32_t VAR_5 = VAR_3 ^ (uint32_t)VAR_1;



    const unsigned char * VAR_6 = (const unsigned char *)VAR_0;

    while (VAR_1 >= 4) {
        unsigned int VAR_7 = *(unsigned int *)VAR_6;

        VAR_7 *= VAR_2;
        VAR_7 ^= VAR_7 >> VAR_4;
        VAR_7 *= VAR_2;

        VAR_5 *= VAR_2;
        VAR_5 ^= VAR_7;

        VAR_6 += 4;
        VAR_1 -= 4;
    }



    switch(VAR_1) {
    case 3:
        VAR_5 ^= ((uint32_t)VAR_6[2]) << 16;

    case 2:
        VAR_5 ^= ((uint32_t)VAR_6[1]) << 8;

    case 1:
        VAR_5 ^= VAR_6[0];
        VAR_5 *= VAR_2;

    default:
        break;
    };






    VAR_5 ^= VAR_5 >> 13;
    VAR_5 *= VAR_2;
    VAR_5 ^= VAR_5 >> 15;

    return VAR_5;
}
