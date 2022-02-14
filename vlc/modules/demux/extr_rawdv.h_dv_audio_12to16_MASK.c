
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static inline uint16_t FUNC_0( uint16_t VAR_0 )
{
    uint16_t VAR_1, VAR_2;

    VAR_0 = (VAR_0 < 0x800) ? VAR_0 : VAR_0 | 0xf000;
    VAR_1 = (VAR_0 & 0xf00) >> 8;

    if (VAR_1 < 0x2 || VAR_1 > 0xd) {
        VAR_2 = VAR_0;
    } else if (VAR_1 < 0x8) {
        VAR_1--;
        VAR_2 = (VAR_0 - (256 * VAR_1)) << VAR_1;
    } else {
        VAR_1 = 0xe - VAR_1;
        VAR_2 = ((VAR_0 + ((256 * VAR_1) + 1)) << VAR_1) - 1;
    }

    return VAR_2;
}
